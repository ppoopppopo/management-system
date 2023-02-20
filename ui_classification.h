/********************************************************************************
** Form generated from reading UI file 'classification.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSIFICATION_H
#define UI_CLASSIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_classification
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_exit;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *Button_add_father;
    QListWidget *listWidget_father;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Button_add_child;
    QListWidget *listWidget_child;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Button_submit;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *classification)
    {
        if (classification->objectName().isEmpty())
            classification->setObjectName(QString::fromUtf8("classification"));
        classification->resize(795, 611);
        gridLayout = new QGridLayout(classification);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 2, -1, -1);
        label = new QLabel(classification);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Sans Typewriter"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_exit = new QPushButton(classification);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setMinimumSize(QSize(30, 30));
        btn_exit->setMaximumSize(QSize(30, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btn_exit->setFont(font1);

        horizontalLayout->addWidget(btn_exit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Button_add_father = new QPushButton(classification);
        Button_add_father->setObjectName(QString::fromUtf8("Button_add_father"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_add_father->sizePolicy().hasHeightForWidth());
        Button_add_father->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        Button_add_father->setFont(font2);

        verticalLayout->addWidget(Button_add_father);

        listWidget_father = new QListWidget(classification);
        listWidget_father->setObjectName(QString::fromUtf8("listWidget_father"));

        verticalLayout->addWidget(listWidget_father);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        Button_add_child = new QPushButton(classification);
        Button_add_child->setObjectName(QString::fromUtf8("Button_add_child"));
        sizePolicy1.setHeightForWidth(Button_add_child->sizePolicy().hasHeightForWidth());
        Button_add_child->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(10);
        Button_add_child->setFont(font3);

        verticalLayout_2->addWidget(Button_add_child);

        listWidget_child = new QListWidget(classification);
        listWidget_child->setObjectName(QString::fromUtf8("listWidget_child"));

        verticalLayout_2->addWidget(listWidget_child);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 9);

        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        Button_submit = new QPushButton(classification);
        Button_submit->setObjectName(QString::fromUtf8("Button_submit"));
        sizePolicy1.setHeightForWidth(Button_submit->sizePolicy().hasHeightForWidth());
        Button_submit->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setPointSize(13);
        Button_submit->setFont(font4);

        horizontalLayout_3->addWidget(Button_submit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 8);
        verticalLayout_3->setStretch(2, 1);

        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(classification);

        QMetaObject::connectSlotsByName(classification);
    } // setupUi

    void retranslateUi(QWidget *classification)
    {
        classification->setWindowTitle(QCoreApplication::translate("classification", "Form", nullptr));
        label->setText(QCoreApplication::translate("classification", "\345\210\206\347\261\273\347\256\241\347\220\206", nullptr));
        btn_exit->setText(QCoreApplication::translate("classification", "X", nullptr));
        Button_add_father->setText(QCoreApplication::translate("classification", "+\346\226\260\345\242\236\347\210\266\345\210\206\347\261\273", nullptr));
        Button_add_child->setText(QCoreApplication::translate("classification", "+\346\226\260\345\242\236\345\255\220\345\210\206\347\261\273", nullptr));
        Button_submit->setText(QCoreApplication::translate("classification", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class classification: public Ui_classification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSIFICATION_H
