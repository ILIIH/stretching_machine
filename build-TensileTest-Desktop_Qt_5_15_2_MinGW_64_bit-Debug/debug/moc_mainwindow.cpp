/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../TensileTest/mainwindow.h"
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
    QByteArrayData data[21];
    char stringdata0[407];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "serialRecieve"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "on_openBForce_clicked"
QT_MOC_LITERAL(4, 48, 22), // "on_openBLength_clicked"
QT_MOC_LITERAL(5, 71, 22), // "on_closeBForce_clicked"
QT_MOC_LITERAL(6, 94, 23), // "on_closeBLength_clicked"
QT_MOC_LITERAL(7, 118, 16), // "on_drawB_clicked"
QT_MOC_LITERAL(8, 135, 19), // "on_radioNew_clicked"
QT_MOC_LITERAL(9, 155, 24), // "on_radioExisting_clicked"
QT_MOC_LITERAL(10, 180, 9), // "clockDraw"
QT_MOC_LITERAL(11, 190, 12), // "clockSerials"
QT_MOC_LITERAL(12, 203, 17), // "clockExistingData"
QT_MOC_LITERAL(13, 221, 17), // "on_stopDB_clicked"
QT_MOC_LITERAL(14, 239, 29), // "on_clickTheSettings_triggered"
QT_MOC_LITERAL(15, 269, 25), // "on_openBFrequency_clicked"
QT_MOC_LITERAL(16, 295, 26), // "on_closeBFrequency_clicked"
QT_MOC_LITERAL(17, 322, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(18, 344, 32), // "on_comSeries_currentIndexChanged"
QT_MOC_LITERAL(19, 377, 5), // "index"
QT_MOC_LITERAL(20, 383, 23) // "on_pushButton_2_clicked"

    },
    "MainWindow\0serialRecieve\0\0"
    "on_openBForce_clicked\0on_openBLength_clicked\0"
    "on_closeBForce_clicked\0on_closeBLength_clicked\0"
    "on_drawB_clicked\0on_radioNew_clicked\0"
    "on_radioExisting_clicked\0clockDraw\0"
    "clockSerials\0clockExistingData\0"
    "on_stopDB_clicked\0on_clickTheSettings_triggered\0"
    "on_openBFrequency_clicked\0"
    "on_closeBFrequency_clicked\0"
    "on_pushButton_clicked\0"
    "on_comSeries_currentIndexChanged\0index\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    1,  120,    2, 0x08 /* Private */,
      20,    0,  123,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serialRecieve(); break;
        case 1: _t->on_openBForce_clicked(); break;
        case 2: _t->on_openBLength_clicked(); break;
        case 3: _t->on_closeBForce_clicked(); break;
        case 4: _t->on_closeBLength_clicked(); break;
        case 5: _t->on_drawB_clicked(); break;
        case 6: _t->on_radioNew_clicked(); break;
        case 7: _t->on_radioExisting_clicked(); break;
        case 8: _t->clockDraw(); break;
        case 9: _t->clockSerials(); break;
        case 10: _t->clockExistingData(); break;
        case 11: _t->on_stopDB_clicked(); break;
        case 12: _t->on_clickTheSettings_triggered(); break;
        case 13: _t->on_openBFrequency_clicked(); break;
        case 14: _t->on_closeBFrequency_clicked(); break;
        case 15: _t->on_pushButton_clicked(); break;
        case 16: _t->on_comSeries_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_pushButton_2_clicked(); break;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
