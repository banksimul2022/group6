/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bankautomat/mainwindow.h"
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
    QByteArrayData data[17];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_accbalance_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_AccActions_clicked"
QT_MOC_LITERAL(4, 56, 21), // "on_prevAction_clicked"
QT_MOC_LITERAL(5, 78, 21), // "on_nextAction_clicked"
QT_MOC_LITERAL(6, 100, 15), // "on_draw_clicked"
QT_MOC_LITERAL(7, 116, 16), // "on_close_clicked"
QT_MOC_LITERAL(8, 133, 13), // "buttonClicked"
QT_MOC_LITERAL(9, 147, 22), // "on_BTN_pincode_clicked"
QT_MOC_LITERAL(10, 170, 11), // "recvBalance"
QT_MOC_LITERAL(11, 182, 1), // "b"
QT_MOC_LITERAL(12, 184, 14), // "recvBalanceDLL"
QT_MOC_LITERAL(13, 199, 11), // "RecvActions"
QT_MOC_LITERAL(14, 211, 8), // "RecvName"
QT_MOC_LITERAL(15, 220, 12), // "backToSignin"
QT_MOC_LITERAL(16, 233, 11) // "aloitaTaika"

    },
    "MainWindow\0on_accbalance_clicked\0\0"
    "on_AccActions_clicked\0on_prevAction_clicked\0"
    "on_nextAction_clicked\0on_draw_clicked\0"
    "on_close_clicked\0buttonClicked\0"
    "on_BTN_pincode_clicked\0recvBalance\0b\0"
    "recvBalanceDLL\0RecvActions\0RecvName\0"
    "backToSignin\0aloitaTaika"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x0a /* Public */,
      12,    1,   95,    2, 0x0a /* Public */,
      13,    1,   98,    2, 0x0a /* Public */,
      14,    1,  101,    2, 0x0a /* Public */,
      15,    0,  104,    2, 0x0a /* Public */,
      16,    0,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
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
        case 0: _t->on_accbalance_clicked(); break;
        case 1: _t->on_AccActions_clicked(); break;
        case 2: _t->on_prevAction_clicked(); break;
        case 3: _t->on_nextAction_clicked(); break;
        case 4: _t->on_draw_clicked(); break;
        case 5: _t->on_close_clicked(); break;
        case 6: _t->buttonClicked(); break;
        case 7: _t->on_BTN_pincode_clicked(); break;
        case 8: _t->recvBalance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->recvBalanceDLL((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->RecvActions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->RecvName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->backToSignin(); break;
        case 13: _t->aloitaTaika(); break;
        default: ;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
