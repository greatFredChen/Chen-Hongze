/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt exercise/homework-libraryAdministration/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[16];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 22), // "on_loginbutton_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_createbutton_clicked"
QT_MOC_LITERAL(4, 55, 23), // "on_insertbutton_clicked"
QT_MOC_LITERAL(5, 79, 22), // "on_printbutton_clicked"
QT_MOC_LITERAL(6, 102, 21), // "on_savebutton_clicked"
QT_MOC_LITERAL(7, 124, 21), // "on_loadbutton_clicked"
QT_MOC_LITERAL(8, 146, 23), // "on_searchbutton_clicked"
QT_MOC_LITERAL(9, 170, 25), // "on_registerbutton_clicked"
QT_MOC_LITERAL(10, 196, 22), // "on_emptybutton_clicked"
QT_MOC_LITERAL(11, 219, 23), // "on_deletebutton_clicked"
QT_MOC_LITERAL(12, 243, 23), // "on_borrowbutton_clicked"
QT_MOC_LITERAL(13, 267, 23), // "on_returnbutton_clicked"
QT_MOC_LITERAL(14, 291, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(15, 316, 4) // "arg1"

    },
    "Widget\0on_loginbutton_clicked\0\0"
    "on_createbutton_clicked\0on_insertbutton_clicked\0"
    "on_printbutton_clicked\0on_savebutton_clicked\0"
    "on_loadbutton_clicked\0on_searchbutton_clicked\0"
    "on_registerbutton_clicked\0"
    "on_emptybutton_clicked\0on_deletebutton_clicked\0"
    "on_borrowbutton_clicked\0on_returnbutton_clicked\0"
    "on_checkBox_stateChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_loginbutton_clicked(); break;
        case 1: _t->on_createbutton_clicked(); break;
        case 2: _t->on_insertbutton_clicked(); break;
        case 3: _t->on_printbutton_clicked(); break;
        case 4: _t->on_savebutton_clicked(); break;
        case 5: _t->on_loadbutton_clicked(); break;
        case 6: _t->on_searchbutton_clicked(); break;
        case 7: _t->on_registerbutton_clicked(); break;
        case 8: _t->on_emptybutton_clicked(); break;
        case 9: _t->on_deletebutton_clicked(); break;
        case 10: _t->on_borrowbutton_clicked(); break;
        case 11: _t->on_returnbutton_clicked(); break;
        case 12: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    if (!strcmp(_clname, "Ui::Widget"))
        return static_cast< Ui::Widget*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
