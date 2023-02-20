#include "xdialog.h"

XDialog::XDialog(QString dialog_type,QWidget *parent)
    : QDialog(parent)
{
    this->dialog_type=dialog_type;
    setWindowTitle(dialog_type);//边框标题
    this->setWindowFlags(Qt::FramelessWindowHint);//隐藏边框
    QLabel *label = new QLabel(dialog_type, this);
    m_lineEdit = new QLineEdit(this);

    QPushButton *okButton = new QPushButton("OK", this);
    connect(okButton, &QPushButton::clicked, this, &XDialog::accept);


    QPushButton *cancelButton = new QPushButton("Cancel", this);
    connect(cancelButton, &QPushButton::clicked, this, &XDialog::reject);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(label);
    layout->addWidget(m_lineEdit);
    layout->addWidget(okButton);
    layout->addWidget(cancelButton);
}

QString XDialog::edit_text()
{
    return m_lineEdit->text();
}

void XDialog::accept()
{
    // 在这里实现自己的接受函数逻辑

        // 一定要调用基类的 accept() 函数，以确保对话框被正确关闭
        QDialog::accept();
        if(dialog_type=="")
        {
            //实现各种弹出框点击OK的相对应事件
        }
}
void XDialog::reject()
{
    // 在这里实现自己的取消函数逻辑

        // 一定要调用基类的 reject() 函数，以确保对话框被正确关闭
        QDialog::reject();
        if(dialog_type=="")
        {
            //实现各种弹出框点击OK的相对应事件
        }
}
