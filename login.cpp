#include "login.h"
#include "ui_login.h"


shop_sql *shop=nullptr;
login::login(QWidget *parent) :QWidget(parent), ui(new Ui::login)
{

shop=new shop_sql;
this->setAttribute(Qt::WA_DeleteOnClose,true);

    ui->setupUi(this);
    //ui->btn_login->setStyleSheet("QPushButton{color:red}");
//setMaximumSize(800, 400);


//this->setWindowFlags(Qt::FramelessWindowHint);//隐藏边框
//this->showMaximized();
//    mainwindow *main=new mainwindow;
//    this->close();
//    main->show();

}
login::~login()
{
    qDebug()<<"delete login_ui";

}


void login::on_btn_register_clicked()
{
    Register *reg=new Register;

    reg->show();
    this->close();



}

void login::on_btn_login_clicked()
{

   int login_checks=shop->login_checks(ui->password_input->text(),ui->user_input->text());
     if(login_checks==1)
     {
         mainwindow *main=new mainwindow;
         this->close();
         main->show();
     }
     else
     {
         if(login_checks==-1)
         {
             qDebug()<<"error password";
             QMessageBox::critical(this, tr("错误"), tr("密码错误"), QMessageBox::Ok);
         }
         else
         {
             qDebug()<<"dont find user";
             QMessageBox::critical(this, tr("错误"), tr("用户名不存在"), QMessageBox::Ok);
         }
     }
}

void login::on_btn_exit_clicked()
{
    exit(0);
}

void login::on_btn_minshow_clicked()
{
    this->showMinimized();
}

void login::on_btn_forget_clicked()
{
    mainwindow *main=new mainwindow;
    this->close();
    main->show();

}



//三个鼠标事件的重写
//鼠标释放
void login::mousePressEvent(QMouseEvent *e)
{
    if(e->button()== Qt::LeftButton)	//鼠标左键释放
        last = e->globalPos();
}
//鼠标移动
void login::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()==Qt::LeftButton)	//坐标左键按下并移动
    {
        int dx = e->globalX() - last.x();
        int dy = e->globalY() - last.y();
        last = e->globalPos();
        move(x()+dx, y()+dy);
    }

}
//鼠标按下
void login::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)	//鼠标左键按下
    {
        int dx = e->globalX() - last.x();
        int dy = e->globalY() - last.y();
        move(x()+dx, y()+dy);
    }

}



