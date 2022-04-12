/****************************************************************************
** Meta object code from reading C++ file 'drawmoney.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../drawmoney.h"
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
struct qt_meta_stringdata_DrawMoney_t {
    QByteArrayData data[16];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawMoney_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawMoney_t qt_meta_stringdata_DrawMoney = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DrawMoney"
QT_MOC_LITERAL(1, 10, 23), // "updateBalanceMainWindow"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "receiveCustomAmount"
QT_MOC_LITERAL(4, 55, 26), // "receiveClientIDinDrawMoney"
QT_MOC_LITERAL(5, 82, 22), // "receiveWithdrawalReady"
QT_MOC_LITERAL(6, 105, 14), // "receiveBalance"
QT_MOC_LITERAL(7, 120, 17), // "receiveClientName"
QT_MOC_LITERAL(8, 138, 21), // "on_btn_Draw20_clicked"
QT_MOC_LITERAL(9, 160, 21), // "on_btn_Draw40_clicked"
QT_MOC_LITERAL(10, 182, 21), // "on_btn_Draw60_clicked"
QT_MOC_LITERAL(11, 204, 22), // "on_btn_Draw100_clicked"
QT_MOC_LITERAL(12, 227, 22), // "on_btn_Draw200_clicked"
QT_MOC_LITERAL(13, 250, 22), // "on_btn_Draw500_clicked"
QT_MOC_LITERAL(14, 273, 27), // "on_btn_customAmount_clicked"
QT_MOC_LITERAL(15, 301, 19) // "on_btn_Draw_clicked"

    },
    "DrawMoney\0updateBalanceMainWindow\0\0"
    "receiveCustomAmount\0receiveClientIDinDrawMoney\0"
    "receiveWithdrawalReady\0receiveBalance\0"
    "receiveClientName\0on_btn_Draw20_clicked\0"
    "on_btn_Draw40_clicked\0on_btn_Draw60_clicked\0"
    "on_btn_Draw100_clicked\0on_btn_Draw200_clicked\0"
    "on_btn_Draw500_clicked\0"
    "on_btn_customAmount_clicked\0"
    "on_btn_Draw_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawMoney[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   85,    2, 0x0a /* Public */,
       4,    1,   88,    2, 0x0a /* Public */,
       5,    0,   91,    2, 0x0a /* Public */,
       6,    1,   92,    2, 0x0a /* Public */,
       7,    1,   95,    2, 0x0a /* Public */,
       8,    0,   98,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
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

void DrawMoney::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawMoney *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateBalanceMainWindow(); break;
        case 1: _t->receiveCustomAmount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->receiveClientIDinDrawMoney((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->receiveWithdrawalReady(); break;
        case 4: _t->receiveBalance((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->receiveClientName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_btn_Draw20_clicked(); break;
        case 7: _t->on_btn_Draw40_clicked(); break;
        case 8: _t->on_btn_Draw60_clicked(); break;
        case 9: _t->on_btn_Draw100_clicked(); break;
        case 10: _t->on_btn_Draw200_clicked(); break;
        case 11: _t->on_btn_Draw500_clicked(); break;
        case 12: _t->on_btn_customAmount_clicked(); break;
        case 13: _t->on_btn_Draw_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawMoney::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawMoney::updateBalanceMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DrawMoney::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DrawMoney.data,
    qt_meta_data_DrawMoney,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrawMoney::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawMoney::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawMoney.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DrawMoney::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void DrawMoney::updateBalanceMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
