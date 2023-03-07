#include "good.h"
#include "ui_good.h"


void good::closeEvent(QCloseEvent *event)
{
   // 显示一个询问对话框，询问用户是否确定关闭窗口
       QMessageBox::StandardButton reply = QMessageBox::question(this, tr("确认"), tr("是否保存已修改的信息?"), QMessageBox::Yes|QMessageBox::No);
       if (reply == QMessageBox::Yes) {
           // 如果用户确定关闭窗口，并真正修改商品信息
           //商品修改
           event->accept();
       } else {
           // 如果用户取消，则不修改并关闭窗口
           event->ignore();
       }
}

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
    original_goods=shop->goods_list();
    tablewidget_update(original_goods);
    ui->tableWidget->setAlternatingRowColors(true);//表格的行是否用交替底色显示
    //把ui->pushButton设置为不可点击
    ui->pushButton->setEnabled(false);
    //选中单元格槽函数
    connect(ui->tableWidget, SIGNAL(itemSelectionChanged()), this, SLOT(onItemSelectionChanged()));
    //当选中一个或多个某行表头时表示即将要删除该行的商品数据，点击ui->pushButton之后提示确认要删除

    //检测单元格更改
        connect(ui->tableWidget, SIGNAL(cellChanged(int, int)), this, SLOT(on_cell_changed(int, int)));
        // 监听selectionChanged()信号(选中行)
        //QItemSelection和QModelIndex类分别表示选择和索引的模型。这些参数提供了选择模型变化前和变化后的选中项和取消选中项的信息
        //connect(ui->tableWidget->selectionModel(), SIGNAL(selectionChanged(const QItemSelection&, const QItemSelection&)),
               // this, SLOT(on_selection_changed(const QItemSelection&, const QItemSelection&)));

}

void good::comboxs_of_classification_init()
{
    classification *vlayout=new classification(ui->VLayoutClassification,2);
    vlayout->classificationUI_init();//初始化编辑分类界面
    connect(vlayout, &classification::Good_parentClassificationClicked, this, &good::on_parentClassificationClicked);
}

void good::tablewidgetInit()
{

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
    if(ui->tableWidget->currentColumn()==0)//如果选中的单元格为商品名
    {

        QTableWidgetItem * item=ui->tableWidget->item(ui->tableWidget->currentRow(),0);
        goodName_recently=item->text();
        //遍历QMap<QString, QString>goodName_temporary,当所有的key和value不存在str_goodName时新增key为str_goodName，
//        if (!goodName_temporary.contains(goodName_recently)) {
//                goodName_temporary.insert(goodName_recently, goodName_recently);
//                qDebug()<<"新增的原始商品名"<<goodName_recently;
//                qDebug()<<"商品名临时储存"<<goodName_temporary;
//            }
        bool  found_key_or_value=false;
        QMapIterator<QString, QString> iter(goodName_temporary);
            while (iter.hasNext())
            {
                iter.next();
                // 如果key或value等于goodName_recently，退出函数
                if (iter.key() == goodName_recently || iter.value() == goodName_recently)
                {
                    found_key_or_value=true;
                    break;
                }
            }
            if(!found_key_or_value)// 如果没有与goodName_recently相等的key或value，则在map中新增一个key-value对
            {
                goodName_temporary.insert(goodName_recently, goodName_recently);
                qDebug()<<"新增的原始商品名"<<goodName_recently;
                qDebug()<<"商品名临时储存"<<goodName_temporary;
            }


        qDebug()<<"最近选中的商品名"<<goodName_recently;

    }

    if(deleting_goods==false)
    {
        rows.clear();//删除之前储存的即将删除的商品行
        goodsNames.clear();
        QModelIndexList indexes = ui->tableWidget->selectionModel()->selectedRows();
        if(indexes.size()>0)//选中行数大于0
        {
            //把删除按钮设置为可点击
            ui->pushButton->setEnabled(true);
            //foreach语法遍历选中的QModelIndexList对象indexes，其中QModelIndex表示Qt框架中的一个单元格或者列表项的模型索引
            foreach (QModelIndex index, indexes) //index会被设置为QModelIndexList对象中的一个元素，然后我们可以使用index对象的row()方法来获取该索引对应的行号
            {
                int row = index.row();
                if (!rows.contains(row))
                {

                    rows.append(row);
                    QTableWidgetItem * item=ui->tableWidget->item(row,0);
                    QString shop_name=item->text();
                    goodsNames.append(shop_name);
                    qDebug()<<"选中商品的商品名"<<shop_name;
                }
            }
            qDebug() << "Selected rows: " << rows;
        }
        else
        {
             ui->pushButton->setEnabled(false);
        }
    }







}

void good::on_cell_changed(int row, int column)
{
    qDebug()<<"user_edit"<<user_edit;
    if(user_edit==true)
    {
        // 获取更改后的单元格数据
        QTableWidgetItem *header_item = ui->tableWidget->horizontalHeaderItem(column);
        QString header_text = header_item->text();
        QTableWidgetItem *item1 = ui->tableWidget->item(row, column);//已修改（界面上的修改）的单元格
        QString new_data = item1->text();

        QString shop_name;
        if(header_text=="商品名称")//如果更改的是商品名，则把原商品名赋给shop_name，然后在modify_goods相应的value添加商品名修改记录
        {
            /*遍历QMap<QString, QString>goodName_temporary,根据QString goodName_recently，先遍历key，如果存在与goodName_recently相等的key，则将new_data赋值到所对应的value；
             * 如果不存在与goodName_recently相等的key，则肯定在value中，找到与goodName_recently相等的value后将new_data赋值到value*/
            //QMap<QString, QString>::iterator it = goodName_temporary.find(goodName_recently);
            //                   if (it != goodName_temporary.end())
            //                   {
            //                       // 如果找到了旧的商品名，将新的商品名添加到该商品名对应的value中
            //                       QString &value = it.value();
            //                       if (!value.contains(new_data))
            //                       {
            //                           shop_name=it.key();
            //                           //value.append("111");
            //                           value.append(new_data);
            //                       }
            //                   }
            //                   else
            //                   {
            //                       shop_name=goodName_recently;
            //                       // 如果找不到旧的商品名，将新的商品名作为一个新的key-value对添加到QMap中
            //                       goodName_temporary[goodName_recently] = new_data;
            //                   }
            QMapIterator<QString, QString> iter(goodName_temporary);
               while (iter.hasNext())
               {
                   iter.next();
                   // 如果key等于goodName_recently，更新其对应的value
                   if (iter.key() == goodName_recently) {
                       shop_name=goodName_recently;
                       goodName_temporary[goodName_recently] = new_data;
                       break;
                   }
                   // 如果value等于goodName_recently，更新该value的值
                   if (iter.value() == goodName_recently)
                   {
                       //QMap<QString, QString>::iterator i = goodName_temporary.find(iter.key());
                       shop_name=iter.key();
                       goodName_temporary[iter.key()] = new_data;
                       break;
                   }
               }

            qDebug() << "商品名" << shop_name << ",更改属性 " << header_text << " 更改为: " << new_data;
        }
        else
        {
            QTableWidgetItem * item2=ui->tableWidget->item(row,0);//已修改（界面上的修改）的单元格所对应的商品名单元格
            shop_name=item2->text();qDebug() << "商品名" << shop_name << ",更改属性 " << header_text << " 更改为: " << new_data;
        }


        // 把更改的数据存放到QMap中
        if (modify_goods.contains(shop_name))
        { // 如果QMap中已经有该商品名对应的QJsonObject对象，则修改该对象中的属性
            QJsonObject obj = modify_goods[shop_name];
            obj[header_text] = new_data;
            modify_goods[shop_name] = obj;
        }
        else
        { // 如果QMap中没有该商品名对应的QJsonObject对象，则创建一个新的对象，并插入到QMap中
            QJsonObject obj;
            obj[header_text] = new_data;
            modify_goods.insert(shop_name, obj);
        }
    }
    qDebug()<<modify_goods;
}


void good::on_selection_changed(const QItemSelection& , const QItemSelection&)
{

    if(deleting_goods==false)
    {
        rows.clear();//删除之前储存的即将删除的商品行
        goodsNames.clear();
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
                goodsNames.append(shop_name);
                qDebug()<<"选中商品的商品名"<<shop_name;
            }
        }
        qDebug() << "Selected rows: " << rows;
    }


}



void good::on_pushButton_clicked()
{
    deleting_goods=true;//开启即将删除模式
    // 弹出确认对话框
    QMessageBox::StandardButton confirmButton = QMessageBox::warning(this, tr("确认删除"),
                                                                     tr("确认删除所选的商品吗？"), QMessageBox::Yes | QMessageBox::No);
    if (confirmButton == QMessageBox::Yes)
    {
        //因void good::on_selection_changed()导致rows实时变化，得克隆一个rows
        QList<int>rows2=rows;

        //qSort()方法将rows2排序(升序）。这个排序是为了避免删除行号时发生变化。
        qSort(rows2);

        //遍历所有行号，从后往前调用removeRow()方法来删除行。注意，在删除行的时候，要从后往前删除，否则删除的行号会发生变化
        for (int i = rows2.size() - 1; i >= 0; --i)
        {
            qDebug()<<i;
            ui->tableWidget->removeRow(rows2[i]);//删除行
        }

        //最后真正删除商品
        qDebug()<<"即将真正删除的商品"<<goodsNames;
        qDebug()<<shop->delete_goods_by_goodName1(goodsNames);

    }
    deleting_goods=false;
}
