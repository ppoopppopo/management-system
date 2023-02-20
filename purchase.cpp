#include "purchase.h"
#include "ui_purchase.h"

Purchase::Purchase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Purchase)
{
    ui->setupUi(this);

    comboxs_of_classification_init();
    //combox_of_vendors_init();
    ui->comboBox->addItem("供应商");
    ui->comboBox->addItem("11");
    ui->comboBox->addItem("111");

    ui->pushButton_2->setToolTip("点击获取帮助");
           connect(ui->pushButton_2, &QPushButton::clicked, [](){
        QMessageBox::information(nullptr, "说明", "未勾选则会按照本次进货价价格更新商品进货价，之后的销售单利润会按照变更后的进货价计算，"
                                                "勾选之后按照入库进货价及数量，系统内商品剩余的进货价及数量加权平均计算"
                                                "（eg：10元成本价进了10件商品，卖的剩下5件，花了15元成本价又进货10件，通过系统的进货价加权平均计算[10*5+15*10]/[5*10]=13.33");
    });
    // 设置表头
    QStringList headerLabels;
    headerLabels << "商品名/条形码" << "零售价" << "进价" << "数量" << "生产日期" << "单位" << "总额";
    ui->tableWidget->setColumnCount(headerLabels.size());
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//Connect_Init();

ui->lineEdit->setPlaceholderText("商品名");


QDate currentDate = QDate::currentDate();
QString year = QString::number(currentDate.year());
QString month = QString("%1").arg(currentDate.month(), 2, 10, QChar('0'));
QString day = QString("%1").arg(currentDate.day(), 2, 10, QChar('0'));

QString currentDateStr = " "+year + "-" + month + "-" + day;

ui->label_purchase_id->setText(" PUR20230219-1");
ui->label_purchase_date->setText(currentDateStr);
}

Purchase::~Purchase()
{
    delete ui;
}

void Purchase::combox_of_vendors_init()
{

}

void Purchase::comboxs_of_classification_init()
{


   classification *vlayout=new classification(ui->VLayoutClassification,1);
   vlayout->classificationUI_init();
   connect(vlayout, &classification::parentClassificationClicked, this, &Purchase::on_parentClassificationClicked);
}

void Purchase::on_ParentClassification_clicked(QPushButton* button)
{
    qDebug()<<ui->VLayoutClassification->indexOf(button)<<button->text();
    int ButtonParentClassificationLocation=ui->VLayoutClassification->indexOf(button)+1;
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
//根据ParentClassification来更新进货界面左边存放父分类里的商品信息
    //获取在ParentClassification里的商品列表
    QJsonArray goods=shop->Name_PurchasePrice_Inventory_of_goods(ParentClassification,true);
    GoodsInformationRight_Update(goods);
   // QStringList goods_of_ParentClassification=shop->goods_of_ParentClassification(ParentClassification)1;//QStringList待定
    //......
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
            ui-> VLayoutClassification->insertWidget(ButtonParentClassificationLocation+i,ButtonSubClassification);

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
            QWidget* widget = ui->VLayoutClassification->itemAt(ButtonParentClassificationLocation)->widget();
            ui->VLayoutClassification->removeWidget(widget);
            delete widget;
        }
    }
    qDebug()<<ParentClassification<<"拥有的子分类"<<SubClassifications;

}

void Purchase::on_SubClassification_clicked(QString SubClassification_Name, int ButtonParentClassificationLocation)
{
    //通过父分类去shop_sql类返回一个子分类列表显示在进货左界面
    QJsonArray goods=shop->Name_PurchasePrice_Inventory_of_goods(SubClassification_Name,false);
    GoodsInformationRight_Update(goods);
}

void Purchase::GoodsInformationRight_Update(QJsonArray goods)
{
    ui->listWidget->clear();//清理右商品信息列表，为了后面的更新列表做准备
    qDebug()<<goods.size()<<goods[0].toObject()["name"];
    //然后根据该分类中商品在listwidget中存放商品名、进价和库存，创建一个自定义item，每个item为垂直布局，上面显示商品名，下面显示进价和库存
    for (int i=0;i<goods.size();i++)
    {
        //创建自定义item
        QListWidgetItem* item = new QListWidgetItem();
        QWidget* widget = new QWidget();
        QHBoxLayout* layout = new QHBoxLayout();

        QLabel* nameLabel = new QLabel(goods[i].toObject()["name"].toString());
        qDebug()<<"右界面更新"<<goods[i].toObject()["name"].toString()<<goods[i].toObject()["purchase_price"].toDouble()<<goods[i].toObject()["inventory"].toInt();
        QLabel* costLabel = new QLabel("进价: " + QString::number(goods[i].toObject()["purchase_price"].toDouble())
                + "  库存: " + QString::number(goods[i].toObject()["inventory"].toInt()));

        layout->addWidget(nameLabel);
        layout->addWidget(costLabel);

        widget->setLayout(layout);
        item->setSizeHint(widget->sizeHint());
        ui->listWidget->addItem(item);
        ui->listWidget->setItemWidget(item, widget);
    }


}

void Purchase::on_parentClassificationClicked(QString ParentClassification)
{
        qDebug()<<"收到分类管理的信号"<<ParentClassification;
        QJsonArray goods=shop->Name_PurchasePrice_Inventory_of_goods(ParentClassification,true);
        GoodsInformationRight_Update(goods);
}





void Purchase::on_comboBox_activated(const QString &vendor)
{
    qDebug()<<vendor;
    Vendor=vendor;

}

void Purchase::on_comboBox_2_activated(const QString &pay)
{
    qDebug()<<pay;
    Pay=pay;
}




void Purchase::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QWidget* widget=ui->listWidget->itemWidget(item);
    QList<QLabel*> labels = widget->findChildren<QLabel*>();
    QString productName ;
    qDebug()<<"productName "<<productName;
    for (QLabel* label : labels)
    {
            // 获取商品名
            productName = label->text();
            break;
    }
    // 查找左侧表格中是否已有该商品
    bool found = false;
    int row = 0;
    for (int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        QTableWidgetItem* item = ui->tableWidget->item(i, 0);
        if (item->text().startsWith(productName))
        {
            found = true;
            row = i;
            break;
        }
    }
    // 如果已有该商品，数量+1，更新总额
    if (found)
    {
        qDebug()<<"found"<<found;
        QTableWidgetItem* item = ui->tableWidget->item(row, 3);
        int count = item->text().toInt() + 1;
        item->setText(QString::number(count));

        QLabel* totalLabel = qobject_cast<QLabel*>(ui->tableWidget->cellWidget(row, 6)->layout()->itemAt(1)->widget());
        double total = count * ui->tableWidget->item(row, 2)->text().toDouble();
        totalLabel->setText(QString::number(total, 'f', 2));
    }
    else
    {
        //获取商品信息
        QJsonObject productInfo=shop->PurchaseLeft_GoodImformation(productName);
        qDebug()<<productInfo["bar_code"].toInt()<<productInfo["selling_price"].toInt()<<productInfo["purchase_price"].toInt()<<productInfo["unit"].toString();

        //向下添加一行
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());;
        // 自定义各列下的单元格
        //第一列
        QTableWidgetItem *item1 = new QTableWidgetItem(productName+"/ "+productInfo["bar_code"].toInt());
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, item1);
        //第二列
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(productInfo["selling_price"].toDouble()));
        item2->setFlags(item2->flags() & ~Qt::ItemIsEditable);
        qDebug()<<productInfo["selling_price"].toDouble();
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, item2);
        //第三列
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::number(productInfo["purchase_price"].toDouble()));
        qDebug()<<productInfo["purchase_price"].toInt();
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 2, item3);
        //第四列
        QTableWidgetItem *item4 = new QTableWidgetItem("1");
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 3, item4);
        //第五列
        QWidget *widget5 = new QWidget();
        QHBoxLayout *layout5 = new QHBoxLayout(widget5);
        QDateEdit *dateEdit5 = new QDateEdit(QDate::currentDate());
        layout5->addWidget(dateEdit5);
        layout5->setAlignment(Qt::AlignCenter);
        widget5->setLayout(layout5);
        ui->tableWidget->setCellWidget(ui->tableWidget->rowCount()-1, 4, widget5);
        // 添加一个日历按钮到日期单元格的右侧
        QPushButton *calendarButton = new QPushButton();
        calendarButton->setIcon(QIcon(":/images/calendar.png"));
        calendarButton->setFixedSize(20, 20);
        layout5->addWidget(calendarButton);
        // 点击日历按钮时弹出一个日历控件
        QCalendarWidget *calendarWidget = new QCalendarWidget();
        calendarWidget->setGridVisible(true);
        connect(calendarButton, &QPushButton::clicked, [=] {
        calendarWidget->show();
        });
        // 当用户在日历中选择日期时，将其设置为日期单元格的日期
        connect(calendarWidget, &QCalendarWidget::clicked, [=](const QDate &date)
        {
            dateEdit5->setDate(date);
        }
        );
        //第六列
        QTableWidgetItem *item6 = new QTableWidgetItem(productInfo["unit"].toString());
        item6->setFlags(item6->flags() & ~Qt::ItemIsEditable);
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 5, item6);
        //第七列
        QWidget *widget7 = new QWidget();
        QVBoxLayout *layout7 = new QVBoxLayout(widget7);
        QPushButton *deleteButton = new QPushButton("删除");
        connect(deleteButton, &QPushButton::clicked, this, [=]()
        {
            onDeleteButtonClicked(ui->tableWidget->row(item6));
        }
        );
        QLabel *totalLabel = new QLabel("0.00");
        layout7->addWidget(deleteButton);
        layout7->addWidget(totalLabel);
        layout7->setAlignment(Qt::AlignCenter);
        widget7->setLayout(layout7);
        ui->tableWidget->setCellWidget(ui->tableWidget->rowCount()-1, 6, widget7);

        ui->tableWidget->setRowHeight(ui->tableWidget->rowCount()-1, 70);//设置列宽

    }
}

void Purchase::onDeleteButtonClicked(int row)
{
    ui->tableWidget->removeRow(row);
}



void Purchase::on_lineEdit_textChanged(const QString &arg1)
{
   QJsonArray goods=shop->end_of_searching(ui->lineEdit->text());
   GoodsInformationRight_Update(goods);

}

void Purchase::on_Submit_incoming_goods_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("进货管理");
        msgBox.setText("确认提交吗？");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int ret = msgBox.exec();
        if (ret == QMessageBox::Ok)
        {
            // 点击了“确认”按钮，执行提交操作
            for(int row=0; row<ui->tableWidget->rowCount(); row++)
            {
            QString productName = ui->tableWidget->item(row, 0)->text();
            QString purchasePrice = ui->tableWidget->item(row, 2)->text();//double
            QString count = ui->tableWidget->item(row, 3)->text();//int
            QWidget* widget = ui->tableWidget->cellWidget(row, 4); // 获取该单元格的QWidget
            QHBoxLayout* layout = qobject_cast<QHBoxLayout*>(widget->layout()); // 获取该QWidget的QHBoxLayout
            QDateEdit *dateEdit = widget->findChild<QDateEdit*>(); // 查找子控件 QDateEdit
            if (dateEdit) {
                QDate date = dateEdit->date(); // 获取 QDateEdit 中的日期
                int  year= date.year();
                int month = date.month();
                int day = date.day();
            qDebug()<<productName<<purchasePrice<<count<<year<<month<<day;
            }

            }
            // 获取供应商
            QString supplier = ui->comboBox->currentText();

            // 获取账户
            QString account = ui->comboBox_2->currentText();

            // 获取折扣率
            QString discountStr = ui->lineEdit_3->text();


            // 获取折后应付
            QString payableStr = ui->lineEdit_5->text();
            double payable = payableStr.toDouble();

            // 获取说明
            QString description = ui->lineEdit_2->text();

            // 获取本单实付
            QString actualPayStr = ui->lineEdit_6->text();
            double actualPay = actualPayStr.toDouble();
            qDebug()<<supplier<<account<<discountStr<<payableStr<<description<<actualPayStr;
        }
        else
        {
            // 点击了“取消”按钮，不执行提交操作
        }
}
