#ifndef INVENTORY_H
#define INVENTORY_H

#include <QDialog>
#include<shop_sql.h>
#include<QMessageBox>
namespace Ui {
class Inventory;
}

class Inventory : public QDialog
{
    Q_OBJECT

public:
    explicit Inventory(QString GoodName,QWidget *parent = nullptr);
    ~Inventory();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Inventory *ui;
    int InventoryCap;
    int MinimumInvenTory;
    QString name;
};

#endif // INVENTORY_H
