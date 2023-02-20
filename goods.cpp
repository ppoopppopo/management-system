#include "goods.h"
#include "ui_goods.h"

goods::goods(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::goods)
{
    ui->setupUi(this);
}

goods::~goods()
{
    delete ui;
}
