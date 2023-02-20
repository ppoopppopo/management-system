/****************************************************************************
** Meta object code from reading C++ file 'classification.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../classification.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'classification.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_classification_t {
    QByteArrayData data[10];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_classification_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_classification_t qt_meta_stringdata_classification = {
    {
QT_MOC_LITERAL(0, 0, 14), // "classification"
QT_MOC_LITERAL(1, 15, 14), // "Button_display"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 27), // "parentClassificationClicked"
QT_MOC_LITERAL(4, 59, 20), // "parentClassification"
QT_MOC_LITERAL(5, 80, 24), // "subClassificationClicked"
QT_MOC_LITERAL(6, 105, 17), // "subClassification"
QT_MOC_LITERAL(7, 123, 22), // "Button_add_child_state"
QT_MOC_LITERAL(8, 146, 28), // "on_Button_add_father_clicked"
QT_MOC_LITERAL(9, 175, 27) // "on_Button_add_child_clicked"

    },
    "classification\0Button_display\0\0"
    "parentClassificationClicked\0"
    "parentClassification\0subClassificationClicked\0"
    "subClassification\0Button_add_child_state\0"
    "on_Button_add_father_clicked\0"
    "on_Button_add_child_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_classification[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void classification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<classification *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Button_display(); break;
        case 1: _t->parentClassificationClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->subClassificationClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->Button_add_child_state(); break;
        case 4: _t->on_Button_add_father_clicked(); break;
        case 5: _t->on_Button_add_child_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (classification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&classification::Button_display)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (classification::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&classification::parentClassificationClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (classification::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&classification::subClassificationClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject classification::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_classification.data,
    qt_meta_data_classification,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *classification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *classification::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_classification.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int classification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void classification::Button_display()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void classification::parentClassificationClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void classification::subClassificationClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
