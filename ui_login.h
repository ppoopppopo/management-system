/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout_6;
    QFrame *frame_background;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_17;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame_login;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_login;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_20;
    QFrame *frame_user_name;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_user_name;
    QLineEdit *user_input;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_pwd;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_pwd;
    QLineEdit *password_input;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btn_forget;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btn_register;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QFrame *frame_pic;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *btn_exit;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_10;
    QPushButton *btn_minshow;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(1207, 900);
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        login->setFont(font);
        login->setStyleSheet(QString::fromUtf8(""));
        gridLayout_6 = new QGridLayout(login);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_background = new QFrame(login);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_background);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        frame = new QFrame(frame_background);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        frame_login = new QFrame(frame);
        frame_login->setObjectName(QString::fromUtf8("frame_login"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_login->sizePolicy().hasHeightForWidth());
        frame_login->setSizePolicy(sizePolicy);
        frame_login->setMinimumSize(QSize(500, 600));
        frame_login->setMaximumSize(QSize(500, 600));
        frame_login->setFrameShape(QFrame::StyledPanel);
        frame_login->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_login);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_4, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_login = new QLabel(frame_login);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(22);
        label_login->setFont(font1);

        horizontalLayout->addWidget(label_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_20 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        frame_user_name = new QFrame(frame_login);
        frame_user_name->setObjectName(QString::fromUtf8("frame_user_name"));
        frame_user_name->setFrameShape(QFrame::StyledPanel);
        frame_user_name->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_user_name);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_21 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);

        label_user_name = new QLabel(frame_user_name);
        label_user_name->setObjectName(QString::fromUtf8("label_user_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_user_name->sizePolicy().hasHeightForWidth());
        label_user_name->setSizePolicy(sizePolicy1);
        label_user_name->setMinimumSize(QSize(30, 30));
        label_user_name->setMaximumSize(QSize(30, 30));

        horizontalLayout_11->addWidget(label_user_name);

        user_input = new QLineEdit(frame_user_name);
        user_input->setObjectName(QString::fromUtf8("user_input"));

        horizontalLayout_11->addWidget(user_input);


        gridLayout_4->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(frame_user_name);

        horizontalSpacer_22 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_22);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        frame_pwd = new QFrame(frame_login);
        frame_pwd->setObjectName(QString::fromUtf8("frame_pwd"));
        frame_pwd->setFrameShape(QFrame::StyledPanel);
        frame_pwd->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_pwd);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_pwd = new QLabel(frame_pwd);
        label_pwd->setObjectName(QString::fromUtf8("label_pwd"));
        sizePolicy1.setHeightForWidth(label_pwd->sizePolicy().hasHeightForWidth());
        label_pwd->setSizePolicy(sizePolicy1);
        label_pwd->setMinimumSize(QSize(30, 30));
        label_pwd->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(label_pwd);

        password_input = new QLineEdit(frame_pwd);
        password_input->setObjectName(QString::fromUtf8("password_input"));

        horizontalLayout_3->addWidget(password_input);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_pwd);

        horizontalSpacer_19 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_19);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        btn_forget = new QPushButton(frame_login);
        btn_forget->setObjectName(QString::fromUtf8("btn_forget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setUnderline(true);
        btn_forget->setFont(font2);

        horizontalLayout_5->addWidget(btn_forget);

        horizontalSpacer_12 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        btn_login = new QPushButton(frame_login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        sizePolicy1.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy1);
        btn_login->setMinimumSize(QSize(320, 50));
        btn_login->setMaximumSize(QSize(320, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(12);
        btn_login->setFont(font3);

        horizontalLayout_6->addWidget(btn_login);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        btn_register = new QPushButton(frame_login);
        btn_register->setObjectName(QString::fromUtf8("btn_register"));
        sizePolicy1.setHeightForWidth(btn_register->sizePolicy().hasHeightForWidth());
        btn_register->setSizePolicy(sizePolicy1);
        btn_register->setMinimumSize(QSize(320, 50));
        btn_register->setMaximumSize(QSize(320, 50));
        btn_register->setFont(font3);

        horizontalLayout_4->addWidget(btn_register);

        horizontalSpacer_9 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(frame_login);

        frame_pic = new QFrame(frame);
        frame_pic->setObjectName(QString::fromUtf8("frame_pic"));
        sizePolicy.setHeightForWidth(frame_pic->sizePolicy().hasHeightForWidth());
        frame_pic->setSizePolicy(sizePolicy);
        frame_pic->setMinimumSize(QSize(500, 600));
        frame_pic->setFrameShape(QFrame::StyledPanel);
        frame_pic->setFrameShadow(QFrame::Raised);

        horizontalLayout_8->addWidget(frame_pic);


        gridLayout_2->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        horizontalLayout_9->addWidget(frame);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);


        gridLayout_3->addLayout(horizontalLayout_9, 5, 0, 1, 4);

        btn_exit = new QPushButton(frame_background);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setMinimumSize(QSize(30, 30));
        btn_exit->setMaximumSize(QSize(30, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI Black"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        btn_exit->setFont(font4);

        gridLayout_3->addWidget(btn_exit, 1, 3, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 119, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_9, 4, 0, 1, 4);

        verticalSpacer_10 = new QSpacerItem(20, 119, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_10, 6, 0, 1, 4);

        btn_minshow = new QPushButton(frame_background);
        btn_minshow->setObjectName(QString::fromUtf8("btn_minshow"));
        btn_minshow->setMinimumSize(QSize(30, 30));
        btn_minshow->setMaximumSize(QSize(30, 30));
        btn_minshow->setFont(font4);

        gridLayout_3->addWidget(btn_minshow, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 1, 1, 1);


        gridLayout_6->addWidget(frame_background, 0, 0, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Widget", nullptr));
        label_login->setText(QCoreApplication::translate("login", "LOGIN", nullptr));
        label_user_name->setText(QString());
        label_pwd->setText(QString());
        btn_forget->setText(QCoreApplication::translate("login", "Forget Password?", nullptr));
        btn_login->setText(QCoreApplication::translate("login", "LOGIN", nullptr));
        btn_register->setText(QCoreApplication::translate("login", "ENROLL", nullptr));
        btn_exit->setText(QCoreApplication::translate("login", "X", nullptr));
        btn_minshow->setText(QCoreApplication::translate("login", "--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
