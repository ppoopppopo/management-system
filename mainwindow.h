#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include"good.h"
#include"purchase.h"
#include<QTimer>
namespace Ui {
class mainwindow;
}

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:
    void on_pushButton_clicked();
    void updateTime();
    void on_pushButton_2_clicked();

private:
    Ui::mainwindow *ui;
};

#endif // MAINWINDOW_H
