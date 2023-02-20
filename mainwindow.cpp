#include "mainwindow.h"
#include "ui_mainwindow.h"

mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    //this->setAttribute(Qt::WA_DeleteOnClose,true);
    //ui->listWidget_3
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::on_pushButton_clicked()
{
    good *goods=new good;
    goods->show();

}

void mainwindow::on_pushButton_2_clicked()
{
    Purchase *purchase=new Purchase;
    purchase->show();
    //this->close();
}
