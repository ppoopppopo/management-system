#-------------------------------------------------
#
# Project created by QtCreator 2022-11-25T09:03:51
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = management_system
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11 resources_big

SOURCES += \
    addgood.cpp \
    classification.cpp \
    inventory.cpp \
    itemwidget.cpp \
        main.cpp \
    login.cpp \
    mainwindow.cpp \
    register.cpp \
    shop_sql.cpp \
    good.cpp \
    purchase.cpp \
    xdialog.cpp

HEADERS += \
    addgood.h \
    classification.h \
    inventory.h \
    itemwidget.h \
    login.h \
    mainwindow.h \
    register.h \
    shop_sql.h \
    good.h \
    purchase.h \
    xdialog.h

FORMS += \
    addgood.ui \
    classification.ui \
    inventory.ui \
    login.ui \
    mainwindow.ui \
    register.ui \
    good.ui \
    purchase.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    pic.qrc \
    qss.qrc
