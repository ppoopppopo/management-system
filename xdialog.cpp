#include "xdialog.h"

XDialog::XDialog(QString dialog_type,QWidget *parent)
    : QDialog(parent)
{
    this->dialog_type=dialog_type;
    setWindowTitle(dialog_type);//边框标题
   // this->setWindowFlags(Qt::FramelessWindowHint);//隐藏边框
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

XDialog::~XDialog()
{
    qDebug()<<m_lineEdit->text();
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
        if(dialog_type=="新增父分类")
        {
            //实现各种弹出框点击OK的相对应事件
            QString newParentClassification=m_lineEdit->text();
            qDebug()<<newParentClassification;
            //判断新的父分类是否与存在的父分类相等名字
            if(newParentClassification=="")
            {
                 QMessageBox::question(this, tr("提示"), tr("请输入新父分类名"), QMessageBox::Yes);
                 return;
            }
            if(shop->Exist_ParentClassification(newParentClassification))
            {
                shop->addParentClassification(newParentClassification);
                QMessageBox::question(this, tr("成功"), tr("添加成功"), QMessageBox::Yes);
                emit update_ParentPlassificationUI();
            }
            else
            {
                QMessageBox::question(this, tr("失败"), tr("添加失败"), QMessageBox::Yes);
            }

        }
        if(dialog_type=="新增子分类")
        {
            QString newSubClassification=m_lineEdit->text();
            if(newSubClassification=="")
            {
                 QMessageBox::question(this, tr("提示"), tr("请输入新子分类名"), QMessageBox::Yes);
                 return;
            }
            if(shop->Exist_SubClassification(newSubClassification))
            {
                shop->addSubClassification(this->ParentClassRecently,newSubClassification);
            }
            else
            {
                 QMessageBox::question(this, tr("失败"), tr("添加失败"), QMessageBox::Yes);
            }
        }

        delete this;
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

void XDialog::receive_ParentClassRecently(QString ParentClassRecently)
{

    this->ParentClassRecently=ParentClassRecently;
    qDebug()<<"收到分类管理发送的最近父分类"<<this->ParentClassRecently;
}

