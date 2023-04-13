#include "inventory.h"
#include "ui_inventory.h"
extern shop_sql *shop;
Inventory::Inventory(QString GoodName,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inventory)
{
    name=GoodName;
    ui->setupUi(this);
    setWindowTitle(GoodName+"库存上下限设置");
    QStringList Inventory_up_and_down=shop->Inventory_up_and_down(GoodName);
    InventoryCap=Inventory_up_and_down[0].toInt();
    MinimumInvenTory=Inventory_up_and_down[1].toInt();
    ui->InventoryCap->setText(QString::number(InventoryCap));
    ui->MinimumInvenTory->setText(QString::number(MinimumInvenTory));

}

Inventory::~Inventory()
{


    delete ui;

}

void Inventory::on_pushButton_clicked()
{
    int new_InventoryCap=ui->InventoryCap->text().toInt();
    int new_MinimumInvenTory=ui->MinimumInvenTory->text().toInt();
    if(InventoryCap==new_InventoryCap&&MinimumInvenTory==new_MinimumInvenTory)
    {
        QMessageBox::information(this,"未设置","未设置库存上下限",QMessageBox::Ok);
        delete this;
    }
    else
        if(new_InventoryCap>0&&new_MinimumInvenTory>0&&new_MinimumInvenTory<new_InventoryCap)
        {
            if(shop->new_Data_Inventory_up_and_down(name,new_InventoryCap,new_MinimumInvenTory))
            {
                 QMessageBox::information(this,"成功","设置库存上下限成功",QMessageBox::Ok);
                delete this;
            }
            else
            {
                QMessageBox::warning(this, "警告","设置失败,请检查输入的数据");
                return;
            }
        }
    else
        {
            if(new_InventoryCap<=new_MinimumInvenTory)
            {
                 QMessageBox::warning(this, "警告","设置失败,请注意上限大于下限");
                 return;

            }
            if(new_InventoryCap<0)
            {
                QMessageBox::warning(this, "警告","设置失败,请注意上限要大于0");
                return;
            }
            else
            {
                QMessageBox::warning(this, "警告","设置失败,请注意下限要大于0");
                return;
            }


        }
}
