/********************************************************************************
** Form generated from reading UI file 'purchase.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASE_H
#define UI_PURCHASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Purchase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_purchase_id;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *label_purchase_date;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *Submit_incoming_goods;
    QPushButton *Submit_incoming_goods_2;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QLineEdit *lineEdit_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_15;
    QListWidget *listWidget;
    QVBoxLayout *VLayoutClassification;

    void setupUi(QWidget *Purchase)
    {
        if (Purchase->objectName().isEmpty())
            Purchase->setObjectName(QString::fromUtf8("Purchase"));
        Purchase->resize(1100, 643);
        gridLayout = new QGridLayout(Purchase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(Purchase);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        label_purchase_id = new QLabel(Purchase);
        label_purchase_id->setObjectName(QString::fromUtf8("label_purchase_id"));

        horizontalLayout_3->addWidget(label_purchase_id);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(Purchase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        label_purchase_date = new QLabel(Purchase);
        label_purchase_date->setObjectName(QString::fromUtf8("label_purchase_date"));

        horizontalLayout_4->addWidget(label_purchase_date);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox = new QCheckBox(Purchase);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        label_5 = new QLabel(Purchase);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_5);

        pushButton_2 = new QPushButton(Purchase);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(5, 5));
        pushButton_2->setMaximumSize(QSize(20, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Arvo"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::WhatsThisCursor));
        pushButton_2->setIconSize(QSize(22, 20));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_2);

        Submit_incoming_goods = new QPushButton(Purchase);
        Submit_incoming_goods->setObjectName(QString::fromUtf8("Submit_incoming_goods"));
        Submit_incoming_goods->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(Submit_incoming_goods);

        Submit_incoming_goods_2 = new QPushButton(Purchase);
        Submit_incoming_goods_2->setObjectName(QString::fromUtf8("Submit_incoming_goods_2"));
        Submit_incoming_goods_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(Submit_incoming_goods_2);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout_5);

        tableWidget = new QTableWidget(Purchase);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_7->addWidget(tableWidget);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_10 = new QLabel(Purchase);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        comboBox = new QComboBox(Purchase);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_8->addWidget(comboBox);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 23);

        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(Purchase);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, -1, -1);
        lineEdit_3 = new QLineEdit(Purchase);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(Purchase);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy3);
        lineEdit_4->setMaximumSize(QSize(20, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AcadEref"));
        font1.setPointSize(12);
        lineEdit_4->setFont(font1);
        lineEdit_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(lineEdit_4);

        horizontalLayout_7->setStretch(0, 6);

        horizontalLayout_13->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(horizontalLayout_13);


        horizontalLayout_14->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(Purchase);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        comboBox_2 = new QComboBox(Purchase);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_9->addWidget(comboBox_2);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 3);

        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_14 = new QLabel(Purchase);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_11->addWidget(label_14);

        lineEdit_5 = new QLineEdit(Purchase);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_11->addWidget(lineEdit_5);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 3);

        verticalLayout_4->addLayout(horizontalLayout_11);


        horizontalLayout_14->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_12 = new QLabel(Purchase);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        lineEdit_2 = new QLineEdit(Purchase);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_10->addWidget(lineEdit_2);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_15 = new QLabel(Purchase);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_12->addWidget(label_15);

        lineEdit_6 = new QLineEdit(Purchase);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_12->addWidget(lineEdit_6);


        verticalLayout_5->addLayout(horizontalLayout_12);


        horizontalLayout_14->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_14);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 6);
        verticalLayout_7->setStretch(2, 1);

        horizontalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(Purchase);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(Purchase);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(Purchase);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(pushButton_3);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        listWidget = new QListWidget(Purchase);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout_15->addWidget(listWidget);

        VLayoutClassification = new QVBoxLayout();
        VLayoutClassification->setObjectName(QString::fromUtf8("VLayoutClassification"));

        horizontalLayout_15->addLayout(VLayoutClassification);

        horizontalLayout_15->setStretch(0, 2);

        verticalLayout_2->addLayout(horizontalLayout_15);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 13);

        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalLayout_6->setStretch(0, 3);
        horizontalLayout_6->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        retranslateUi(Purchase);

        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(Purchase);
    } // setupUi

    void retranslateUi(QWidget *Purchase)
    {
        Purchase->setWindowTitle(QCoreApplication::translate("Purchase", "Form", nullptr));
        label->setText(QCoreApplication::translate("Purchase", "\350\277\233\350\264\247\345\215\225\345\217\267", nullptr));
        label_purchase_id->setText(QCoreApplication::translate("Purchase", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Purchase", "\350\277\233\350\264\247\346\227\245\346\234\237", nullptr));
        label_purchase_date->setText(QCoreApplication::translate("Purchase", "TextLabel", nullptr));
        checkBox->setText(QString());
        label_5->setText(QCoreApplication::translate("Purchase", "\345\212\240\346\235\203\345\271\263\345\235\207", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Purchase", "?", nullptr));
        Submit_incoming_goods->setText(QCoreApplication::translate("Purchase", "\346\217\220\344\272\244", nullptr));
        Submit_incoming_goods_2->setText(QCoreApplication::translate("Purchase", "\351\200\200\350\264\247", nullptr));
        label_10->setText(QCoreApplication::translate("Purchase", "\344\276\233\345\272\224\345\225\206", nullptr));
        label_13->setText(QCoreApplication::translate("Purchase", "\346\212\230\346\211\243\347\216\207", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("Purchase", "%", nullptr));
        label_11->setText(QCoreApplication::translate("Purchase", "\350\264\246\346\210\267", nullptr));
        label_14->setText(QCoreApplication::translate("Purchase", "\346\212\230\345\220\216\345\272\224\344\273\230", nullptr));
        label_12->setText(QCoreApplication::translate("Purchase", "\350\257\264\346\230\216", nullptr));
        label_15->setText(QCoreApplication::translate("Purchase", "\346\234\254\345\215\225\345\256\236\344\273\230", nullptr));
        pushButton->setText(QCoreApplication::translate("Purchase", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Purchase", "\344\276\233\345\272\224\345\225\206\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Purchase: public Ui_Purchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASE_H
