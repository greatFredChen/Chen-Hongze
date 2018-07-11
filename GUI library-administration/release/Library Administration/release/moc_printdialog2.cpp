/****************************************************************************
** Meta object code from reading C++ file 'printdialog2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt exercise/homework-libraryAdministration/printdialog2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printdialog2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_printdialog2_t {
    QByteArrayData data[9];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_printdialog2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_printdialog2_t qt_meta_stringdata_printdialog2 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "printdialog2"
QT_MOC_LITERAL(1, 13, 21), // "on_okbutton_2_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "on_okbutton_clicked"
QT_MOC_LITERAL(4, 56, 22), // "on_printbutton_clicked"
QT_MOC_LITERAL(5, 79, 21), // "on_okbutton_3_clicked"
QT_MOC_LITERAL(6, 101, 21), // "on_okbutton_4_clicked"
QT_MOC_LITERAL(7, 123, 24), // "on_printbutton_2_clicked"
QT_MOC_LITERAL(8, 148, 24) // "on_printbutton_3_clicked"

    },
    "printdialog2\0on_okbutton_2_clicked\0\0"
    "on_okbutton_clicked\0on_printbutton_clicked\0"
    "on_okbutton_3_clicked\0on_okbutton_4_clicked\0"
    "on_printbutton_2_clicked\0"
    "on_printbutton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_printdialog2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void printdialog2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        printdialog2 *_t = static_cast<printdialog2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_okbutton_2_clicked(); break;
        case 1: _t->on_okbutton_clicked(); break;
        case 2: _t->on_printbutton_clicked(); break;
        case 3: _t->on_okbutton_3_clicked(); break;
        case 4: _t->on_okbutton_4_clicked(); break;
        case 5: _t->on_printbutton_2_clicked(); break;
        case 6: _t->on_printbutton_3_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject printdialog2::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_printdialog2.data,
      qt_meta_data_printdialog2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *printdialog2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *printdialog2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_printdialog2.stringdata0))
        return static_cast<void*>(const_cast< printdialog2*>(this));
    return QDialog::qt_metacast(_clname);
}

int printdialog2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
