#include"itemwidget.h"
#include"xdialog.h"
ItemWidget::ItemWidget(const QString &text, QListWidget *parent ):QWidget(parent)
, m_editButton(new QPushButton("Edit"))
, m_deleteButton(new QPushButton("Delete"))
{
    m_text = text;

            m_editButton = new QPushButton("Edit");
            m_deleteButton = new QPushButton("Delete");

            QHBoxLayout *layout = new QHBoxLayout;
            //设置布局的自适应性
            layout->setContentsMargins(0, 0, 0, 0);
            layout->setSpacing(0);

            layout->addWidget(new QLabel(m_text));
            layout->addStretch();
            layout->addWidget(m_editButton);
            layout->addWidget(m_deleteButton);
            setLayout(layout);

            m_editButton->hide();
            m_deleteButton->hide();

            connect(m_editButton, &QPushButton::clicked, this, &ItemWidget::onEditButtonClicked);
            connect(m_deleteButton, &QPushButton::clicked, this, &ItemWidget::onDeleteButtonClicked);
}

ItemWidget::~ItemWidget()
{
    qDebug()<<"释放ItemWidget："<<m_text;
}

//void ItemWidget::Button_display()
//{
//    m_deleteButton->setVisible(true);
//    m_editButton->setVisible(true);
//}
QString ItemWidget::text() const
{
    return m_text;
}
void ItemWidget::onEditButtonClicked()
{
    //QMessageBox::information(this, "Edit", m_text);
    XDialog *edit=new XDialog("编辑分类");
    edit->show();

}
void ItemWidget::onDeleteButtonClicked()

{
    QMessageBox::StandardButton reply = QMessageBox::question(this, tr("确认"), tr("是否删除?"), QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        // 如果用户确定
        if(delete_ParentClass)//删除父分类
        {
            qDebug()<<"即将删除父分类";
            if(shop->delete_ParentClassification(m_text))
            {
                qDebug()<<"删除父分类"<<m_text<<"成功";
                emit update_ParentClassificationUI();
            }
            else
            {
                qDebug()<<"删除父分类"<<m_text<<"失败";
            }
        }
        else//删除子分类
        {
            qDebug()<<"即将删除子分类";
            shop->delete_SubClassification(m_text);
            emit update_SubClassificationUI();

        }





    } else
    {
        // 如果用户取消

    }
}


 QPushButton* ItemWidget::m_editButton_return()
 {
     return m_editButton;
 }
 QPushButton* ItemWidget:: m_deleteButton_return()
 {
     return m_deleteButton;
 }
