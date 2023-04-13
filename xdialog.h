#ifndef XDIALOG_H
#define XDIALOG_H


#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>
#include<qDebug>
#include "shop_sql.h"
#include<QMessageBox>
extern shop_sql *shop;
class XDialog : public QDialog
{
    Q_OBJECT

public:
    QString ParentClassRecently;
     QString dialog_type;
    XDialog(QString edit_type,QWidget *parent = nullptr);//edit_type为了实现各种弹出框点击OK的相对应事件
    ~XDialog();
    QString edit_text();//获取编辑栏文本
public slots:
    void accept() override;//重写QDialog的accept（）函数
    void reject() override;//重写
    void receive_ParentClassRecently(QString ParentClassRecently);
signals:
    void update_ParentClassificationUI();
    void update_SubClassificationUI();
private:
    QLineEdit *m_lineEdit;


};


#endif // XDIALOG_H
