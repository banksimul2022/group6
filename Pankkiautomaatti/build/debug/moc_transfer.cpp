/****************************************************************************
** Meta object code from reading C++ file 'transfer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../transfer.h"
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
    QByteArrayData data[6];
    char stringdata0[96];
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
QT_MOC_LITERAL(3, 28, 22), // "receiveAccIDinTransfer"
QT_MOC_LITERAL(4, 51, 20), // "receiveTransferReady"
QT_MOC_LITERAL(5, 72, 23) // "on_btn_transfer_clicked"

    },
    "transfer\0updateMainBalance\0\0"
    "receiveAccIDinTransfer\0receiveTransferReady\0"
    "on_btn_transfer_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_transfer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       4,    0,   38,    2, 0x0a /* Public */,
       5,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
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
        case 1: _t->receiveAccIDinTransfer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->receiveTransferReady(); break;
        case 3: _t->on_btn_transfer_clicked(); break;
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void transfer::updateMainBalance()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
