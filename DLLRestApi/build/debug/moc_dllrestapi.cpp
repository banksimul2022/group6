/****************************************************************************
** Meta object code from reading C++ file 'dllrestapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dllrestapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dllrestapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DLLRestApi_t {
    QByteArrayData data[18];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DLLRestApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DLLRestApi_t qt_meta_stringdata_DLLRestApi = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DLLRestApi"
QT_MOC_LITERAL(1, 11, 13), // "balanceSignal"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "actionSignal"
QT_MOC_LITERAL(4, 39, 13), // "browseActions"
QT_MOC_LITERAL(5, 53, 20), // "sendWithdrawalSignal"
QT_MOC_LITERAL(6, 74, 9), // "nameToExe"
QT_MOC_LITERAL(7, 84, 15), // "withdrawalReady"
QT_MOC_LITERAL(8, 100, 19), // "clientIDsignaltoExe"
QT_MOC_LITERAL(9, 120, 11), // "loginSignal"
QT_MOC_LITERAL(10, 132, 9), // "loginSlot"
QT_MOC_LITERAL(11, 142, 14), // "QNetworkReply*"
QT_MOC_LITERAL(12, 157, 5), // "reply"
QT_MOC_LITERAL(13, 163, 14), // "getBalanceSlot"
QT_MOC_LITERAL(14, 178, 13), // "getActionSlot"
QT_MOC_LITERAL(15, 192, 14), // "withdrawalSlot"
QT_MOC_LITERAL(16, 207, 20), // "clientIDfromCardSlot"
QT_MOC_LITERAL(17, 228, 17) // "browseActionsSlot"

    },
    "DLLRestApi\0balanceSignal\0\0actionSignal\0"
    "browseActions\0sendWithdrawalSignal\0"
    "nameToExe\0withdrawalReady\0clientIDsignaltoExe\0"
    "loginSignal\0loginSlot\0QNetworkReply*\0"
    "reply\0getBalanceSlot\0getActionSlot\0"
    "withdrawalSlot\0clientIDfromCardSlot\0"
    "browseActionsSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DLLRestApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,
       5,    0,   93,    2, 0x06 /* Public */,
       6,    1,   94,    2, 0x06 /* Public */,
       7,    0,   97,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,
       9,    1,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  104,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,
      14,    1,  110,    2, 0x08 /* Private */,
      15,    1,  113,    2, 0x08 /* Private */,
      16,    1,  116,    2, 0x08 /* Private */,
      17,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void DLLRestApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DLLRestApi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->balanceSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->actionSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->browseActions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sendWithdrawalSignal(); break;
        case 4: _t->nameToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->withdrawalReady(); break;
        case 6: _t->clientIDsignaltoExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->loginSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->loginSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->getBalanceSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->getActionSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->withdrawalSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->clientIDfromCardSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->browseActionsSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::balanceSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::actionSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::browseActions)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::sendWithdrawalSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::nameToExe)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::withdrawalReady)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::clientIDsignaltoExe)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::loginSignal)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DLLRestApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DLLRestApi.data,
    qt_meta_data_DLLRestApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DLLRestApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DLLRestApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DLLRestApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DLLRestApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void DLLRestApi::balanceSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DLLRestApi::actionSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DLLRestApi::browseActions(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DLLRestApi::sendWithdrawalSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DLLRestApi::nameToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DLLRestApi::withdrawalReady()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DLLRestApi::clientIDsignaltoExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DLLRestApi::loginSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
