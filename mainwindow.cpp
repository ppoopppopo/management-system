#include "mainwindow.h"
#include "ui_mainwindow.h"

mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    //this->setAttribute(Qt::WA_DeleteOnClose,true);
    //ui->listWidget_3
    QTimer *timer = new QTimer(this);
            connect(timer, &QTimer::timeout, this, &mainwindow::updateTime);
            timer->start(1000);
            ui->label->setText("傻逼");
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

void mainwindow::updateTime()
{
    QDateTime dateTime = QDateTime::currentDateTime();
            QString timeString = dateTime.toString("hh:mm:ss");
            ui->label->setText(timeString);
}

void mainwindow::on_pushButton_2_clicked()
{
    Purchase *purchase=new Purchase;
    purchase->show();
    //this->close();
}
