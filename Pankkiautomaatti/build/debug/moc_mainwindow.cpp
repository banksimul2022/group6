/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "clientIDtoDrawMoney"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "accountIDtoDrawMoney"
QT_MOC_LITERAL(4, 53, 12), // "logOutSignal"
QT_MOC_LITERAL(5, 66, 19), // "accountIDtoTransfer"
QT_MOC_LITERAL(6, 86, 24), // "receiveCLientIDfromLogin"
QT_MOC_LITERAL(7, 111, 14), // "receiveActions"
QT_MOC_LITERAL(8, 126, 14), // "receiveBalance"
QT_MOC_LITERAL(9, 141, 17), // "receiveClientName"
QT_MOC_LITERAL(10, 159, 17), // "updateBalanceSlot"
QT_MOC_LITERAL(11, 177, 13), // "receivePrev10"
QT_MOC_LITERAL(12, 191, 25), // "receiveAccountIDfromLogin"
QT_MOC_LITERAL(13, 217, 14), // "startMainTimer"
QT_MOC_LITERAL(14, 232, 12), // "mainIdleSlot"
QT_MOC_LITERAL(15, 245, 22), // "on_btn_balance_clicked"
QT_MOC_LITERAL(16, 268, 24), // "on_btn_drawMoney_clicked"
QT_MOC_LITERAL(17, 293, 21), // "on_btn_logOut_clicked"
QT_MOC_LITERAL(18, 315, 24), // "on_btn_10actions_clicked"
QT_MOC_LITERAL(19, 340, 28), // "on_btn_prev10actions_clicked"
QT_MOC_LITERAL(20, 369, 28), // "on_btn_next10actions_clicked"
QT_MOC_LITERAL(21, 398, 21) // "on_btn_Siirto_clicked"

    },
    "MainWindow\0clientIDtoDrawMoney\0\0"
    "accountIDtoDrawMoney\0logOutSignal\0"
    "accountIDtoTransfer\0receiveCLientIDfromLogin\0"
    "receiveActions\0receiveBalance\0"
    "receiveClientName\0updateBalanceSlot\0"
    "receivePrev10\0receiveAccountIDfromLogin\0"
    "startMainTimer\0mainIdleSlot\0"
    "on_btn_balance_clicked\0on_btn_drawMoney_clicked\0"
    "on_btn_logOut_clicked\0on_btn_10actions_clicked\0"
    "on_btn_prev10actions_clicked\0"
    "on_btn_next10actions_clicked\0"
    "on_btn_Siirto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       3,    1,  117,    2, 0x06 /* Public */,
       4,    0,  120,    2, 0x06 /* Public */,
       5,    1,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  124,    2, 0x0a /* Public */,
       7,    1,  127,    2, 0x0a /* Public */,
       8,    1,  130,    2, 0x0a /* Public */,
       9,    1,  133,    2, 0x0a /* Public */,
      10,    0,  136,    2, 0x0a /* Public */,
      11,    1,  137,    2, 0x0a /* Public */,
      12,    1,  140,    2, 0x0a /* Public */,
      13,    0,  143,    2, 0x0a /* Public */,
      14,    0,  144,    2, 0x0a /* Public */,
      15,    0,  145,    2, 0x08 /* Private */,
      16,    0,  146,    2, 0x08 /* Private */,
      17,    0,  147,    2, 0x08 /* Private */,
      18,    0,  148,    2, 0x08 /* Private */,
      19,    0,  149,    2, 0x08 /* Private */,
      20,    0,  150,    2, 0x08 /* Private */,
      21,    0,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
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
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientIDtoDrawMoney((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->accountIDtoDrawMoney((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->logOutSignal(); break;
        case 3: _t->accountIDtoTransfer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->receiveCLientIDfromLogin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->receiveActions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->receiveBalance((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->receiveClientName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->updateBalanceSlot(); break;
        case 9: _t->receivePrev10((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->receiveAccountIDfromLogin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->startMainTimer(); break;
        case 12: _t->mainIdleSlot(); break;
        case 13: _t->on_btn_balance_clicked(); break;
        case 14: _t->on_btn_drawMoney_clicked(); break;
        case 15: _t->on_btn_logOut_clicked(); break;
        case 16: _t->on_btn_10actions_clicked(); break;
        case 17: _t->on_btn_prev10actions_clicked(); break;
        case 18: _t->on_btn_next10actions_clicked(); break;
        case 19: _t->on_btn_Siirto_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::clientIDtoDrawMoney)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::accountIDtoDrawMoney)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::logOutSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::accountIDtoTransfer)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::clientIDtoDrawMoney(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::accountIDtoDrawMoney(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::logOutSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::accountIDtoTransfer(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
