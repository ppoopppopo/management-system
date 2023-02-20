#ifndef LOGIN_H
#define LOGIN_H

#include "shop_sql.h"
#include"register.h"
#include"mainwindow.h"

#include"qsqldatabase.h"
#include "qsqlquery.h"
#include"qdebug.h"
#include"qmessagebox.h"
//#include <QDesktopWidget>
#include <QMouseEvent>
namespace Ui {
class login;
}
enum windowEdge{
    TOPLEFT = 11,
    TOP = 12,
    TOPRIGHT = 13,
    LEFT = 21,
    CENTER = 22,
    RIGHT = 23,
    BUTTOMLEFT = 31,
    BUTTOM = 32,
    BUTTOMRIGHT = 33
};
class login : public QWidget
{
    Q_OBJECT

public:

    explicit login(QWidget *parent = nullptr);
    ~login();
    enum MousePoss{LeftUp=0,Up,RightUp,Right,RightDown,Down,LeftDown,Left,Middle};
signals:



private slots:



    void login_again();

    void on_btn_register_clicked();

    void on_btn_login_clicked();

    void on_btn_exit_clicked();

    void on_btn_minshow_clicked();

    void on_btn_forget_clicked();

    //由于去掉显示界面的菜单栏和标题栏，无法拖动窗口，重写关于窗口拖动用的几个函数
        void mousePressEvent(QMouseEvent *e);
        void mouseMoveEvent(QMouseEvent *e);
        void mouseReleaseEvent(QMouseEvent *e);
private:
     Ui::login *ui;

 QPoint last;//窗口拖动用变量





};

#endif // LOGIN_H
