/********************************************************************************
** Form generated from reading UI file 'categorymanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORYMANAGEMENT_H
#define UI_CATEGORYMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CategoryManagement
{
public:

    void setupUi(QWidget *CategoryManagement)
    {
        if (CategoryManagement->objectName().isEmpty())
            CategoryManagement->setObjectName(QString::fromUtf8("CategoryManagement"));
        CategoryManagement->resize(400, 300);

        retranslateUi(CategoryManagement);

        QMetaObject::connectSlotsByName(CategoryManagement);
    } // setupUi

    void retranslateUi(QWidget *CategoryManagement)
    {
        CategoryManagement->setWindowTitle(QCoreApplication::translate("CategoryManagement", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CategoryManagement: public Ui_CategoryManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYMANAGEMENT_H
