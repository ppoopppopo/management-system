#include "good.h"
#include "ui_good.h"


good::good(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::good)
{
    ui->setupUi(this);

    comboxs_of_classification_init();
    // 设置列数
    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "商品名称" << "条码" << "分类" << "售价" << "会员价" << "进价" << "库存" << "单位");
    // 自适应列表头和内容
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//table自适应宽
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //添加每行数据
    QJsonArray shops=shop->goods_list();
    qDebug()<<shops;
    for (int i=0;i<shops.size();i++) {
        //向下添加一行
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        QJsonObject shop=shops[i].toObject();
        qDebug()<<shop;
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(shop["name"].toString())); // 将名称插入到第 1 列
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(QString::number(shop["bar_code"].toInt()))); // 将条码插入到第 2 列
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(shop["classification"].toString())); // 将分类插入到第 3 列
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(QString::number(shop["selling_price"].toDouble()))); // 将售价插入到第 4 列
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 4, new QTableWidgetItem(QString::number(shop["member_price"].toDouble()))); // 将会员价插入到第 5 列
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 5, new QTableWidgetItem(QString::number(shop["purchase_price"].toDouble()))); // 将进价插入到第 6 列
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 6, new QTableWidgetItem(QString::number(shop["inventory"].toInt()))); // 将进价插入到第 7 列
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 7, new QTableWidgetItem(shop["unit"].toString())); // 将进价插入到第 8 列

        ui->tableWidget->setRowHeight(ui->tableWidget->rowCount()-1, 40);//设置行高
    }
    //把ui->pushButton设置为不可点击
    ui->pushButton->setEnabled(false);
    //如果有选中一个或多个行表头，则解除ui->pushButton的不能点击
    connect(ui->tableWidget, SIGNAL(itemSelectionChanged()), this, SLOT(onItemSelectionChanged()));
    //当选中一个或多个某行表头时表示即将要删除该行的商品数据，点击ui->pushButton之后提示确认要删除

}

void good::comboxs_of_classification_init()
{
    classification *vlayout=new classification(ui->VLayoutClassification,2);
}

good::~good()
{
    delete ui;
}

void good::onItemSelectionChanged()
{
    int selectedRowCount = ->selectedRows().count();
    QList<QModelIndex>a=ui->tableWidget->selectionModel()->selectedRows();
    qDebug()<<selectedRowCount;
    qDebug()<<a;
    qDebug()<<a.size();
//    for (int i=0;a.size();i++) {
//        qDebug()<<a[i].row();
//    }

QModelIndex *aa=ui->tableWidget->selectionModel();



//    if (selectedRowCount > 0) {
//        qDebug() << "Selected row header count: " << selectedRowCount;
//        //输出选中的垂直表头在表格的第几行
//        //获取所有选中的行表头
//        QList<QTableWidgetItem*> selectedHeaders = ui->tableWidget->selectedItems();
//        //遍历所有选中的行表头
//        for (int i = 0; i < selectedHeaders.size(); i++) {
//        QTableWidgetItem *headerItem = selectedHeaders[i];
//        //获取该行表头所在的行数
//        int row = ui->tableWidget->row(headerItem);
//        qDebug() << "Selected row header: " << headerItem->text() << " at row index: " << row;
//        }
//    } else {
//        qDebug() << "No row header selected.";
//    }

}

