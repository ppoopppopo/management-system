#include "good.h"
#include "ui_good.h"


good::good(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::good)
{
    ui->setupUi(this);
    //设置表
    QStandardItemModel* model = new QStandardItemModel();
    //根据空间，自动改变列宽，用户与程序不能改变列宽
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //去除选中虚线框
    setFocusPolicy(Qt::NoFocus);
    QStringList labels;
    labels <<"商品名" << "条形码" << "分类" << "售价"<<"会员价"<<"进价"<<"库存"<<"单位";
    model->setHorizontalHeaderLabels(labels);
    ui->tableView->setModel(model);


    //从数据库导入数据到goods
    QJsonArray goods=shop->goods_list();
    int count=goods.count();
    qDebug()<<count<<goods[0];
    for (int i=0;i<count;i++)
    {
        QJsonObject good=goods[i].toObject();
        qDebug()<<good;
        QString good_values;
        for(int ii=0;ii<8;ii++)
        {
            /*//ui->tableView->
            good_values.append("  ");
            good_values.append(good.value(good.keys()[ii]).toString()); */
            //添加数据到第i行第ii列
            model->setItem(i, ii, new QStandardItem(good.value(good.keys()[ii]).toString()));

        }
        //qDebug()<<good_values;
    // ui->listWidget->addItem(good_values);
    }
    comboxs_of_classification_init();
}

void good::comboxs_of_classification_init()
{
    classification *vlayout=new classification(ui->VLayoutClassification,2);
}

good::~good()
{
    delete ui;
}

