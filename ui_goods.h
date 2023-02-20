/********************************************************************************
** Form generated from reading UI file 'goods.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_H
#define UI_GOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_goods
{
public:

    void setupUi(QWidget *goods)
    {
        if (goods->objectName().isEmpty())
            goods->setObjectName(QString::fromUtf8("goods"));
        goods->resize(400, 300);

        retranslateUi(goods);

        QMetaObject::connectSlotsByName(goods);
    } // setupUi

    void retranslateUi(QWidget *goods)
    {
        goods->setWindowTitle(QApplication::translate("goods", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class goods: public Ui_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_H
