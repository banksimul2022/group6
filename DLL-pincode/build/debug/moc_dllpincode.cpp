/****************************************************************************
** Meta object code from reading C++ file 'dllpincode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dllpincode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dllpincode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DLLpincode_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DLLpincode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DLLpincode_t qt_meta_stringdata_DLLpincode = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DLLpincode"
QT_MOC_LITERAL(1, 11, 13), // "signalPincode"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "resetLoginTimerSignal"
QT_MOC_LITERAL(4, 48, 18), // "cancelPincodeLogin"
QT_MOC_LITERAL(5, 67, 11), // "pincodeSlot"
QT_MOC_LITERAL(6, 79, 24), // "receiveTimerSignalFromUI"
QT_MOC_LITERAL(7, 104, 16) // "receiveCancelPin"

    },
    "DLLpincode\0signalPincode\0\0"
    "resetLoginTimerSignal\0cancelPincodeLogin\0"
    "pincodeSlot\0receiveTimerSignalFromUI\0"
    "receiveCancelPin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DLLpincode[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   49,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DLLpincode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DLLpincode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalPincode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->resetLoginTimerSignal(); break;
        case 2: _t->cancelPincodeLogin(); break;
        case 3: _t->pincodeSlot(); break;
        case 4: _t->receiveTimerSignalFromUI(); break;
        case 5: _t->receiveCancelPin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DLLpincode::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLpincode::signalPincode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DLLpincode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLpincode::resetLoginTimerSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DLLpincode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLpincode::cancelPincodeLogin)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DLLpincode::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DLLpincode.data,
    qt_meta_data_DLLpincode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DLLpincode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DLLpincode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DLLpincode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DLLpincode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void DLLpincode::signalPincode(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DLLpincode::resetLoginTimerSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DLLpincode::cancelPincodeLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
