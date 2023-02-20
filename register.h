#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include"qmessagebox.h"
#include"qsqlquery.h"
#include "shop_sql.h"
#include"qstring.h"
#include"login.h"
extern shop_sql *shop;
namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:

    explicit Register(QWidget *parent = nullptr);
    bool registering(QString name, QString sex, QString age,QString password1,QString password2,QString user);
    ~Register();
signals:
    void this_close();

private slots:
    void on_btn_return_login__clicked();

    void on_pushButton_clicked();

private:
    Ui::Register *ui;


};

#endif // REGISTER_H
