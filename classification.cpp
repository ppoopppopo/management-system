#include "classification.h"
#include "ui_classification.h"
#include"itemwidget.h"
#include "xdialog.h"
classification::classification(QVBoxLayout *V,int choose)
{
qDebug()<<"分类管理构造";
   this->setAttribute(Qt::WA_DeleteOnClose,true);

   v=V;//将那边的垂直布局指针赋到这里来
   this->choose=choose;
   v->setSpacing(0);
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
    QPushButton *classification_edit=new QPushButton("编辑分类");
    classification_edit->setSizePolicy(sizePolicy1);
    v->addWidget(classification_edit);
    qDebug()<<v->indexOf(classification_edit);

    //连接点击编辑分类按钮槽函数
    connect(classification_edit, &QPushButton::clicked, [=]()
    {

        show();

    }
    );

    //查找分类表有几个父分类，然后向下添加父分类按钮
    QStringList father_classification_list=shop->father_classification_list();
    QPushButton *button=nullptr;
    for (int i=0;i<father_classification_list.size();i++)
    {
        //判断父分类是否有子分类▲
        if(shop->father_classification_onlyone(father_classification_list[i])==1)
        {
            button=new QPushButton(father_classification_list[i]);
        }
        else
        {
            button=new QPushButton(father_classification_list[i]+" ▼");//▼意思为点击会生成子分类
        }
        button->setSizePolicy(sizePolicy1);
        button->setStyleSheet("QPushButton:hover { background-color: #E0E0E0;}");//去除按钮的圆角
        v->addWidget(button);

        //连接点击父分类槽函数
        connect(button, &QPushButton::clicked,  [=]()
        {
              on_ParentClassification_clicked(button);
        }
        );
    }

    button=new QPushButton("其他分类");
    button->setSizePolicy(sizePolicy1);
    button->setStyleSheet("QPushButton:hover { background-color: #E0E0E1;}");//去除按钮的圆角
    v->addWidget(button);
    connect(button, &QPushButton::clicked, [=]()
    {
            on_ParentClassification_clicked(button);
    }
    );


    v->addStretch();
}

void classification::on_ParentClassification_clicked(QPushButton *button)
{
    int ButtonParentClassificationLocation=v->indexOf(button)+1;
    QString str=button->text();
    QString ParentClassification;
    QStringList SubClassifications;
    int i;
    for(i=0;i<str.size();i++)
    {
        if(str[i]==" ")//检测到有子分类的父分类
        {
            break;
        }
        ParentClassification[i]=str[i];
    }
    //根据成员变量choose来做出相应的真正点击事件
    switch (choose)
    {
        case 1:
        emit Purchase_parentClassificationClicked(ParentClassification);
        case 2:
        emit Good_parentClassificationClicked(ParentClassification);
        break;

    }
    if(str[i+1]=="▼")
    {
        //还没展开的父分类，下面进行展开操作
        SubClassifications=shop->child_classification_list(ParentClassification);
        //更新按钮
        button->setText(ParentClassification+" ▲");
        for (i=0;i<SubClassifications.size();i++)
        {
            QPushButton *ButtonSubClassification=new QPushButton(SubClassifications[i]);
            QString SubClassification_Name=SubClassifications[i];
            ButtonSubClassification->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            v->insertWidget(ButtonParentClassificationLocation+i,ButtonSubClassification);

            //子分类点击槽函数
            connect(ButtonSubClassification,&QPushButton::clicked,[this,SubClassification_Name,ButtonParentClassificationLocation]()
            {
               on_SubClassification_clicked(SubClassification_Name,ButtonParentClassificationLocation);
            }
            );

        }

    }
    else if(str[i+1]=="▲")
    {
        //已展开的父分类，下面进行删除父分类下的子分类相应的按钮
        int numChildren = shop->SubClassifiactionsCount(ParentClassification);
        //更新按钮
        button->setText(ParentClassification+" ▼");
        qDebug()<<ParentClassification<<"的子分类数量为"<<numChildren;
        for (int j = 0; j < numChildren; j++)
        {
            QWidget* widget = v->itemAt(ButtonParentClassificationLocation)->widget();
            v->removeWidget(widget);
            delete widget;
        }
    }
    qDebug()<<ParentClassification<<"拥有的子分类"<<SubClassifications;
}

void classification::on_SubClassification_clicked(QString SubClassification_Name, int)
{
    switch (choose)
    {
        case 1:
        emit Purchase_subClassificationClicked(SubClassification_Name);
        case 2:
        //emit Good_parentClassificationClicked(ParentClassification);
        break;

    }
}

void classification::ListWidget_ParentClassification_Update()
{
    QListWidget *listWidget = ui->listWidget_father;
    listWidget->clear();


    // ...
     QStringList father_classification_list=shop->father_classification_list();
     QListWidgetItem *item1=nullptr;
     ItemWidget *itemWidget1=nullptr;
     for (int i=0;i<father_classification_list.size();i++)
     {
         item1 = new QListWidgetItem;
         item1->setSizeHint(QSize(0, 40));//设置列表项的高度
         listWidget->addItem(item1);
         itemWidget1 = new ItemWidget(father_classification_list[i], listWidget);
         listWidget->setItemWidget(item1, itemWidget1);


     }
     QListWidget *listWidget2 =ui-> listWidget_child;
connect(listWidget, &QListWidget::currentItemChanged, [=](QListWidgetItem *current, QListWidgetItem *previous)
     //点击某一项后事件
{

 if (previous)
 {
     ItemWidget *itemWidget = qobject_cast<ItemWidget*>(listWidget->itemWidget(previous));
     itemWidget->m_editButton_return()->hide();
     itemWidget->m_deleteButton_return()->hide();
 }

 if (current)
 {
     ItemWidget *itemWidget = qobject_cast<ItemWidget*>(listWidget->itemWidget(current));
     connect(itemWidget,&ItemWidget::update_ParentClassificationUI,this,&classification::ListWidget_ParentClassification_Update);//删除父分类后更新父分类表
     itemWidget->m_editButton_return()->show();
     itemWidget->m_deleteButton_return()->show();
     itemWidget->delete_ParentClass=true;
     ParentClassRecently=itemWidget->text();
     ListWidget_SubClassification_Update(ParentClassRecently,listWidget2);
 }
});


}

void classification::ListWidget_SubClassification_Update(QString ParentClassification,QListWidget *listWidget2)
{
    listWidget2->clear();
    QListWidgetItem *item2=nullptr;
            ItemWidget *itemWidget2=nullptr;
    qDebug()<<"点击了分类管理ui的父分类，名字为"<<ParentClassification;

    QStringList SubClassList=shop->child_classification_list(ParentClassification);
    for (int i=0;i<SubClassList.size();i++)
    {
        item2 = new QListWidgetItem;
        item2->setSizeHint(QSize(0, 40));//设置列表项的高度
        listWidget2->addItem(item2);
        itemWidget2 = new ItemWidget(SubClassList[i], listWidget2);
        listWidget2->setItemWidget(item2, itemWidget2);
    }
    connect(listWidget2, &QListWidget::currentItemChanged, [=](QListWidgetItem *current, QListWidgetItem *previous)
    {
         qDebug()<<current;qDebug()<<previous;
      if (previous)
      {
          ItemWidget *itemWidget = qobject_cast<ItemWidget*>(listWidget2->itemWidget(previous));
          itemWidget->m_editButton_return()->hide();
          itemWidget->m_deleteButton_return()->hide();
      }

      if (current)
      {

          ItemWidget *itemWidget2 = qobject_cast<ItemWidget*>(listWidget2->itemWidget(current));
          connect(itemWidget2,&ItemWidget::update_SubClassificationUI,this,[=]()
          {
              ListWidget_SubClassification_Update(ParentClassification,listWidget2);
          }
          );//删除子分类后更新子分类表
          itemWidget2->m_editButton_return()->show();
          itemWidget2->m_deleteButton_return()->show();
          itemWidget2->delete_ParentClass=false;
          qDebug()<<"点击了分类管理ui的子分类，名字为"<<itemWidget2->text();

      }
    });
}
void classification::classificationUI_init()
{
    ui=new  Ui::classification;
    ui->setupUi(this);
    //this->setWindowFlags(Qt::FramelessWindowHint);//隐藏边框
    ui->Button_add_child->setEnabled(false);
    connect(ui->listWidget_father,SIGNAL(itemSelectionChanged()),this,SLOT(Button_add_child_state()));//判断是否点击了父分类



    ListWidget_ParentClassification_Update();



   // connect(ui->listWidget_father, &QListWidget::currentItemChanged, this, &classification::onFatherClassificationSelected);
    // ...


}


classification::~classification()
{
    qDebug()<<"退出分类管理,并清除商品管理的分类布局元素";
    emit close();
    delete ui;
}

void classification::Button_add_child_state()
{
    if(ui->listWidget_father->selectedItems().empty())
    {
        ui->Button_add_child->setEnabled(false);
    }
    else
    {
        ui->Button_add_child->setEnabled(true);
    }
}

void classification::on_Button_add_father_clicked()
{
    XDialog *edit=new XDialog("新增父分类");
    edit->show();
connect(edit,&XDialog::update_ParentPlassificationUI,this,&classification::ListWidget_ParentClassification_Update);//添加父分类后更新父分类表


}

void classification::on_Button_add_child_clicked()
{
    XDialog *AddChlidDialog=new XDialog("新增子分类");
    AddChlidDialog->show();
    connect(this,&classification::send_ParentClassRecently,AddChlidDialog,&XDialog::receive_ParentClassRecently);//将子分类的父分类送到AddChlidDialog
    emit send_ParentClassRecently(ParentClassRecently);

}

void classification::classificationUI_SubClassification_Update()
{

}


