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
    if(sql_query.exec("CREATE TABLE IF NOT EXISTS Accounts ("
                      "Name TEXT,"
                      "Sex TEXT,"
                      "Age INTEGER,"
                      "Password TEXT,"
                      "Username TEXT PRIMARY KEY,"
                      "CreateTime TEXT,"
                      "Other BIGINT);"))
    {
        qDebug() << "CREATE table Accounts OK";
    }
    else
    {
        qDebug() << "Error creating table Accounts:" << sql_query.lastError().text();
    }

    //建商品表
    if(sql_query.exec("CREATE TABLE IF NOT EXISTS goods ("
                      "name TEXT PRIMARY KEY,"
                      "bar_code BIGINT,"
                      "classification TEXT,"
                      "selling_price DOUBLE,"
                      "member_price DOUBLE,"
                      "purchase_price DOUBLE,"
                      "inventory INT DEFAULT 0,"
                      "InventoryCap INT DEFAULT 0,"
                      "MinimumInvenTory INT DEFAULT 0, "
                      "unit TEXT,"
                      "creat_time  TEXT   NOT NULL DEFAULT (DATETIME('now', 'localtime') ) "
                      ");"
                      ))
    {
        qDebug()<<"CREATE table goods ok";
    }


    //建分类表
    if(sql_query.exec("CREATE TABLE IF NOT EXISTS Classification ("
                      "ParentClassification TEXT NOT NULL,"
                      "Subclassification    TEXT,"
                      "PRIMARY KEY ("
                      "ParentClassification,"
                      "Subclassification"
                      "),"
                      "CHECK (ParentClassification <> Subclassification)"
                      ");"
                      ))
    {
        qDebug()<<"CREATE table Classification ok";
    }
    //建供应商表
    if(sql_query.exec("CREATE TABLE IF NOT EXISTS Vendors ("
                      "VendorName TEXT,"
                      "Contact TEXT,"
                      "PhoneNumber BIGINT);"))
    {
        qDebug() << "CREATE table Vendors OK";
    }
    else
    {
        qDebug() << "Error creating table Vendors:" << sql_query.lastError().text();
    }

    //建进货表
    if(sql_query.exec(" CREATE TABLE IF NOT EXISTS Purchase ("
                      " PurchaseID TEXT NOT NULL,"
                      " CreatTime TEXT NOT NULL,"
                      " Vendor TEXT,"
                      " Pay TEXT NOT NULL,"
                      " Explain TEXT,"
                      " Total DOUBLE NOT NULL,"
                      " TrueTotal DOUBLE NOT NULL,"
                      " PRIMARY KEY(PurchaseID),"
                      " FOREIGN KEY(Vendor) REFERENCES Vendors(VendorName));"
                      ))
    {
        qDebug()<<"CREATE table Purchase ok";
    }
    else
    {
        // SQL 查询失败，输出错误信息
        qDebug() << "Error creating table Purchase:" << sql_query.lastError().text();
    }
    //建进货明细表
    if(sql_query.exec(" CREATE TABLE IF NOT EXISTS PurchaseGoods ("
                      " PurchaseID TEXT NOT NULL,"
                      " name TEXT NOT NULL,"
                      " Count INT NOT NULL,"
                      " Unit TEXT,"
                      " SubTotal DOUBLE NOT NULL,"
                      " purchasePrice DOUBLE NOT NULL,"
                      " PRIMARY KEY (PurchaseID, name),"
                      " FOREIGN KEY (PurchaseID) REFERENCES Purchase (PurchaseID),"
                      " FOREIGN KEY (name) REFERENCES goods (name));"))
    {
        qDebug()<<"CREATE table PurchaseGoods ok";
    }
//建顾客表
    if (sql_query.exec("CREATE TABLE IF NOT EXISTS Customers ("
                        "CustomerID INTEGER PRIMARY KEY AUTOINCREMENT,"
                        "CustomerName TEXT NOT NULL,"
                        "PhoneNumber TEXT NOT NULL,"
                        "Birthday TEXT,"
                        "Discount REAL DEFAULT 1.0,"
                        "Balance REAL DEFAULT 0.0,"
                        "LoyaltyPoints INTEGER DEFAULT 0,"
                        "RegistrationDate TEXT DEFAULT (DATETIME('now','localtime')),"
                        "MemberStatus TEXT DEFAULT 'Inactive'"
                        ")"))
    {
        qDebug() << "Table Customers created!";
    }
    else
    {
        qDebug() << "Error creating table Customers:" << sql_query.lastError().text();
    }
/*  CustomerID 是一个自增的整数型字段，作为每个顾客的唯一标识符。
    CustomerName 和 PhoneNumber 是必填的字符串类型字段，分别用于存储顾客的姓名和手机号码。
    Birthday 是一个可选的日期类型字段，用于记录顾客的生日。
    Discount 是一个浮点数类型的字段，用于记录该顾客的折扣率。默认值为 1.0，即不打折。
    Balance 是一个浮点数类型的字段，用于记录该顾客的储值余额。默认值为 0.0，即未储值。
    LoyaltyPoints 是一个整数类型的字段，用于记录该顾客的会员积分。默认值为 0，即未获得任何积分。
    RegistrationDate 是一个自动填充当前时间的日期类型字段，用于记录该顾客的注册时间。
    MemberStatus 是一个字符串类型的字段，用于记录该顾客的会员状态。默认值为 'Inactive'，即非会员状态。可以根据实际需要设置其他状态值，例如 'Active'（激活状态）、'Suspended'（暂停状态）等。
*/
//建会员充值记录表
    if (sql_query.exec("CREATE TABLE IF NOT EXISTS MemberRechargeRecord ("
                       "MemberName TEXT NOT NULL,"
                       "Cashier TEXT NOT NULL,"
                       "RechargeAmount INTEGER NOT NULL,"
                       "GiftAmount INTEGER,"
                       "PaymentMethod TEXT NOT NULL,"
                       "RechargeTime TEXT DEFAULT (DATETIME('now','localtime')),"
                       "PRIMARY KEY (MemberName, RechargeTime));"))
    {
        qDebug() << "CREATE table MemberRechargeRecord OK";
    }
    else
    {
        qDebug() << "Error creating table MemberRechargeRecord:" << sql_query.lastError().text();
    }
    /*    MemberName：会员姓名，使用 TEXT 类型存储，不能为空。
    Cashier：收银员，使用 TEXT 类型存储，不能为空。
    RechargeAmount：充值金额，使用 INTEGER 类型存储，不能为空。
    GiftAmount：赠送金额，使用 INTEGER 类型存储。
    PaymentMethod：支付方式，使用 TEXT 类型存储，不能为空。
    RechargeTime：充值时间，使用 TEXT 类型存储，自动填充。
    PRIMARY KEY (MemberName, RechargeTime)：设置复合主键，以便唯一标识一条充值记录，其中 MemberName 和 RechargeTime 都不能为空。*/

    //建单位表
    if(sql_query.exec("CREATE TABLE IF NOT EXISTS Unit ("
                      "Unit TEXT PRIMARY KEY NOT NULL UNIQUE"
                      ");"))
    {
        qDebug() << "CREATE table Unit OK";
    }
    else
    {
        qDebug() << "Error creating table Unit:" << sql_query.lastError().text();
    }
Unit_init();
}

shop_sql::~shop_sql()
{


    qDebug()<<"delete shop_sql ";//count;
}

void shop_sql::Unit_init()
{
    QStringList Unit={"瓶","罐","盒","袋","杯","包","支","粒","箱","根","份"};
    QSqlQuery query;
    for(int i=0;i<Unit.size();i++)
    {
        if(query.exec(QString("INSERT INTO Unit VALUES('"+Unit[i]+"')")))
        {
            qDebug()<<"添加单位"+Unit[i]+"成功";
        }
        else
        {
            qDebug()<<"添加单位"+Unit[i]+"失败"<<query.lastError();

        }
    }


}


//新添加的账户信息存入数据库
void shop_sql::new_user_save(QString name, QString sex, QString age,QString password,QString user)
{
	QSqlQuery sql_query;
	QString creat_time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString commond = "INSERT INTO Accounts VALUES(";
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

void shop_sql::addParentClassification(QString ParentClassification)
{
    QSqlQuery query;
    if(query.exec(QString("INSERT INTO Classification(ParentClassification) VALUES('%1')").arg(ParentClassification)))
    {
        qDebug()<<"添加父分类成功";

    }
    else
    {
        qDebug()<<"添加父分类失败";

    }

}

void shop_sql::addSubClassification(QString ParentClassRecently, QString newSubClass)
{
    qDebug()<<"sql类 void addSubClassification拿到的数据:"<<ParentClassRecently<<newSubClass;
    QSqlQuery query;
    int choose=father_classification_onlyone(ParentClassRecently);
    if(choose==1)//如果父分类在表中只有一个，说明还没有过子分类
    {
        qDebug()<<"父分类唯一且没有子分类";
       qDebug() <<"sql语句"<<query.exec(QString("update Classification set Subclassification='%1' where ParentClassification='%2'").arg(newSubClass,ParentClassRecently));

    }
    else
    {
        qDebug()<<"sql语句"<<query.exec(QString("INSERT INTO Classification(ParentClassification,Subclassification) VALUES('%1','%2')").arg(ParentClassRecently,newSubClass));
    }
}

void shop_sql::add_new_good(QString name, QString bar_code, QString classification, QString selling_price, QString member_price, QString purchase_price, QString InventoryCap, QString MinimumInvenTory, QString unit)
{
    QSqlQuery query;
    if(query.exec(QString("INSERT INTO goods("
                  "name,"
                  "bar_code,"
                  "classification,"
                  "selling_price,"
                  "member_price,"
                  "purchase_price,"
                  "InventoryCap,"
                  "MinimumInvenTory,"
                  "unit) "
                  "VALUES('%1','%2','%3','%4','%5','%6','%7','%8','%9')")
                  .arg(name,bar_code,classification,selling_price,member_price,purchase_price,InventoryCap,MinimumInvenTory,unit)))
    {
        qDebug()<<"添加商品成功";
    }
    else
    {
        qDebug()<<"添加商品失败: "<<query.lastError();
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

     qDebug()<<query.exec("select * from Accounts where Username='" + user + "'"
        " and Password='" +password + "'");

     if (query.next())
     {
         return 1;//登录成功
     }
     else
     {
         //查看用户名是否存在
         query.exec("select * from Accounts where Username='"+ user +"'" );
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
    if(query.exec("select count(ParentClassification) from Classification where ParentClassification='"+ParentClassification+"'"))
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

QStringList shop_sql::Inventory_up_and_down(QString name)
{
    QSqlQuery query(database);
    QStringList Inventory_up_and_down;
    if(query.exec("select InventoryCap,MinimumInvenTory from goods where name = '"+name+"'"))
    {
        if(query.next())
        {
            Inventory_up_and_down.append(query.value(0).toString());
            Inventory_up_and_down.append(query.value(1).toString());

        }
        return  Inventory_up_and_down;;
    }
}

int shop_sql::father_classification_onlyone(QString father_classification)
{
    qDebug()<<father_classification;
    QSqlQuery query(database);
    QSqlQuery query2(database);
    if(query.exec("SELECT count (ParentClassification) from Classification where ParentClassification='"+father_classification+"'"))
    {

        if(query.next())
        {
            if(query.value(0).toInt()==1)
            {
                query2.exec("SELECT Subclassification from Classification where ParentClassification='"+father_classification+"'");
                query2.next();
                QString str=query2.value(0).toString();
                qDebug()<<"只有一个父分类时子分类的名字"<<str<<str.size();
                if(str=="")
                {
                    qDebug()<<"true";
                    return 1;
                }
                else
                {
                    qDebug()<<"表中只有一个父分类，但是对应的子分类为空";
                    return -1;
                }

            }
            qDebug()<<"父分类不止一个";
            return 0;
        }

    }

}

QJsonArray shop_sql::end_of_searching(QString text)
{
     QJsonArray result;

         QSqlQuery query;
         if (query.exec("SELECT name,purchase_price,inventory FROM goods WHERE name LIKE '%" + text + "%' OR bar_code LIKE '%" + text + "%'"))
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

QJsonArray shop_sql::GoodsSearch(QString text)
{
    QJsonArray result;

        QSqlQuery query;
        if (query.exec("SELECT name,"
                       "bar_code,"
                       "classification,"
                       "selling_price,"
                       "member_price,"
                       "purchase_price,"
                       "inventory,"
                       "unit "
                  "FROM goods "
                 "WHERE name LIKE '%"+text+"%' OR "
                       "bar_code LIKE '%"+text+"%';"))
        {
            while (query.next())
            {

                QJsonObject temp;
                temp["name"]=query.value(0).toString();
                temp["bar_code"]=query.value(1).toString();
                temp["classification"]=query.value(2).toString();
                temp["selling_price"]=query.value(3).toString();
                temp["member_price"]=query.value(4).toString();
                temp["purchase_price"]=query.value(5).toString();
                temp["inventory"]=query.value(6).toString();
                temp["unit"]=query.value(7).toString();
                result.append(temp);
            }
            qDebug() << "商品管理搜索结束，数据为"<<result;
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
    if(query.exec("select name,bar_code,classification,selling_price,member_price,purchase_price,inventory,unit from Goods"))
    {
        while (query.next())
        {
            QJsonObject temp;
            temp["name"]=query.value(0).toString();
            temp["bar_code"]=query.value(1).toString();
            temp["classification"]=query.value(2).toString();
            temp["selling_price"]=query.value(3).toString();
            temp["member_price"]=query.value(4).toString();
            temp["purchase_price"]=query.value(5).toString();
            temp["inventory"]=query.value(6).toString();
            temp["unit"]=query.value(7).toString();
            list.append(temp);
        }
    }
    return list;
}

QStringList shop_sql::Unit_list()
{
    QStringList list;
    QSqlQuery query;
    if(query.exec("select Unit from Unit"))
    {
        while(query.next())
        {
            list.append(query.value(0).toString());
        }
    }
    else
    {
        qDebug()<<"获取单位列表失败"<<query.lastError();
    }
    return list;
}


QJsonArray shop_sql::goods_list_by_classification(QString Conditional, bool ParentClassification)
{
    QSqlQuery query;
    QJsonArray goods;
    qDebug()<<"Conditional:"<<Conditional;
    //无论Conditional为父分类或子分类都要先根据Conditional提取商品相关信息
    if(query.exec("select name,bar_code,classification,selling_price,member_price,purchase_price,inventory,unit "
                  "from goods where classification = '"+Conditional+"'"))
    {
        while (query.next())
        {
            QJsonObject temp;
            temp["name"]=query.value(0).toString();
            temp["bar_code"]=query.value(1).toString();
            temp["classification"]=query.value(2).toString();
            temp["selling_price"]=query.value(3).toString();
            temp["member_price"]=query.value(4).toString();
            temp["purchase_price"]=query.value(5).toString();
            temp["inventory"]=query.value(6).toString();
            temp["unit"]=query.value(7).toString();
            goods.append(temp);

        }
    }
    if(ParentClassification==true)//继续查找Conditional下的子分类有没有对应的商品
    {
        if(query.exec("select SubClassification from Classification where ParentClassification ='"+Conditional+"'"))
        {
            while (query.next()&&query.value(0).toString()!="")
            {

                QSqlQuery query2;
                if(query2.exec("select name,bar_code,classification,selling_price,member_price,purchase_price,inventory,unit "
                               "from goods where classification ='"+query.value(0).toString()+"'"))
                {
                    while (query2.next())
                    {
                        QJsonObject temp;
                        temp["name"]=query2.value(0).toString();
                        temp["bar_code"]=query2.value(1).toString();
                        temp["classification"]=query2.value(2).toString();
                        temp["selling_price"]=query2.value(3).toString();
                        temp["member_price"]=query2.value(4).toString();
                        temp["purchase_price"]=query2.value(5).toString();
                        temp["inventory"]=query2.value(6).toString();
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

QJsonArray shop_sql::goods_list_by_dateRange(QString startDate, QString endDate)
{
    QJsonArray goods;
    QString queryStr = "SELECT name,bar_code,classification,selling_price,member_price,purchase_price,inventory,unit "
                       "FROM goods WHERE creat_time BETWEEN :startDate AND :endDate";
    QSqlQuery query;
    query.prepare(queryStr);
    query.bindValue(":startDate", startDate);
    query.bindValue(":endDate", endDate);
    if (query.exec())
    {
        while (query.next())
        {
            QJsonObject temp;
            temp["name"]=query.value(0).toString();
            temp["bar_code"]=query.value(1).toString();
            temp["classification"]=query.value(2).toString();
            temp["selling_price"]=query.value(3).toString();
            temp["member_price"]=query.value(4).toString();
            temp["purchase_price"]=query.value(5).toString();
            temp["inventory"]=query.value(6).toString();
            temp["unit"]=query.value(7).toString();
            qDebug()<<"temp:"<<temp;
            goods.append(temp);
        }
    }
    else
    {
        qDebug()<<"按照时间查询失败："<<query.lastError().text();
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
        while (query.next()&&query.value(0).toString()!="")
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

QJsonArray shop_sql::All_Name_PurchasePrice_Inventory_of_goods()
{QSqlQuery query(database);
    QJsonArray goods;

    query.exec("select name,purchase_price,inventory from goods");
    while (query.next())
    {
        qDebug()<<"query"<<query.value(0).toString()<<query.value(1).toDouble()<<query.value(2).toInt();
        QJsonObject good;
        good["name"]=query.value(0).toString();
        good["purchase_price"]=query.value(1).toDouble();
        good["inventory"]=query.value(2).toInt();
        goods.append(good);

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

QStringList shop_sql::goodsNames_list()
{
    QStringList goodsNames;
    QSqlQuery query(database);
    query.exec("select name from goods");
    while(query.next())
    {
        goodsNames.append(query.value(0).toString());
    }
    return goodsNames;
}

bool shop_sql::newData_barcode(QString name,QString bar_code)
{
    QSqlQuery query(database);
    qDebug()<<query.exec("UPDATE goods SET bar_code = '"+bar_code+"' WHERE name = '"+name+"' AND NOT EXISTS (SELECT name FROM goods WHERE bar_code = '"+bar_code+"' )");
    int num = query.numRowsAffected();
    return num>0 ? true:false;
}

bool shop_sql::newData_classification(QString name,QString classification)
{
    QSqlQuery query(database);
    qDebug()<<query.exec("UPDATE goods SET classification = '"+classification+"' WHERE name = '"+name+"' AND  EXISTS "
                         "(SELECT * FROM Classification WHERE '"+classification+"' IN (ParentClassification, Subclassification) )");
    int num = query.numRowsAffected();
    return num>0 ? true:false;
}

bool shop_sql::newData_price(QString name, double price, int price_type)
{
    QSqlQuery query(database);
    double selling_price,member_price,purchase_price;
    double new_price=price;
    if(query.exec("SELECT selling_price,member_price,purchase_price from goods where name='"+name+"'"))
    {
        if(query.next())
        {
            selling_price=query.value(0).toDouble();
            member_price=query.value(1).toDouble();
            purchase_price=query.value(2).toDouble();
            qDebug()<<"更新价格之前，先拿商品"<<name<<"的进价："<<selling_price<<"，会员价："<<""<<member_price<<"，进价："<<purchase_price;
        }
        switch (price_type)
        {
        case 1:
        {
            if(new_price>member_price)
            {
                //update..
                query.prepare("UPDATE goods SET selling_price = :selling_price WHERE name = :name");
                query.bindValue(":selling_price", new_price);
                query.bindValue(":name",name);
                if(query.exec())
                {
                    return true;

                }
                qDebug()<<query.lastError();
                return false;

            }
            break;
        }
        case 2:
        {
            if(new_price>purchase_price&&new_price<selling_price)
            {
                query.prepare("UPDATE goods SET member_price = :member_price WHERE name = :name");
                query.bindValue(":member_price", new_price);
                query.bindValue(":name",name);
                if(query.exec())
                {
                    return true;

                }                qDebug()<<query.lastError();

                return false;
            }
           break;
        }
            case 3:
            {
                if(new_price<member_price)
                {
                    query.prepare("UPDATE goods SET purchase_price = :purchase_price WHERE name = :name");
                    query.bindValue(":purchase_price", new_price);
                    query.bindValue(":name",name);
                    if(query.exec())
                    {
                        return true;

                    }                qDebug()<<query.lastError();

                    return false;

                }
              break;
            }
        default:
           break;
        }
        return false;
    }
}

bool shop_sql::new_Data_Inventory_up_and_down(QString name,int InventoryCap, int MinimumInvenTory)
{
    QSqlQuery query(database);
    query.prepare("UPDATE goods SET InventoryCap = :InventoryCap, MinimumInvenTory = :MinimumInvenTory WHERE name = :name");
    query.bindValue(":InventoryCap", InventoryCap);
    query.bindValue(":MinimumInvenTory", MinimumInvenTory);
    query.bindValue(":name", name);
    if(query.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool shop_sql::Exist_ParentClassification(QString newParentClassification)
{
    QSqlQuery query(database);
     qDebug()<<"sql语句"<<query.exec(QString("select ParentClassification from Classification where ParentClassification='%1'").arg(newParentClassification));
     if(query.next())
     {
         qDebug()<<"找到父分类"<<query.value(0);
         return false;
     }

     return true;
}

bool shop_sql::Exist_SubClassification(QString newSubClassification)
{
    QSqlQuery query(database);
     qDebug()<<"sql语句"<<query.exec(QString("select SubClassification from Classification where Subclassification='%1'").arg(newSubClassification));
     if(query.next())
     {
         qDebug()<<"找到子分类"<<query.value(0);
         return false;
     }

     return true;
}

bool shop_sql::delete_ParentClassification(QString ParentClassification)
{
    QSqlQuery query(database);
     qDebug()<<"sql语句"<<query.exec(QString("DELETE FROM Classification WHERE ParentClassification ='%1'").arg(ParentClassification));
     int num = query.numRowsAffected();
     return num>0 ? true:false;
}

bool shop_sql::delete_SubClassification(QString SubClassification)
{
    QSqlQuery query(database);
    qDebug()<<"sql语句准备"<<query.prepare(QString("DELETE FROM Classification WHERE Subclassification ='%1'").arg(SubClassification));
    QString Parent=find_ParentClass_by_SubClass(SubClassification);
    qDebug()<<"通过子分类"<<SubClassification<<"查询父分类"<<Parent;
    if(father_classification_onlyone(Parent)==-1)
    {
        qDebug()<<"sql语句"<<query.exec();
        addParentClassification(Parent);
    }
    else
    {
        qDebug()<<"sql语句"<<query.exec();
    }
    int num = query.numRowsAffected();
    return num>0 ? true:false;
}

QString shop_sql::find_ParentClass_by_SubClass(QString SubClass)
{
    QSqlQuery query(database);
     qDebug()<<"sql语句"<<query.exec(QString("select ParentClassification from Classification where Subclassification='%1'").arg(SubClass));
     if(query.next())
     {
         return query.value(0).toString();
     }
}

//bool shop_sql::newData_sellingprice(QString)
//{

//}

//bool shop_sql::newData_goodname(QString newData_goodName)
//{
//    QSqlQuery query(database);
//    query.exec("select name from goods where name='"+newData_goodName+"'");
//    if(query.next())
//    {
//        qDebug()<<"找到商品名"<<query.value(0);
//        return false;
//    }
//    return true;
//}


