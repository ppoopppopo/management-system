#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{


    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowModality(Qt::ApplicationModal);

    //shop_sql shop;
    //connect(this,SIGNAL(close))
    // shop.new_user_save("1v5875474400","xxlx ","314159");
}

Register::~Register()
{
    qDebug()<<"delete register_ui";
    //delete ui;
}

void Register::on_btn_return_login__clicked()
{
    login *log=new login;

    log->show();

    //this->close();
delete this;
    //delete ui;


}
bool Register::registering(QString name, QString sex, QString age, QString password1, QString password2, QString user)
{
    //判断参数是否为空
    if (name.isEmpty()||sex.isEmpty()||age==0||password1.isEmpty()||password2.isEmpty()||user.isEmpty())
    {
        QMessageBox::critical(this, tr("错误"), tr("参数有空值"), QMessageBox::Ok);
        return false;
    }
    if(password1==password2)
    {
        shop->new_user_save(name,sex,age,password1,user);
        return true;
    }
    else
    {
        QMessageBox::critical(this, tr("错误"), tr("两次密码不一致"), QMessageBox::Ok);
        return false;
    }
}

void Register::on_pushButton_clicked()
{
    bool end=registering(ui->name_input->text(),ui->sex_input->text(),ui->age_input->text(), ui->password_input->text(),ui->lineEdit->text(), ui->user_input->text());
    qDebug()<<ui->name_input->text();
    qDebug()<<ui->sex_input->text();
    qDebug()<<ui->age_input->text();
    qDebug()<<ui->password_input->text();
    qDebug()<<ui->lineEdit->text();
    qDebug()<<ui->user_input->text();
    if(end==true)
    {
        QMessageBox::information(this,"消息","注册成功",QMessageBox::Ok);
        //用connect函数，当this->close()执行时，立即最大化login窗口
        login *log=new login;

        log->show();
        delete  this;
    }
}

