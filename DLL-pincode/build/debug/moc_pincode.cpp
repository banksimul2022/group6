/****************************************************************************
** Meta object code from reading C++ file 'pincode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../pincode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pincode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Pincode_t {
    QByteArrayData data[19];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pincode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pincode_t qt_meta_stringdata_Pincode = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Pincode"
QT_MOC_LITERAL(1, 8, 13), // "pincodeFromUI"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "resetTimerSignal"
QT_MOC_LITERAL(4, 40, 15), // "cancelPINSignal"
QT_MOC_LITERAL(5, 56, 15), // "resetLoginTimer"
QT_MOC_LITERAL(6, 72, 16), // "on_BTN_1_clicked"
QT_MOC_LITERAL(7, 89, 16), // "on_BTN_2_clicked"
QT_MOC_LITERAL(8, 106, 16), // "on_BTN_3_clicked"
QT_MOC_LITERAL(9, 123, 16), // "on_BTN_4_clicked"
QT_MOC_LITERAL(10, 140, 16), // "on_BTN_5_clicked"
QT_MOC_LITERAL(11, 157, 16), // "on_BTN_6_clicked"
QT_MOC_LITERAL(12, 174, 16), // "on_BTN_7_clicked"
QT_MOC_LITERAL(13, 191, 16), // "on_BTN_8_clicked"
QT_MOC_LITERAL(14, 208, 16), // "on_BTN_9_clicked"
QT_MOC_LITERAL(15, 225, 16), // "on_BTN_0_clicked"
QT_MOC_LITERAL(16, 242, 20), // "on_BTN_clear_clicked"
QT_MOC_LITERAL(17, 263, 17), // "on_BTN_ok_clicked"
QT_MOC_LITERAL(18, 281, 21) // "on_btn_cancel_clicked"

    },
    "Pincode\0pincodeFromUI\0\0resetTimerSignal\0"
    "cancelPINSignal\0resetLoginTimer\0"
    "on_BTN_1_clicked\0on_BTN_2_clicked\0"
    "on_BTN_3_clicked\0on_BTN_4_clicked\0"
    "on_BTN_5_clicked\0on_BTN_6_clicked\0"
    "on_BTN_7_clicked\0on_BTN_8_clicked\0"
    "on_BTN_9_clicked\0on_BTN_0_clicked\0"
    "on_BTN_clear_clicked\0on_BTN_ok_clicked\0"
    "on_btn_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pincode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  102,    2, 0x0a /* Public */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Pincode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pincode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pincodeFromUI(); break;
        case 1: _t->resetTimerSignal(); break;
        case 2: _t->cancelPINSignal(); break;
        case 3: _t->resetLoginTimer(); break;
        case 4: _t->on_BTN_1_clicked(); break;
        case 5: _t->on_BTN_2_clicked(); break;
        case 6: _t->on_BTN_3_clicked(); break;
        case 7: _t->on_BTN_4_clicked(); break;
        case 8: _t->on_BTN_5_clicked(); break;
        case 9: _t->on_BTN_6_clicked(); break;
        case 10: _t->on_BTN_7_clicked(); break;
        case 11: _t->on_BTN_8_clicked(); break;
        case 12: _t->on_BTN_9_clicked(); break;
        case 13: _t->on_BTN_0_clicked(); break;
        case 14: _t->on_BTN_clear_clicked(); break;
        case 15: _t->on_BTN_ok_clicked(); break;
        case 16: _t->on_btn_cancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Pincode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pincode::pincodeFromUI)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Pincode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pincode::resetTimerSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Pincode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pincode::cancelPINSignal)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Pincode::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Pincode.data,
    qt_meta_data_Pincode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Pincode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pincode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pincode.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Pincode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Pincode::pincodeFromUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Pincode::resetTimerSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Pincode::cancelPINSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
