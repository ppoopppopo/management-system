#include "shop_sql.h"


shop_sql::shop_sql()
{
   // opendb(name);

//count++;

//qDebug()<<count;
    if(QSqlDatabase::contains("shop"))
    {

        qDebug()<<1;
        database = QSqlDatabase::database("shop");
    }
    else
    {
        qDebug()<<"找不到数据库sqlite连接,正在创建";
        database = QSqlDatabase::addDatabase("QSQLITE");
        qDebug()<<"获取程序下运行路径"<<qApp->applicationDirPath();
        database.setDatabaseName(qApp->applicationDirPath()+"/user.db");

    }
    if (!database.open())
    {
        qDebug() << "Error: Failed to connect database." << database.lastError();
        exit(-1);
    }
    QSqlQuery sql_query(database);//创建数据库操作对象
    //建账户表
    if(sql_query.exec("CREATE TABLE IF NOT EXISTS accounts (name TEXT,sex TEXT,age BIGINT,password TEXT,user TEXT PRIMARY KEY,creat_time TEXT,other BIGINT);"))
    {
        qDebug()<<"CREATE table accounts ok";
    }
    //建商品表
    if(sql_query.exec("CREATE TABLE IF NOT EXISTS goods (name TEXT,bar_code BIGINT,classification TEXT,selling_price DOUBLE,member_price DOUBLE,purchase_price DOUBLE,inventory INT,unit TEXT);"))
    {
        qDebug()<<"CREATE table goods ok";
    }
    //建分类表
    if(sql_query.exec("CREATE TABLE IF NOT EXISTS Classification (FatherClassification TEXT PRIMARY KEY,Subclassification TEXT PRIMARY KEY);"))
    {
        qDebug()<<"CREATE table Classification ok";
    }
    //建供应商表
    if(sql_query.exec("CREATE TABLE IF NOT EXISTS Vendors (VendorName TEXT,Contact TEXT,Phonenumber BIGINT);"))
    {
        qDebug()<<"CREATE table Vendors ok";
    }



}

shop_sql::~shop_sql()
{


    qDebug()<<"delete shop_sql ";//count;
}


//新添加的账户信息存入数据库
void shop_sql::new_user_save(QString name, QString sex, QString age,QString password,QString user)
{
	QSqlQuery sql_query;
	QString creat_time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString commond = "INSERT INTO accounts VALUES(";
    commond.append("'"+name+"',");
    commond.append("'"+sex+"',");
    commond.append("'"+age+"',");
    commond.append("'"+password+"',");
    commond.append("'"+user+"',");
    commond.append("'"+creat_time+"','')");

    if (sql_query.exec(commond))
	{
		qDebug() << "INSERT accounts ok";
	}
	else
	{
		qDebug() << "INSERT accounts error";
	}
}
//查询某表中某字段中是否存在该内容，参数一表名，参数二为字段，参数三字段内容
bool shop_sql::is_exist(QString table, QString field, QString content)
{
	QSqlQuery sql_query;
	QString commond = "SELECT * FROM ";
	commond.append(table);
	commond.append(" WHERE ");
	commond.append(field);
	commond.append(" = '");
	commond.append(content);
	commond.append("'");
	if (sql_query.exec(commond))
	{
		if (sql_query.next())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		qDebug() << "SELECT error";
		return false;
    }
}

int shop_sql::login_checks(QString password, QString user)
{
    QSqlQuery query(database);

     qDebug()<<query.exec("select * from accounts where user='" + user + "'"
        " and password='" +password + "'");

     if (query.next())
     {
         return 1;//登录成功
     }
     else
     {
         //查看用户名是否存在
         query.exec("select * from accounts where user='"+ user +"'" );
             if (query.next())
             {

                return -1;//密码错误
             }
             else
             {
                 return 0;//用户名不存在
             }
     }
}

int shop_sql::father_classification_count()
{
    QSqlQuery query(database);
    if(query.exec("SELECT COUNT(DISTINCT ParentClassification) FROM Classification"))
        //DISTINCT关键字用于删除重复的行。 COUNT函数用于计算结果集中的行数
    {
        if(query.next())
        {
            return query.value(0).toInt();
        }

    }
}

int shop_sql::SubClassifiactionsCount(QString ParentClassification)
{
    QSqlQuery query(database);
    if(query.exec("select count(SubClassification) from Classification where ParentClassification='"+ParentClassification+"'"))
    {
        if(query.next())
        {
            return query.value(0).toInt();
        }

    }
}

QStringList shop_sql::father_classification_list()
{
    QSqlQuery query(database);
    QStringList father_classification;
    if(query.exec("SELECT DISTINCT ParentClassification FROM Classification"))
    {
        while(query.next())
        {
            father_classification.append(query.value(0).toString());
        }
        return  father_classification;
    }
}

QStringList shop_sql::child_classification_list(QString father_classification)
{
    QSqlQuery query(database);
    QStringList Subclassifications;
    if(query.exec("select Subclassification from Classification where ParentClassification = '"+father_classification+"'"))
    {
        while(query.next())
        {
            Subclassifications.append(query.value(0).toString());
        }
        return  Subclassifications;;
    }
}

QStringList shop_sql::goods_of_ParentClassification(QString ParentClassification)
{
   // return;
}

bool shop_sql::father_classification_onlyone(QString father_classification)
{
    qDebug()<<father_classification;
    QSqlQuery query(database);
    if(query.exec("SELECT count (ParentClassification) from Classification where ParentClassification='"+father_classification+"'"))
    {

        if(query.next())
        {
            if(query.value(0).toInt()==1)
            {
                qDebug()<<"true";
                return true;
            }
            qDebug()<<"false";
            return false;
        }

    }

}

QJsonArray shop_sql::end_of_searching(QString text)
{
     QJsonArray result;

         QSqlQuery query;

         if (query.exec("SELECT name,purchase_price,inventory FROM goods WHERE name LIKE '%" + text + "%'"))
         {
             while (query.next())
             {

                 QJsonObject good;
                 good["name"]=query.value(0).toString();
                 good["purchase_price"]=query.value(1).toDouble();
                 good["inventory"]=query.value(2).toInt();
                 result.append(good);
             }
         }
         else
         {
             qDebug() << "Failed to execute query!";
         }
       return result;  // 返回 QJsonArray 对象
}
QJsonArray shop_sql::goods_list()
{
    QJsonArray list;
    QSqlQuery query(database);
    if(query.exec("select * from goods"))
    {
        while (query.next())
        {
            QJsonObject temp;
            temp["name"]=query.value(0).toString();
            temp["bar_code"]=query.value(1).toInt();
            temp["classification"]=query.value(2).toString();
            temp["selling_price"]=query.value(3).toDouble();
            temp["member_price"]=query.value(4).toDouble();
            temp["purchase_price"]=query.value(5).toDouble();
            temp["inventory"]=query.value(6).toInt();
            temp["unit"]=query.value(7).toString();
            list.append(temp);
        }
    }
    return list;
}

QJsonArray shop_sql::goods_list_by_classification(QString Conditional, bool ParentClassification)
{
    QSqlQuery query;
    QJsonArray goods;
    qDebug()<<"Conditional:"<<Conditional;
    //无论Conditional为父分类或子分类都要先根据Conditional提取商品相关信息
    if(query.exec("select * from goods where classification = '"+Conditional+"'"))
    {
        while (query.next())
        {
            QJsonObject temp;
            temp["name"]=query.value(0).toString();
            temp["bar_code"]=query.value(1).toInt();
            temp["classification"]=query.value(2).toString();
            temp["selling_price"]=query.value(3).toDouble();
            temp["member_price"]=query.value(4).toDouble();
            temp["purchase_price"]=query.value(5).toDouble();
            temp["inventory"]=query.value(6).toInt();
            temp["unit"]=query.value(7).toString();
            goods.append(temp);

        }
    }

    if(ParentClassification==true)//继续查找Conditional下的子分类有没有对应的商品
    {
        if(query.exec("select SubClassification from Classification where ParentClassification ='"+Conditional+"'"))
        {
            while (query.next())
            {
                QSqlQuery query2;
                if(query2.exec("select * from goods where classification ='"+query.value(0).toString()+"'"))
                {
                    while (query2.next())
                    {

                        QJsonObject temp;
                        temp["name"]=query2.value(0).toString();
                        temp["bar_code"]=query2.value(1).toInt();
                        temp["classification"]=query2.value(2).toString();
                        temp["selling_price"]=query2.value(3).toDouble();
                        temp["member_price"]=query2.value(4).toDouble();
                        temp["purchase_price"]=query2.value(5).toDouble();
                        temp["inventory"]=query2.value(6).toInt();
                        temp["unit"]=query2.value(7).toString();
                        qDebug()<<"temp:"<<temp;
                        goods.append(temp);

                    }

                }
            }
        }
    }
    return goods;
}



QJsonArray shop_sql::Name_PurchasePrice_Inventory_of_goods(QString Conditional,bool ParentClassification)
{
    QSqlQuery query;
    QJsonArray goods;
    qDebug()<<"Conditional:"<<Conditional;
    //无论Conditional为父分类或子分类都要先根据Conditional提取商品相关信息
    if(query.exec("select name,purchase_price,inventory from goods where classification = '"+Conditional+"'"))
    {
        while (query.next())
        {
            qDebug()<<"query"<<query.value(0).toString()<<query.value(1).toDouble()<<query.value(2).toInt();
            QJsonObject good;
            good["name"]=query.value(0).toString();
            good["purchase_price"]=query.value(1).toDouble();
            good["inventory"]=query.value(2).toInt();
            goods.append(good);

        }
    }

    if(ParentClassification==true)//继续查找Conditional下的子分类有没有对应的商品
    {
        if(query.exec("select SubClassification from Classification where ParentClassification ='"+Conditional+"'"))
        {
            while (query.next())
            {
                QSqlQuery query2;
                if(query2.exec("select name,purchase_price,inventory from goods where classification ='"+query.value(0).toString()+"'"))
                {
                    while (query2.next())
                    {
                        qDebug()<<"query"<<query2.value(0).toString()<<query2.value(1).toDouble()<<query2.value(2).toInt();
                        QJsonObject good;
                        good["name"]=query2.value(0).toString();
                        good["purchase_price"]=query2.value(1).toDouble();
                        good["inventory"]=query2.value(2).toInt();
                        goods.append(good);

                    }

                }
            }
        }
    }
    return goods;
}

QJsonObject shop_sql::PurchaseLeft_GoodImformation(QString name)
{
    qDebug()<<name;
    QSqlQuery query(database);
    QJsonObject good;
    if(query.exec("select bar_code,selling_price,purchase_price,unit from goods where name='"+name+"'"))
    {
         qDebug()<<"hello1"<<query.next();
        if(1)
        {
            qDebug()<<query.value(0).toInt()<<query.value(1).toInt()<<query.value(2).toInt()<<query.value(3).toString();
            good["bar_code"]=query.value(0).toInt();
            good["selling_price"]=query.value(1).toInt();
            good["purchase_price"]=query.value(2).toInt();
            good["unit"]=query.value(3).toString();
        }
        return good;
    }

}


bool shop_sql::delete_goods_by_goodName1(QStringList goodsNames)
{
    QSqlQuery query(database);
    QString sql = "DELETE FROM goods WHERE name = ?";
    if (!query.prepare(sql)) {
        qDebug() << "Failed to prepare SQL command:" << query.lastError().text();
        return false;
    }
    for (const QString& goodName : goodsNames) {
        query.bindValue(0, goodName);
        if (!query.exec()) {
            qDebug() << "Failed to delete product" << goodName << ":" << query.lastError().text();
            return false;
        }
    }
    return true;
}
bool shop_sql::delete_goods_by_goodName2(QStringList goodsNames)
{
    if (goodsNames.isEmpty()) {
        qDebug() << "Empty goods list, nothing to delete.";
        return false;
    }

    // 构造 SQL 删除语句,使用了 QString("?,").repeated(goods.size() - 1) 构造了一个形如 ?,?,?,... 的字符串，表示 IN 子句中的占位符。
    //然后将 goods 列表作为参数传递给 addBindValue() 函数即可，无需构造额外的 QVariantList 对象。
    QString sql = "DELETE FROM products WHERE name IN (" + QString("?,").repeated(goodsNames.size() - 1) + "?)";

    // 执行 SQL 删除语句
    QSqlQuery query(database);
    if (!query.prepare(sql)) {
        qDebug() << "Failed to prepare SQL command:" << query.lastError().text();
        return false;
    }
    query.addBindValue(goodsNames);
    if (!query.execBatch()) {
        qDebug() << "Failed to delete products:" << query.lastError().text();
        return false;
    }
    return true;
}


