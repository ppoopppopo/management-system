/********************************************************************************
** Form generated from reading UI file 'good.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOD_H
#define UI_GOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_good
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_4;
    QComboBox *comboBox_2;
    QPushButton *inventory;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget;
    QVBoxLayout *VLayoutClassification;

    void setupUi(QWidget *good)
    {
        if (good->objectName().isEmpty())
            good->setObjectName(QString::fromUtf8("good"));
        good->resize(1072, 770);
        gridLayout = new QGridLayout(good);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit = new QLineEdit(good);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 0));
        lineEdit->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_3->addWidget(lineEdit);

        comboBox_3 = new QComboBox(good);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        sizePolicy.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy);
        comboBox_3->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_3->addWidget(comboBox_3);

        label = new QLabel(good);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dateEdit = new QDateEdit(good);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy2);
        dateEdit->setMaximumSize(QSize(16777215, 30));
        dateEdit->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEdit);

        label_2 = new QLabel(good);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        dateEdit_2 = new QDateEdit(good);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setMaximumSize(QSize(16777215, 30));
        dateEdit_2->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEdit_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_6 = new QPushButton(good);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy3);
        pushButton_6->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(pushButton_6);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 2);
        horizontalLayout_3->setStretch(3, 3);
        horizontalLayout_3->setStretch(4, 3);
        horizontalLayout_3->setStretch(5, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_4 = new QComboBox(good);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        sizePolicy2.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy2);
        comboBox_4->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(comboBox_4);

        comboBox_2 = new QComboBox(good);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(comboBox_2);

        inventory = new QPushButton(good);
        inventory->setObjectName(QString::fromUtf8("inventory"));
        sizePolicy2.setHeightForWidth(inventory->sizePolicy().hasHeightForWidth());
        inventory->setSizePolicy(sizePolicy2);
        inventory->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(inventory);

        pushButton = new QPushButton(good);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(good);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(pushButton_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 3);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tableWidget = new QTableWidget(good);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(tableWidget);

        VLayoutClassification = new QVBoxLayout();
        VLayoutClassification->setSpacing(0);
        VLayoutClassification->setObjectName(QString::fromUtf8("VLayoutClassification"));

        horizontalLayout_4->addLayout(VLayoutClassification);

        horizontalLayout_4->setStretch(0, 15);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 10);

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(good);

        QMetaObject::connectSlotsByName(good);
    } // setupUi

    void retranslateUi(QWidget *good)
    {
        good->setWindowTitle(QCoreApplication::translate("good", "Form", nullptr));
        lineEdit->setText(QString());
        comboBox_3->setItemText(0, QCoreApplication::translate("good", "\346\230\276\347\244\272\350\256\276\347\275\256", nullptr));

        label->setText(QCoreApplication::translate("good", "\345\210\233\345\273\272\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("good", "\350\207\263", nullptr));
        pushButton_6->setText(QCoreApplication::translate("good", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("good", "\350\256\276\347\275\256\345\215\225\344\275\215", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("good", "\346\234\200\346\226\260\345\225\206\345\223\201", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("good", "\345\272\223\345\255\230\346\234\200\345\260\221\346\216\222\345\272\217", nullptr));

        inventory->setText(QCoreApplication::translate("good", "\350\256\276\347\275\256\345\272\223\345\255\230\344\270\212\344\270\213\351\231\220", nullptr));
        pushButton->setText(QCoreApplication::translate("good", "\345\210\240\351\231\244\351\200\211\344\270\255\345\225\206\345\223\201", nullptr));
        pushButton_5->setText(QCoreApplication::translate("good", "\346\230\276\347\244\272\345\205\250\351\203\250\345\225\206\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class good: public Ui_good {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_H
