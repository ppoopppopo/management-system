#ifndef SHOP_SQL_H
#define SHOP_SQL_H

#include"qdebug.h"
#include"qsqldatabase.h"
#include"qsqlerror.h"
#include"qsqlquery.h"
#include"qapplication.h"
#include"qdatetime.h"
#include"qjsonarray.h"
#include"qjsonobject.h"
#include"qstringlist.h"
#include<QString>
class shop_sql
{

public:


    explicit shop_sql();
~shop_sql();



   // explicit shop_sql(QString name);
    void Unit_init();
    void new_user_save(QString name, QString sex, QString age,QString password,QString user) ;
    void addParentClassification(QString);
    void addSubClassification(QString,QString);
    void add_new_good(QString name,QString bar_code,QString classification,
                      QString selling_price,QString member_price,QString purchase_price,
                      QString InventoryCap,QString MinimumInvenTory,QString unit);
    bool is_exist(QString table, QString field, QString content);
    bool opendb(QString name);
    int login_checks(QString password,QString user);//检查登录账户和密码是否正确
    int father_classification_count();//父分类数量
    int SubClassifiactionsCount(QString ParentClassification);//父分类中子分类数量
    int GoodsCount();
    QStringList father_classification_list();//父分类表
    QStringList child_classification_list(QString father_classification);//子分类表
    QStringList goods_of_ParentClassification(QString ParentClassification);
    QStringList Inventory_up_and_down(QString name);
    int father_classification_onlyone(QString father_classification);//判断父分类是否有子分类，有就返回false
    QJsonArray goods_list();
    QStringList Unit_list();
    QJsonArray goods_list_by_classification(QString Conditional,bool ParentClassification);//通过分类名获取商品
    QJsonArray goods_list_by_dateRange(QString startDate,QString EndDate);
    QJsonArray end_of_searching(QString text);//根据text找商品
    QJsonArray GoodsSearch(QString text);
    QJsonArray Name_PurchasePrice_Inventory_of_goods(QString Conditional,bool ParentClassification);//根据父、子分类返回商品名、库存的商品列表
    QJsonArray All_Name_PurchasePrice_Inventory_of_goods();
    QJsonObject PurchaseLeft_GoodImformation(QString name);
    bool delete_goods_by_goodName1(QStringList);//通过商品名删除商品1
    bool delete_goods_by_goodName2(QStringList);//2
    QStringList goodsNames_list();//商品名表
    //bool newData_goodname(QString);
    bool newData_barcode(QString name,QString bar_code);//根据条件更新商品条码
    bool newData_classification(QString name,QString clasification);//根据条件更新分类
    bool newData_price(QString name,double price,int price_type);//根据条件更新价格,price_price为1是售价，2会员价，3进价
    bool new_Data_Inventory_up_and_down(QString name,int InventoryCap,int MinimumInvenTory);
    bool Exist_ParentClassification(QString);
    bool Exist_SubClassification(QString);
    bool delete_ParentClassification(QString);
    bool delete_SubClassification(QString);
    QString find_ParentClass_by_SubClass(QString);



signals:
private:
QSqlDatabase database;
};

#endif // SHOP_SQL_H
