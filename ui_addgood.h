/********************************************************************************
** Form generated from reading UI file 'addgood.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGOOD_H
#define UI_ADDGOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddGood
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_GoodName;
    QLabel *label_13;
    QComboBox *Classification;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_BarCode;
    QLabel *label_3;
    QComboBox *Unit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_SellingPrice;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_PurchasePrice;
    QLabel *label_6;
    QLineEdit *lineEdit_MenberPrice;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_Inventory;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEdit_InventoryCap;
    QLabel *label_9;
    QLineEdit *lineEdit_MinimumInvenTory;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *OK;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddGood)
    {
        if (AddGood->objectName().isEmpty())
            AddGood->setObjectName(QString::fromUtf8("AddGood"));
        AddGood->resize(400, 600);
        verticalLayout = new QVBoxLayout(AddGood);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(AddGood);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        lineEdit_GoodName = new QLineEdit(AddGood);
        lineEdit_GoodName->setObjectName(QString::fromUtf8("lineEdit_GoodName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_GoodName->sizePolicy().hasHeightForWidth());
        lineEdit_GoodName->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEdit_GoodName);

        label_13 = new QLabel(AddGood);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout->addWidget(label_13);

        Classification = new QComboBox(AddGood);
        Classification->setObjectName(QString::fromUtf8("Classification"));
        sizePolicy1.setHeightForWidth(Classification->sizePolicy().hasHeightForWidth());
        Classification->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Classification);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(AddGood);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_BarCode = new QLineEdit(AddGood);
        lineEdit_BarCode->setObjectName(QString::fromUtf8("lineEdit_BarCode"));
        sizePolicy1.setHeightForWidth(lineEdit_BarCode->sizePolicy().hasHeightForWidth());
        lineEdit_BarCode->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(lineEdit_BarCode);

        label_3 = new QLabel(AddGood);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        Unit = new QComboBox(AddGood);
        Unit->setObjectName(QString::fromUtf8("Unit"));
        sizePolicy1.setHeightForWidth(Unit->sizePolicy().hasHeightForWidth());
        Unit->setSizePolicy(sizePolicy1);
        Unit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(Unit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(AddGood);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_SellingPrice = new QLineEdit(AddGood);
        lineEdit_SellingPrice->setObjectName(QString::fromUtf8("lineEdit_SellingPrice"));
        sizePolicy1.setHeightForWidth(lineEdit_SellingPrice->sizePolicy().hasHeightForWidth());
        lineEdit_SellingPrice->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(lineEdit_SellingPrice);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(AddGood);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_PurchasePrice = new QLineEdit(AddGood);
        lineEdit_PurchasePrice->setObjectName(QString::fromUtf8("lineEdit_PurchasePrice"));
        sizePolicy1.setHeightForWidth(lineEdit_PurchasePrice->sizePolicy().hasHeightForWidth());
        lineEdit_PurchasePrice->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(lineEdit_PurchasePrice);

        label_6 = new QLabel(AddGood);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_MenberPrice = new QLineEdit(AddGood);
        lineEdit_MenberPrice->setObjectName(QString::fromUtf8("lineEdit_MenberPrice"));
        sizePolicy1.setHeightForWidth(lineEdit_MenberPrice->sizePolicy().hasHeightForWidth());
        lineEdit_MenberPrice->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(lineEdit_MenberPrice);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(AddGood);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        lineEdit_Inventory = new QLineEdit(AddGood);
        lineEdit_Inventory->setObjectName(QString::fromUtf8("lineEdit_Inventory"));
        sizePolicy1.setHeightForWidth(lineEdit_Inventory->sizePolicy().hasHeightForWidth());
        lineEdit_Inventory->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lineEdit_Inventory);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(AddGood);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        lineEdit_InventoryCap = new QLineEdit(AddGood);
        lineEdit_InventoryCap->setObjectName(QString::fromUtf8("lineEdit_InventoryCap"));
        sizePolicy1.setHeightForWidth(lineEdit_InventoryCap->sizePolicy().hasHeightForWidth());
        lineEdit_InventoryCap->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(lineEdit_InventoryCap);

        label_9 = new QLabel(AddGood);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);

        lineEdit_MinimumInvenTory = new QLineEdit(AddGood);
        lineEdit_MinimumInvenTory->setObjectName(QString::fromUtf8("lineEdit_MinimumInvenTory"));
        sizePolicy1.setHeightForWidth(lineEdit_MinimumInvenTory->sizePolicy().hasHeightForWidth());
        lineEdit_MinimumInvenTory->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(lineEdit_MinimumInvenTory);


        verticalLayout->addLayout(horizontalLayout_4);

        label_12 = new QLabel(AddGood);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(label_12);

        verticalSpacer_7 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        OK = new QPushButton(AddGood);
        OK->setObjectName(QString::fromUtf8("OK"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(OK->sizePolicy().hasHeightForWidth());
        OK->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(OK);

        pushButton_2 = new QPushButton(AddGood);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(AddGood);

        QMetaObject::connectSlotsByName(AddGood);
    } // setupUi

    void retranslateUi(QDialog *AddGood)
    {
        AddGood->setWindowTitle(QCoreApplication::translate("AddGood", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddGood", "\345\225\206\345\223\201\345\220\215  ", nullptr));
        label_13->setText(QCoreApplication::translate("AddGood", "\345\210\206\347\261\273    ", nullptr));
        label_2->setText(QCoreApplication::translate("AddGood", "\345\225\206\345\223\201\346\235\241\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("AddGood", "\345\215\225\344\275\215    ", nullptr));
        label_4->setText(QCoreApplication::translate("AddGood", "\351\233\266\345\224\256\344\273\267  ", nullptr));
        label_5->setText(QCoreApplication::translate("AddGood", "\350\277\233\350\264\247\344\273\267  ", nullptr));
        label_6->setText(QCoreApplication::translate("AddGood", "\344\274\232\345\221\230\344\273\267  ", nullptr));
        label_7->setText(QCoreApplication::translate("AddGood", "\345\272\223\345\255\230    ", nullptr));
        lineEdit_Inventory->setText(QCoreApplication::translate("AddGood", "0", nullptr));
        label_8->setText(QCoreApplication::translate("AddGood", "\345\272\223\345\255\230\344\270\212\351\231\220", nullptr));
        label_9->setText(QCoreApplication::translate("AddGood", "\345\272\223\345\255\230\344\270\213\351\231\220", nullptr));
        label_12->setText(QCoreApplication::translate("AddGood", "\345\275\223\345\241\253\344\272\206\345\272\223\345\255\230\344\270\212\344\270\213\351\231\220\346\227\266\357\274\214\347\263\273\347\273\237\344\274\232\346\240\271\346\215\256\346\211\200\345\241\253\347\232\204\346\225\260\345\200\274\350\277\233\350\241\214\350\266\205\345\207\272\351\242\204\350\255\246", nullptr));
        OK->setText(QCoreApplication::translate("AddGood", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddGood", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddGood: public Ui_AddGood {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGOOD_H
