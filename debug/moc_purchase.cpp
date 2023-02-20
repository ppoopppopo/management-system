/****************************************************************************
** Meta object code from reading C++ file 'purchase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../purchase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'purchase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Purchase_t {
    QByteArrayData data[16];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Purchase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Purchase_t qt_meta_stringdata_Purchase = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Purchase"
QT_MOC_LITERAL(1, 9, 30), // "on_parentClassificationClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 20), // "ParentClassification"
QT_MOC_LITERAL(4, 62, 21), // "onDeleteButtonClicked"
QT_MOC_LITERAL(5, 84, 3), // "row"
QT_MOC_LITERAL(6, 88, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(7, 110, 6), // "vendor"
QT_MOC_LITERAL(8, 117, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(9, 141, 3), // "pay"
QT_MOC_LITERAL(10, 145, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(11, 171, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(12, 188, 4), // "item"
QT_MOC_LITERAL(13, 193, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(14, 217, 4), // "arg1"
QT_MOC_LITERAL(15, 222, 32) // "on_Submit_incoming_goods_clicked"

    },
    "Purchase\0on_parentClassificationClicked\0"
    "\0ParentClassification\0onDeleteButtonClicked\0"
    "row\0on_comboBox_activated\0vendor\0"
    "on_comboBox_2_activated\0pay\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item\0on_lineEdit_textChanged\0arg1\0"
    "on_Submit_incoming_goods_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Purchase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,
      13,    1,   64,    2, 0x08 /* Private */,
      15,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

       0        // eod
};

void Purchase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Purchase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_parentClassificationClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onDeleteButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_Submit_incoming_goods_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Purchase::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Purchase.data,
    qt_meta_data_Purchase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Purchase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Purchase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Purchase.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Purchase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
