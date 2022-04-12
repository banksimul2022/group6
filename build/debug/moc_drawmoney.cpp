/****************************************************************************
** Meta object code from reading C++ file 'drawmoney.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bankautomat/drawmoney.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawmoney.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_drawMoney_t {
    QByteArrayData data[21];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drawMoney_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drawMoney_t qt_meta_stringdata_drawMoney = {
    {
QT_MOC_LITERAL(0, 0, 9), // "drawMoney"
QT_MOC_LITERAL(1, 10, 11), // "sendBalance"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "balanceDrawmoney"
QT_MOC_LITERAL(4, 40, 10), // "startTimer"
QT_MOC_LITERAL(5, 51, 12), // "startAjastin"
QT_MOC_LITERAL(6, 64, 20), // "on_BTN_close_clicked"
QT_MOC_LITERAL(7, 85, 19), // "on_BTN_draw_clicked"
QT_MOC_LITERAL(8, 105, 18), // "on_BTN_muu_clicked"
QT_MOC_LITERAL(9, 124, 17), // "on_BTN_20_clicked"
QT_MOC_LITERAL(10, 142, 17), // "on_BTN_40_clicked"
QT_MOC_LITERAL(11, 160, 17), // "on_BTN_60_clicked"
QT_MOC_LITERAL(12, 178, 18), // "on_BTN_100_clicked"
QT_MOC_LITERAL(13, 197, 18), // "on_BTN_200_clicked"
QT_MOC_LITERAL(14, 216, 18), // "on_BTN_500_clicked"
QT_MOC_LITERAL(15, 235, 13), // "buttonClicked"
QT_MOC_LITERAL(16, 249, 9), // "recvValue"
QT_MOC_LITERAL(17, 259, 1), // "t"
QT_MOC_LITERAL(18, 261, 13), // "recBalanceDLL"
QT_MOC_LITERAL(19, 275, 10), // "backToMain"
QT_MOC_LITERAL(20, 286, 10) // "aloitaAika"

    },
    "drawMoney\0sendBalance\0\0balanceDrawmoney\0"
    "startTimer\0startAjastin\0on_BTN_close_clicked\0"
    "on_BTN_draw_clicked\0on_BTN_muu_clicked\0"
    "on_BTN_20_clicked\0on_BTN_40_clicked\0"
    "on_BTN_60_clicked\0on_BTN_100_clicked\0"
    "on_BTN_200_clicked\0on_BTN_500_clicked\0"
    "buttonClicked\0recvValue\0t\0recBalanceDLL\0"
    "backToMain\0aloitaAika"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drawMoney[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    1,  107,    2, 0x06 /* Public */,
       4,    0,  110,    2, 0x06 /* Public */,
       5,    0,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  112,    2, 0x08 /* Private */,
       7,    0,  113,    2, 0x08 /* Private */,
       8,    0,  114,    2, 0x08 /* Private */,
       9,    0,  115,    2, 0x08 /* Private */,
      10,    0,  116,    2, 0x08 /* Private */,
      11,    0,  117,    2, 0x08 /* Private */,
      12,    0,  118,    2, 0x08 /* Private */,
      13,    0,  119,    2, 0x08 /* Private */,
      14,    0,  120,    2, 0x08 /* Private */,
      15,    0,  121,    2, 0x08 /* Private */,
      16,    1,  122,    2, 0x0a /* Public */,
      18,    1,  125,    2, 0x0a /* Public */,
      19,    0,  128,    2, 0x0a /* Public */,
      20,    0,  129,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,
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
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void drawMoney::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<drawMoney *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendBalance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->balanceDrawmoney((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->startTimer(); break;
        case 3: _t->startAjastin(); break;
        case 4: _t->on_BTN_close_clicked(); break;
        case 5: _t->on_BTN_draw_clicked(); break;
        case 6: _t->on_BTN_muu_clicked(); break;
        case 7: _t->on_BTN_20_clicked(); break;
        case 8: _t->on_BTN_40_clicked(); break;
        case 9: _t->on_BTN_60_clicked(); break;
        case 10: _t->on_BTN_100_clicked(); break;
        case 11: _t->on_BTN_200_clicked(); break;
        case 12: _t->on_BTN_500_clicked(); break;
        case 13: _t->buttonClicked(); break;
        case 14: _t->recvValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->recBalanceDLL((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->backToMain(); break;
        case 17: _t->aloitaAika(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (drawMoney::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&drawMoney::sendBalance)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (drawMoney::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&drawMoney::balanceDrawmoney)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (drawMoney::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&drawMoney::startTimer)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (drawMoney::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&drawMoney::startAjastin)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject drawMoney::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_drawMoney.data,
    qt_meta_data_drawMoney,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *drawMoney::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drawMoney::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_drawMoney.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int drawMoney::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void drawMoney::sendBalance(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void drawMoney::balanceDrawmoney(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void drawMoney::startTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void drawMoney::startAjastin()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
