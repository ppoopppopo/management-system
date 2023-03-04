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
    tablewidget_update(shops);
    ui->tableWidget->setAlternatingRowColors(true);//表格的行是否用交替底色显示
    //把ui->pushButton设置为不可点击
    ui->pushButton->setEnabled(false);
    //选中单元格槽函数
    connect(ui->tableWidget, SIGNAL(itemSelectionChanged()), this, SLOT(onItemSelectionChanged()));
    //当选中一个或多个某行表头时表示即将要删除该行的商品数据，点击ui->pushButton之后提示确认要删除

    //检测单元格更改
        connect(ui->tableWidget, SIGNAL(cellChanged(int, int)), this, SLOT(on_cell_changed(int, int)));
    //    // 监听单元格双击信号
    //    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int, int)), this, SLOT(on_cell_double_clicked(int, int)));
        // 监听selectionChanged()信号(选中行)
        //QItemSelection和QModelIndex类分别表示选择和索引的模型。这些参数提供了选择模型变化前和变化后的选中项和取消选中项的信息
        connect(ui->tableWidget->selectionModel(), SIGNAL(selectionChanged(const QItemSelection&, const QItemSelection&)),
                this, SLOT(on_selection_changed(const QItemSelection&, const QItemSelection&)));

}

void good::comboxs_of_classification_init()
{
    classification *vlayout=new classification(ui->VLayoutClassification,2);
    vlayout->classificationUI_init();//初始化编辑分类界面
    connect(vlayout, &classification::Good_parentClassificationClicked, this, &good::on_parentClassificationClicked);
}

void good::tablewidget_update(QJsonArray goods)
{
    user_edit=false;
    for (int i=0;i<goods.size();i++) {
        //向下添加一行
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        QJsonObject shop=goods[i].toObject();
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
    user_edit=true;
}

good::~good()
{
    delete ui;
}

void good::on_parentClassificationClicked(QString ParentClassification)
{
    qDebug()<<"点击商品界面的父分类"<<ParentClassification;
    ui->tableWidget->clear();
    // 设置列数
    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "商品名称" << "条码" << "分类" << "售价" << "会员价" << "进价" << "库存" << "单位");
    QJsonArray goods=shop->goods_list_by_classification(ParentClassification,true);
    qDebug()<<goods;
    tablewidget_update(goods);
}

void good::onItemSelectionChanged()
{
//    QList<QModelIndex>a=ui->tableWidget->selectionModel()->selectedRows();//获取QTableWidget中用户选择的行QModelIndex,，其中每个对象表示用户选择的一行
//    //QModelIndex对象包含有关模型中项目的索引信息
//    if(a.size()>0)//出现选中行
//    {
//        qDebug()<<"QModelIndex对象"<<a;qDebug()<<"QModelIndex对象个数"<<a.size();
//        for (int i=0;i<a.size();i++)
//        {
//            int row = a.at(i).row();
//            qDebug() << "当前操作的行数"<<row;
//            //将选中的行储存起来，为了后面用户删除商品


//        }

//    }
//    else
//    {

//    }
 ui->pushButton->setEnabled(false);




}

void good::on_cell_changed(int row, int column)
{
    qDebug()<<"user_edit"<<user_edit;
    if(user_edit==true)
    {
        // 获取更改后的单元格数据
        QTableWidgetItem *header_item = ui->tableWidget->horizontalHeaderItem(column);
        QString header_text = header_item->text();
        QTableWidgetItem *item1 = ui->tableWidget->item(row, column);
        QString new_data = item1->text();
        QTableWidgetItem * item2=ui->tableWidget->item( row,0);
        QString shop_name=item2->text();
        qDebug() << "商品名" << shop_name << ",更改属性 " << header_text << " 更改为: " << new_data;
    }
}


void good::on_selection_changed(const QItemSelection& , const QItemSelection&)
{
    rows.clear();//删除之前储存的即将删除的商品行
    QModelIndexList indexes = ui->tableWidget->selectionModel()->selectedRows();
    //foreach语法遍历选中的QModelIndexList对象indexes，其中QModelIndex表示Qt框架中的一个单元格或者列表项的模型索引
    foreach (QModelIndex index, indexes) //index会被设置为QModelIndexList对象中的一个元素，然后我们可以使用index对象的row()方法来获取该索引对应的行号
    {
        int row = index.row();
        if (!rows.contains(row))
        {
            //把删除按钮设置为可点击
            ui->pushButton->setEnabled(true);
            rows.append(row);
            QTableWidgetItem * item=ui->tableWidget->item(row,0);
            QString shop_name=item->text();
            qDebug()<<shop_name;
        }
    }
    qDebug() << "Selected rows: " << rows;

}



void good::on_pushButton_clicked()
{
    // 弹出确认对话框
    QMessageBox::StandardButton confirmButton = QMessageBox::warning(this, tr("确认删除"),
                                                                     tr("确认删除所选的商品吗？"), QMessageBox::Yes | QMessageBox::No);
    if (confirmButton == QMessageBox::Yes)
    {
        //qSort()方法将所有行号排序。这个排序是为了避免删除行号时发生变化。
        qSort(rows);
        //最后，我们遍历所有行号，从后往前调用removeRow()方法来删除行。注意，在删除行的时候，要从后往前删除，否则删除的行号会发生变化
        for (int i = rows.size() - 1; i >= 0; --i)
        {
            ui->tableWidget->removeRow(rows[i]);
        }
    }
}
