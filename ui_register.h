/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *sex_input;
    QLineEdit *name_input;
    QLineEdit *age_input;
    QLabel *label_2;
    QLineEdit *password_input;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *btn_return_login_;
    QLineEdit *user_input;
    QLineEdit *lineEdit;
    QLabel *label_3;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(382, 329);
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 0, 351, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 6, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        sex_input = new QLineEdit(layoutWidget);
        sex_input->setObjectName(QString::fromUtf8("sex_input"));

        gridLayout->addWidget(sex_input, 1, 2, 1, 1);

        name_input = new QLineEdit(layoutWidget);
        name_input->setObjectName(QString::fromUtf8("name_input"));

        gridLayout->addWidget(name_input, 0, 2, 1, 1);

        age_input = new QLineEdit(layoutWidget);
        age_input->setObjectName(QString::fromUtf8("age_input"));

        gridLayout->addWidget(age_input, 2, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        password_input = new QLineEdit(layoutWidget);
        password_input->setObjectName(QString::fromUtf8("password_input"));

        gridLayout->addWidget(password_input, 3, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        btn_return_login_ = new QPushButton(layoutWidget);
        btn_return_login_->setObjectName(QString::fromUtf8("btn_return_login_"));

        gridLayout->addWidget(btn_return_login_, 6, 0, 1, 1);

        user_input = new QLineEdit(layoutWidget);
        user_input->setObjectName(QString::fromUtf8("user_input"));

        gridLayout->addWidget(user_input, 5, 2, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 4, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("Register", "\350\264\246\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("Register", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("Register", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "\346\200\247\345\210\253", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "\345\257\206\347\240\201\357\274\2106\344\275\215\344\273\245\344\270\212)", nullptr));
        label_6->setText(QCoreApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        btn_return_login_->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "\345\271\264\351\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
