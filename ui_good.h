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
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QComboBox *comboBox_2;
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
        lineEdit_2 = new QLineEdit(good);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);
        lineEdit_2->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(lineEdit_2);

        label_2 = new QLabel(good);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_3 = new QLineEdit(good);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy2.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy2);
        lineEdit_3->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(lineEdit_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_7 = new QPushButton(good);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(good);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy3.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(pushButton_6);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 2);
        horizontalLayout_3->setStretch(3, 3);
        horizontalLayout_3->setStretch(4, 3);
        horizontalLayout_3->setStretch(5, 1);
        horizontalLayout_3->setStretch(6, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(good);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(good);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(good);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);
        pushButton_2->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(good);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy4.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy4);
        pushButton_3->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(good);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy4.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy4);
        pushButton_4->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(good);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy4.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy4);
        pushButton_5->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(pushButton_5);

        comboBox_2 = new QComboBox(good);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(comboBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(7, 2);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tableWidget = new QTableWidget(good);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);

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
        comboBox_3->setItemText(0, QCoreApplication::translate("good", "\346\230\276\347\244\272\350\256\276\347\275\256", nullptr));

        label->setText(QCoreApplication::translate("good", "\345\210\233\345\273\272\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("good", "\350\207\263", nullptr));
        pushButton_7->setText(QCoreApplication::translate("good", "\345\225\206\345\223\201\346\213\206\345\214\205", nullptr));
        pushButton_6->setText(QCoreApplication::translate("good", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("good", "\346\211\271\351\207\217\345\210\240\351\231\244", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("good", "\345\210\240\351\231\244\345\267\262\351\200\211\345\225\206\345\223\201", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("good", "\346\214\211\345\210\206\347\261\273\345\210\240\351\231\244", nullptr));

        pushButton->setText(QCoreApplication::translate("good", "\345\210\240\351\231\244\351\200\211\344\270\255\345\225\206\345\223\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("good", "\350\207\252\345\212\250\347\224\237\346\210\220\346\235\241\347\240\201", nullptr));
        pushButton_3->setText(QCoreApplication::translate("good", "\350\256\276\347\275\256\345\215\225\344\275\215", nullptr));
        pushButton_4->setText(QCoreApplication::translate("good", "\346\211\271\351\207\217\346\224\271\344\273\267", nullptr));
        pushButton_5->setText(QCoreApplication::translate("good", "\350\256\276\347\275\256\345\272\223\345\255\230", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("good", "\346\234\200\346\226\260\345\225\206\345\223\201", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("good", "\346\214\211\345\255\227\346\257\215\346\216\222\345\272\217", nullptr));

    } // retranslateUi

};

namespace Ui {
    class good: public Ui_good {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_H
