/****************************************************************************
** Meta object code from reading C++ file 'good.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../good.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'good.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_good_t {
    QByteArrayData data[19];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_good_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_good_t qt_meta_stringdata_good = {
    {
QT_MOC_LITERAL(0, 0, 4), // "good"
QT_MOC_LITERAL(1, 5, 30), // "on_parentClassificationClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "on_subClassificationClicked"
QT_MOC_LITERAL(4, 65, 22), // "onItemSelectionChanged"
QT_MOC_LITERAL(5, 88, 15), // "on_cell_changed"
QT_MOC_LITERAL(6, 104, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 126, 30), // "onTableWidgetCellDoubleClicked"
QT_MOC_LITERAL(8, 157, 3), // "row"
QT_MOC_LITERAL(9, 161, 6), // "column"
QT_MOC_LITERAL(10, 168, 17), // "QLayoutItem_Clear"
QT_MOC_LITERAL(11, 186, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(12, 210, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(13, 234, 4), // "arg1"
QT_MOC_LITERAL(14, 239, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(15, 263, 27), // "on_dateEdit_userDateChanged"
QT_MOC_LITERAL(16, 291, 4), // "date"
QT_MOC_LITERAL(17, 296, 29), // "on_dateEdit_2_userDateChanged"
QT_MOC_LITERAL(18, 326, 20) // "on_inventory_clicked"

    },
    "good\0on_parentClassificationClicked\0"
    "\0on_subClassificationClicked\0"
    "onItemSelectionChanged\0on_cell_changed\0"
    "on_pushButton_clicked\0"
    "onTableWidgetCellDoubleClicked\0row\0"
    "column\0QLayoutItem_Clear\0"
    "on_pushButton_5_clicked\0on_lineEdit_textChanged\0"
    "arg1\0on_pushButton_6_clicked\0"
    "on_dateEdit_userDateChanged\0date\0"
    "on_dateEdit_2_userDateChanged\0"
    "on_inventory_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_good[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       3,    1,   82,    2, 0x0a /* Public */,
       4,    0,   85,    2, 0x0a /* Public */,
       5,    2,   86,    2, 0x0a /* Public */,
       6,    0,   91,    2, 0x08 /* Private */,
       7,    2,   92,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    1,   99,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      17,    1,  106,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   16,
    QMetaType::Void, QMetaType::QDate,   16,
    QMetaType::Void,

       0        // eod
};

void good::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<good *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_parentClassificationClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_subClassificationClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onItemSelectionChanged(); break;
        case 3: _t->on_cell_changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->onTableWidgetCellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->QLayoutItem_Clear(); break;
        case 7: _t->on_pushButton_5_clicked(); break;
        case 8: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_6_clicked(); break;
        case 10: _t->on_dateEdit_userDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 11: _t->on_dateEdit_2_userDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 12: _t->on_inventory_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject good::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_good.data,
    qt_meta_data_good,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *good::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *good::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_good.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int good::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
