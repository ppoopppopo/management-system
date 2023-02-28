#ifndef GOOD_H
#define GOOD_H

#include <QWidget>
#include "shop_sql.h"
#include "classification.h"
#include "classification.h"
#include <QStandardItemModel>
#include<QCheckBox>
extern shop_sql *shop;
namespace Ui {
class good;
}

class good : public QWidget
{
    Q_OBJECT

public:
QList<int> rows;//即将删除的商品行
    explicit good(QWidget *parent = nullptr);
    void comboxs_of_classification_init();//分类列表初始化

    ~good();
public slots:
    void on_parentClassificationClicked();//点击父分类槽函数
    void onItemSelectionChanged();//选中单元格槽函数
    void on_cell_changed(int, int);//单元格更新数据
    void on_selection_changed(const QItemSelection &, const QItemSelection &);//选中一行或多行槽函数
private:
    Ui::good *ui;
};

#endif // GOOD_H
