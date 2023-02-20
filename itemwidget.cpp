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
    XDialog *edit=new XDialog("edit");
    edit->show();

}
void ItemWidget::onDeleteButtonClicked()

{
    QMessageBox::information(this, "Delete", m_text);
}
 QPushButton* ItemWidget::m_editButton_return()
 {
     return m_editButton;
 }
 QPushButton* ItemWidget:: m_deleteButton_return()
 {
     return m_deleteButton;
 }
