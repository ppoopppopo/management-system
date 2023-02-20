#include "login.h"

#include <QApplication>

//#include <QFile>
//#include <QTextStream>

int main(int argc, char *argv[])
{

    //shop.opendb("shop");
    QApplication a(argc, argv);
    //shop_sql *shop=new shop_sql;
    //shop->opendb("shop");
    QFile file(":/res/qss/style-1.qss");/*QSS文件所在的路径*/

    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet = filetext.readAll();
    a.setStyleSheet(stylesheet);
    file.close();
QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    login *log=new login;

    log->show();



    //delete shop;



    return a.exec();
}
