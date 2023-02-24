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
    void new_user_save(QString name, QString sex, QString age,QString password,QString user) ;
    bool is_exist(QString table, QString field, QString content);
    bool opendb(QString name);
    int login_checks(QString password,QString user);//检查登录账户和密码是否正确
    int father_classification_count();//父分类数量
    int SubClassifiactionsCount(QString ParentClassification);//父分类中子分类数量
    int GoodsCount();
    QStringList father_classification_list();//父分类表
    QStringList child_classification_list(QString father_classification);//子分类表
    QStringList goods_of_ParentClassification(QString ParentClassification);
    bool father_classification_onlyone(QString father_classification);//判断父分类是否有子分类，有就返回false
    QJsonArray goods_list();
    QJsonArray end_of_searching(QString text);
    QJsonArray Name_PurchasePrice_Inventory_of_goods(QString Conditional,bool ParentClassification);
    QJsonObject PurchaseLeft_GoodImformation(QString name);


signals:
private:
QSqlDatabase database;
};

#endif // SHOP_SQL_H
