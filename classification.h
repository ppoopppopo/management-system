#ifndef CLASSIFICATION_H
#define CLASSIFICATION_H

#include<QWidget>
#include<QLineEdit>
#include<QInputDialog>
#include<QDebug>
#include<QListWidgetItem>
#include"itemwidget.h"
#include"shop_sql.h"
extern shop_sql *shop;
namespace Ui {
class classification;
}
class classification : public QWidget
{
    Q_OBJECT

public:
    int choose;//区分在哪里调用,1为进货管理，2为商品管理，....
    QVBoxLayout *v;
    ItemWidget *itemwidget;
    void classificationUI_init();
    explicit classification(QVBoxLayout*V,int choose);
    void on_ParentClassification_clicked(QPushButton* button);//点击父分类后事件
    void on_SubClassification_clicked(QString,int);//点击子分类事件
   // classification(QVBoxLayout*V);
    ~classification();
public slots:
    void Button_add_child_state();
signals:
    void Button_display();
    void Purchase_parentClassificationClicked(QString parentClassification);//进货管理父分类点击信号
    void Purchase_subClassificationClicked(QString subClassification);//子分类点击信号
    void Good_parentClassificationClicked(QString parentClassification);
private slots:
    void on_Button_add_father_clicked();
    void on_Button_add_child_clicked();


private:
    Ui::classification *ui;
};
#endif // CLASSIFICATION_H
