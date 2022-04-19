/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_login_t {
    QByteArrayData data[18];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_login_t qt_meta_stringdata_login = {
    {
QT_MOC_LITERAL(0, 0, 5), // "login"
QT_MOC_LITERAL(1, 6, 20), // "clientIDtoMainWindow"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 21), // "accountIDtoMainWindow"
QT_MOC_LITERAL(4, 50, 15), // "MainTimerSignal"
QT_MOC_LITERAL(5, 66, 14), // "wrongPinSignal"
QT_MOC_LITERAL(6, 81, 15), // "cardLockWarning"
QT_MOC_LITERAL(7, 97, 15), // "receiveRFIDcard"
QT_MOC_LITERAL(8, 113, 12), // "receiveLogin"
QT_MOC_LITERAL(9, 126, 14), // "receivePincode"
QT_MOC_LITERAL(10, 141, 15), // "receiveClientID"
QT_MOC_LITERAL(11, 157, 16), // "receiveAccountID"
QT_MOC_LITERAL(12, 174, 13), // "loggedOutSlot"
QT_MOC_LITERAL(13, 188, 10), // "resetTimer"
QT_MOC_LITERAL(14, 199, 13), // "loginIdleSlot"
QT_MOC_LITERAL(15, 213, 15), // "receiveCardInfo"
QT_MOC_LITERAL(16, 229, 12), // "cardLockInfo"
QT_MOC_LITERAL(17, 242, 20) // "on_btn_pinUI_clicked"

    },
    "login\0clientIDtoMainWindow\0\0"
    "accountIDtoMainWindow\0MainTimerSignal\0"
    "wrongPinSignal\0cardLockWarning\0"
    "receiveRFIDcard\0receiveLogin\0"
    "receivePincode\0receiveClientID\0"
    "receiveAccountID\0loggedOutSlot\0"
    "resetTimer\0loginIdleSlot\0receiveCardInfo\0"
    "cardLockInfo\0on_btn_pinUI_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_login[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,
       4,    0,  100,    2, 0x06 /* Public */,
       5,    0,  101,    2, 0x06 /* Public */,
       6,    0,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  103,    2, 0x0a /* Public */,
       8,    1,  106,    2, 0x0a /* Public */,
       9,    1,  109,    2, 0x0a /* Public */,
      10,    1,  112,    2, 0x0a /* Public */,
      11,    1,  115,    2, 0x0a /* Public */,
      12,    0,  118,    2, 0x0a /* Public */,
      13,    0,  119,    2, 0x0a /* Public */,
      14,    0,  120,    2, 0x0a /* Public */,
      15,    1,  121,    2, 0x0a /* Public */,
      16,    0,  124,    2, 0x0a /* Public */,
      17,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientIDtoMainWindow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->accountIDtoMainWindow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->MainTimerSignal(); break;
        case 3: _t->wrongPinSignal(); break;
        case 4: _t->cardLockWarning(); break;
        case 5: _t->receiveRFIDcard((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->receiveLogin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->receivePincode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->receiveClientID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->receiveAccountID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->loggedOutSlot(); break;
        case 11: _t->resetTimer(); break;
        case 12: _t->loginIdleSlot(); break;
        case 13: _t->receiveCardInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->cardLockInfo(); break;
        case 15: _t->on_btn_pinUI_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (login::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::clientIDtoMainWindow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (login::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::accountIDtoMainWindow)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (login::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::MainTimerSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (login::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::wrongPinSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (login::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::cardLockWarning)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject login::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_login.data,
    qt_meta_data_login,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_login.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void login::clientIDtoMainWindow(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void login::accountIDtoMainWindow(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void login::MainTimerSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void login::wrongPinSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void login::cardLockWarning()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
