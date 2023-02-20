#ifndef PURCHASE_H
#define PURCHASE_H

#include <QWidget>
#include<QDebug>
#include<QToolButton>
#include<QTextCodec>
#include<QDateEdit>
#include "classification.h"
#include "shop_sql.h"
#include<QCalendarWidget>
namespace Ui {
class Purchase;
}
extern shop_sql *shop;
class Purchase : public QWidget
{
    Q_OBJECT

public:

    explicit Purchase(QWidget *parent = nullptr);
    ~Purchase();
    QString Vendor;
    QString Pay;
    void combox_of_vendors_init();//供应商下拉列表初始化
    void comboxs_of_classification_init();//分类列表初始化


void on_ParentClassification_clicked(QPushButton* button);//点击父分类后事件
void on_SubClassification_clicked(QString ParentClassification,int ButtonParentClassificationLocation);//点击子分类后事件
void GoodsInformationRight_Update(QJsonArray goods);//进货左界面更新商品信息
//void Connect_Init();//信号槽部署
public slots:
//void on_VLayoutClassification_Button_Click();//点击VLayoutClassification布局里的按钮后事件
void on_parentClassificationClicked(QString ParentClassification);
void onDeleteButtonClicked(int row);


private slots:
    void on_comboBox_activated(const QString &vendor);//获取供应商名

    void on_comboBox_2_activated(const QString &pay);//获取支付方式



   // void on_Submit_incoming_goods_clicked();

//    void on_Button_classification_edit_clicked();//编辑分类

    void on_listWidget_itemClicked(QListWidgetItem *item);



    void on_lineEdit_textChanged(const QString &arg1);

    void on_Submit_incoming_goods_clicked();

private:
    Ui::Purchase *ui;

};

#endif // PURCHASE_H
