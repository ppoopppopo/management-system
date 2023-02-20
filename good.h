#ifndef GOOD_H
#define GOOD_H

#include <QWidget>
#include "shop_sql.h"
#include "classification.h"
#include "classification.h"
#include <QStandardItemModel>
extern shop_sql *shop;
namespace Ui {
class good;
}

class good : public QWidget
{
    Q_OBJECT

public:
    explicit good(QWidget *parent = nullptr);
    void comboxs_of_classification_init();//分类列表初始化
    ~good();

private:
    Ui::good *ui;
};

#endif // GOOD_H
