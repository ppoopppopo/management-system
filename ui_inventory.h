/********************************************************************************
** Form generated from reading UI file 'inventory.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORY_H
#define UI_INVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Inventory
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *InventoryCap;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *MinimumInvenTory;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *CANCEL;

    void setupUi(QDialog *Inventory)
    {
        if (Inventory->objectName().isEmpty())
            Inventory->setObjectName(QString::fromUtf8("Inventory"));
        Inventory->resize(343, 272);
        verticalLayout = new QVBoxLayout(Inventory);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Inventory);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        InventoryCap = new QLineEdit(Inventory);
        InventoryCap->setObjectName(QString::fromUtf8("InventoryCap"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InventoryCap->sizePolicy().hasHeightForWidth());
        InventoryCap->setSizePolicy(sizePolicy);
        InventoryCap->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(InventoryCap);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Inventory);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        MinimumInvenTory = new QLineEdit(Inventory);
        MinimumInvenTory->setObjectName(QString::fromUtf8("MinimumInvenTory"));
        sizePolicy.setHeightForWidth(MinimumInvenTory->sizePolicy().hasHeightForWidth());
        MinimumInvenTory->setSizePolicy(sizePolicy);
        MinimumInvenTory->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(MinimumInvenTory);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(Inventory);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(pushButton);

        CANCEL = new QPushButton(Inventory);
        CANCEL->setObjectName(QString::fromUtf8("CANCEL"));
        sizePolicy1.setHeightForWidth(CANCEL->sizePolicy().hasHeightForWidth());
        CANCEL->setSizePolicy(sizePolicy1);
        CANCEL->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(CANCEL);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 1);

        retranslateUi(Inventory);

        QMetaObject::connectSlotsByName(Inventory);
    } // setupUi

    void retranslateUi(QDialog *Inventory)
    {
        Inventory->setWindowTitle(QCoreApplication::translate("Inventory", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Inventory", "\345\272\223\345\255\230\344\270\212\351\231\220", nullptr));
        label_2->setText(QCoreApplication::translate("Inventory", "\345\272\223\345\255\230\344\270\213\351\231\220", nullptr));
        pushButton->setText(QCoreApplication::translate("Inventory", "OK", nullptr));
        CANCEL->setText(QCoreApplication::translate("Inventory", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inventory: public Ui_Inventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORY_H
