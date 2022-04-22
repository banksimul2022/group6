/****************************************************************************
** Meta object code from reading C++ file 'transfer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../group6/Pankkiautomaatti/transfer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_transfer_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_transfer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_transfer_t qt_meta_stringdata_transfer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "transfer"
QT_MOC_LITERAL(1, 9, 17), // "updateMainBalance"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "mainTimerSig"
QT_MOC_LITERAL(4, 41, 22), // "receiveAccIDinTransfer"
QT_MOC_LITERAL(5, 64, 20), // "receiveTransferReady"
QT_MOC_LITERAL(6, 85, 18), // "startTransferTimer"
QT_MOC_LITERAL(7, 104, 16), // "transferIdleSlot"
QT_MOC_LITERAL(8, 121, 11), // "recvBalance"
QT_MOC_LITERAL(9, 133, 12), // "clearWarning"
QT_MOC_LITERAL(10, 146, 12), // "recvCardMode"
QT_MOC_LITERAL(11, 159, 23) // "on_btn_transfer_clicked"

    },
    "transfer\0updateMainBalance\0\0mainTimerSig\0"
    "receiveAccIDinTransfer\0receiveTransferReady\0"
    "startTransferTimer\0transferIdleSlot\0"
    "recvBalance\0clearWarning\0recvCardMode\0"
    "on_btn_transfer_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_transfer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   66,    2, 0x0a /* Public */,
       5,    0,   69,    2, 0x0a /* Public */,
       6,    0,   70,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
       9,    0,   75,    2, 0x0a /* Public */,
      10,    1,   76,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void transfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<transfer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMainBalance(); break;
        case 1: _t->mainTimerSig(); break;
        case 2: _t->receiveAccIDinTransfer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->receiveTransferReady(); break;
        case 4: _t->startTransferTimer(); break;
        case 5: _t->transferIdleSlot(); break;
        case 6: _t->recvBalance((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->clearWarning(); break;
        case 8: _t->recvCardMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_btn_transfer_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (transfer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&transfer::updateMainBalance)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (transfer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&transfer::mainTimerSig)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject transfer::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_transfer.data,
    qt_meta_data_transfer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *transfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *transfer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_transfer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int transfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void transfer::updateMainBalance()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void transfer::mainTimerSig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
