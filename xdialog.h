#ifndef XDIALOG_H
#define XDIALOG_H


#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>

class XDialog : public QDialog
{
    Q_OBJECT

public:
     QString dialog_type;
    XDialog(QString edit_type,QWidget *parent = nullptr);//edit_type为了实现各种弹出框点击OK的相对应事件
    QString edit_text();//获取编辑栏文本
public slots:
    void accept() override;//重写QDialog的accept（）函数
    void reject() override;//重写

private:
    QLineEdit *m_lineEdit;
};


#endif // XDIALOG_H
