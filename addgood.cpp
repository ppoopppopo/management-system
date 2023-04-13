#include "addgood.h"
#include "ui_addgood.h"

AddGood::AddGood(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddGood)
{
    ui->setupUi(this);
    //分类初始化
    QString str = "QComboBox QAbstractItemView:item\
    \n{\
        font-family: PingFangSC-Regular;\n\
        font-size:12px;\n\
        min-height:20px;\n\
        min-width:20px;\n\
    }\n";
    QStyledItemDelegate* styledItemDelegate = new QStyledItemDelegate();//重新设置一下item的代理，然后我我们在通过样式表来改变新的item的高度
    ui->Classification->setItemDelegate(styledItemDelegate);
    ui->Classification->setStyleSheet(str);
    ui->Classification->addItem("分类");
        ui->Classification->addItems(shop->father_classification_list());


        ui->lineEdit_Inventory->setText("0");
        ui->lineEdit_Inventory->setDisabled(true);
        //单位初始化

            ui->Unit->setItemDelegate(styledItemDelegate);
            ui->Unit->setStyleSheet(str);
        ui->Unit->addItem("单位");
        ui->Unit->addItems(shop->Unit_list());

ui->lineEdit_BarCode->setPlaceholderText("选填");
ui->lineEdit_InventoryCap->setPlaceholderText("选填");
ui->lineEdit_MinimumInvenTory->setPlaceholderText("选填");
}

bool AddGood::Adding_NewGood(QString name, QString bar_code, QString classification, QString selling_price, QString member_price, QString purchase_price, QString InventoryCap, QString MinimumInvenTory, QString unit)
{
    //先判断必填是否有空值
    if(name.isEmpty())
    {
        QMessageBox::critical(this, tr("错误"), tr("请填写商品名"), QMessageBox::Ok);
        return false;
    }
    if(classification=="分类")
    {
        classification="";
    }
    if(bar_code.isEmpty())
    {
        bar_code="";
    }
    if(unit=="单位")
    {
        unit="";
    }
    if(selling_price.isEmpty())
    {
        QMessageBox::critical(this, tr("错误"), tr("请填写售价"), QMessageBox::Ok);
        return false;
    }
    if(purchase_price.isEmpty())
    {
        QMessageBox::critical(this, tr("错误"), tr("请填写进价"), QMessageBox::Ok);
        return false;
    }
    if(member_price.isEmpty())
    {
        QMessageBox::critical(this, tr("错误"), tr("请填写会员价"), QMessageBox::Ok);
        return false;
    }
    if(InventoryCap.isEmpty())
    {
        InventoryCap="0";
    }
    if(MinimumInvenTory.isEmpty())
    {
        MinimumInvenTory="0";
    }
    shop->add_new_good(name,bar_code,classification,selling_price,member_price,purchase_price,InventoryCap,MinimumInvenTory,unit);

    return true;
}

AddGood::~AddGood()
{
    if(ADDED)
    {
        QMessageBox::information(this,ui->lineEdit_GoodName->text(),"添加商品成功",QMessageBox::Ok);
        emit add_good_finished();
    }


    delete ui;
}



void AddGood::on_OK_clicked()
{
    if(Adding_NewGood(ui->lineEdit_GoodName->text(),ui->lineEdit_BarCode->text(),ui->Classification->currentText(),
                            ui->lineEdit_SellingPrice->text(),ui->lineEdit_MenberPrice->text(),ui->lineEdit_PurchasePrice->text(),
                            ui->lineEdit_InventoryCap->text(),ui->lineEdit_MinimumInvenTory->text(),
                            ui->Unit->currentText()))
    {
        ADDED=true;
        delete this;

    }
    else
    {
        ADDED=false;
        return;
    }
}

void AddGood::on_pushButton_2_clicked()
{
ADDED=false;
}
