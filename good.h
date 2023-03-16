#ifndef GOOD_H
#define GOOD_H

#include <QWidget>
#include "shop_sql.h"
#include "classification.h"
#include "classification.h"
#include <QStandardItemModel>
#include<QCheckBox>
#include<QTableWidget>
#include<QCloseEvent>
#include<QMap>
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
    //void goodName_temporary_init();
    void tablewidgetInit();
    void tablewidget_update(QJsonArray);
    bool user_edit=false;
    bool deleting_goods=false;
    bool newData(QString,int);//给新数据设立条件
    ~good();
public slots:
    void on_parentClassificationClicked(QString);//点击父分类槽函数
    void onItemSelectionChanged();//选中单元格槽函数
    void on_cell_changed(int, int);//单元格更新后事件
    void on_selection_changed(const QItemSelection &, const QItemSelection &);//选中一行或多行槽函数
private slots:
    void on_pushButton_clicked();
    void onTableWidgetCellDoubleClicked(int row, int column);
private:
    //QMap<QString, QString>goodName_temporary;//商品名临时储存，key为商品名最初名，value为最近商品更改名
    QString data_doubleClick_LastTime;//上一次双击的商品名
    void closeEvent(QCloseEvent *event) override;
    QList<int> rows;//即将删除的商品行
    //QMap<QString, QJsonObject> modify_goods; // 定义一个QMap对象，键是商品名，值是QJsonObject对象，表示商品的属性
    QStringList goodsNames;//即将删除的商品的商品名
    QJsonArray original_goods;//将数据库的商品表搬进这
    Ui::good *ui;


};

#endif // GOOD_H
