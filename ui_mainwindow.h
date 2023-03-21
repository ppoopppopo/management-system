/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame_mainwindow_left;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_mainwindow_left_title;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_9;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_17;
    QFrame *frame_mainwindow_right;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_23;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_24;
    QListWidget *listWidget_3;
    QListWidget *listWidget_2;

    void setupUi(QWidget *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(1098, 555);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainwindow->sizePolicy().hasHeightForWidth());
        mainwindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        mainwindow->setFont(font);
        mainwindow->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        gridLayout_3 = new QGridLayout(mainwindow);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_mainwindow_left = new QFrame(mainwindow);
        frame_mainwindow_left->setObjectName(QString::fromUtf8("frame_mainwindow_left"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_mainwindow_left->sizePolicy().hasHeightForWidth());
        frame_mainwindow_left->setSizePolicy(sizePolicy1);
        frame_mainwindow_left->setStyleSheet(QString::fromUtf8("background-color:rgb(12, 130, 95)"));
        frame_mainwindow_left->setFrameShape(QFrame::StyledPanel);
        frame_mainwindow_left->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_mainwindow_left);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(frame_mainwindow_left);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(100, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("color: #fdfdfd"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(frame_mainwindow_left);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setMinimumSize(QSize(100, 50));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("color:#fdfdfd"));

        horizontalLayout_3->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_mainwindow_left_title = new QLabel(frame_mainwindow_left);
        label_mainwindow_left_title->setObjectName(QString::fromUtf8("label_mainwindow_left_title"));
        label_mainwindow_left_title->setMinimumSize(QSize(50, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223"));
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setWeight(75);
        label_mainwindow_left_title->setFont(font2);
        label_mainwindow_left_title->setStyleSheet(QString::fromUtf8("color:#fdfdfd"));

        horizontalLayout->addWidget(label_mainwindow_left_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 6, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        pushButton_9 = new QPushButton(frame_mainwindow_left);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(200, 200));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_9->setFont(font3);
        pushButton_9->setStyleSheet(QString::fromUtf8("color: #fdfdfd"));

        horizontalLayout_5->addWidget(pushButton_9);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        gridLayout->addLayout(horizontalLayout_5, 7, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 8, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_3 = new QPushButton(frame_mainwindow_left);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setMinimumSize(QSize(100, 50));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: #fdfdfd"));

        horizontalLayout_4->addWidget(pushButton_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButton_4 = new QPushButton(frame_mainwindow_left);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setMinimumSize(QSize(100, 50));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: #fdfdfd"));

        horizontalLayout_4->addWidget(pushButton_4);


        gridLayout->addLayout(horizontalLayout_4, 5, 1, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 3, 2, 1, 1);


        gridLayout_3->addWidget(frame_mainwindow_left, 0, 0, 1, 1);

        frame_mainwindow_right = new QFrame(mainwindow);
        frame_mainwindow_right->setObjectName(QString::fromUtf8("frame_mainwindow_right"));
        sizePolicy1.setHeightForWidth(frame_mainwindow_right->sizePolicy().hasHeightForWidth());
        frame_mainwindow_right->setSizePolicy(sizePolicy1);
        frame_mainwindow_right->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));
        gridLayout_2 = new QGridLayout(frame_mainwindow_right);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 6, -1, -1);
        horizontalSpacer_11 = new QSpacerItem(40, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        label = new QLabel(frame_mainwindow_right);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMaximumSize(QSize(16777215, 50));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Bahnschrift SemiLight"));
        font4.setPointSize(20);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Bahnschrift SemiLight\";"));

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        horizontalLayout_6->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_mainwindow_right);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(150, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(frame_mainwindow_right);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setStyleSheet(QString::fromUtf8("font: 36pt \"Bahnschrift SemiLight\";\n"
"color: rgb(255, 170, 0);"));

        horizontalLayout_7->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(150, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(frame_mainwindow_right);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(12);
        label_4->setFont(font5);

        horizontalLayout_8->addWidget(label_4);

        horizontalSpacer_7 = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_23->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(frame_mainwindow_right);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setFont(font5);

        horizontalLayout_9->addWidget(label_5);

        horizontalSpacer_8 = new QSpacerItem(200, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        pushButton_5 = new QPushButton(frame_mainwindow_right);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMaximumSize(QSize(40, 30));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font6.setPointSize(9);
        pushButton_5->setFont(font6);
        pushButton_5->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_19->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(frame_mainwindow_right);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMaximumSize(QSize(40, 30));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        pushButton_6->setFont(font7);
        pushButton_6->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_19->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(frame_mainwindow_right);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMaximumSize(QSize(40, 30));
        pushButton_7->setFont(font7);
        pushButton_7->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_19->addWidget(pushButton_7);


        horizontalLayout_9->addLayout(horizontalLayout_19);

        horizontalLayout_9->setStretch(1, 3);
        horizontalLayout_9->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_6 = new QLabel(frame_mainwindow_right);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QString::fromUtf8("font: 36pt \"Bahnschrift SemiLight\";\n"
"color: rgb(255, 170, 0);"));

        horizontalLayout_10->addWidget(label_6);

        horizontalSpacer_13 = new QSpacerItem(150, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_7 = new QLabel(frame_mainwindow_right);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font5);

        horizontalLayout_11->addWidget(label_7);

        horizontalSpacer_14 = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_11);


        horizontalLayout_23->addLayout(verticalLayout_2);

        horizontalLayout_23->setStretch(0, 1);
        horizontalLayout_23->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        listWidget_3 = new QListWidget(frame_mainwindow_right);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        sizePolicy2.setHeightForWidth(listWidget_3->sizePolicy().hasHeightForWidth());
        listWidget_3->setSizePolicy(sizePolicy2);

        horizontalLayout_24->addWidget(listWidget_3);

        listWidget_2 = new QListWidget(frame_mainwindow_right);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setEnabled(true);
        sizePolicy2.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy2);
        listWidget_2->setAutoFillBackground(false);
        listWidget_2->setMovement(QListView::Static);

        horizontalLayout_24->addWidget(listWidget_2);


        verticalLayout_3->addLayout(horizontalLayout_24);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_mainwindow_right, 0, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 3);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QWidget *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("mainwindow", "\345\225\206\345\223\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mainwindow", "\350\277\233\350\264\247", nullptr));
        label_mainwindow_left_title->setText(QCoreApplication::translate("mainwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">\351\230\277\345\213\213\346\224\266\351\223\266</span></p></body></html>", nullptr));
        pushButton_9->setText(QCoreApplication::translate("mainwindow", "\346\224\266\351\223\266\345\217\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mainwindow", "\346\212\245\350\241\250", nullptr));
        pushButton_4->setText(QCoreApplication::translate("mainwindow", "\344\274\232\345\221\230", nullptr));
        label->setText(QCoreApplication::translate("mainwindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("mainwindow", "\351\224\200\345\224\256\351\242\235", nullptr));
        label_3->setText(QCoreApplication::translate("mainwindow", "00.00", nullptr));
        label_4->setText(QCoreApplication::translate("mainwindow", "\351\224\200\345\224\256\346\225\260\346\215\256\346\216\222\350\241\214", nullptr));
        label_5->setText(QCoreApplication::translate("mainwindow", "\351\242\204\344\274\260\345\210\251\346\266\246", nullptr));
        pushButton_5->setText(QCoreApplication::translate("mainwindow", "\344\273\212\346\227\245", nullptr));
        pushButton_6->setText(QCoreApplication::translate("mainwindow", "\346\234\254\346\234\210", nullptr));
        pushButton_7->setText(QCoreApplication::translate("mainwindow", "\344\273\212\345\271\264", nullptr));
        label_6->setText(QCoreApplication::translate("mainwindow", "00.00", nullptr));
        label_7->setText(QCoreApplication::translate("mainwindow", "\351\224\200\345\224\256\351\207\221\351\242\235\346\216\222\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
