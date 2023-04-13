#ifndef ADDGOOD_H
#define ADDGOOD_H

#include <QDialog>
#include<QDebug>
#include<classification.h>
#include<QStyledItemDelegate>
 extern shop_sql *shop;
namespace Ui {
class AddGood;
}

class AddGood : public QDialog
{
    Q_OBJECT

public:
    explicit AddGood(QWidget *parent = nullptr);
    bool Adding_NewGood(QString name,QString bar_code,QString classification,
                        QString selling_price,QString member_price,QString purchase_price,
                        QString InventoryCap,QString MinimumInvenTory,QString unit);
    bool ADDED;
    ~AddGood();
signals:
    void add_good_finished();

private slots:


    void on_OK_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddGood *ui;
};

#endif // ADDGOOD_H
