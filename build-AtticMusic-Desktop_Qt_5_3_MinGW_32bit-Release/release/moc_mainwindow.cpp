/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AtticMusic/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 20),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 15),
QT_MOC_LITERAL(4, 49, 15),
QT_MOC_LITERAL(5, 65, 6),
QT_MOC_LITERAL(6, 72, 18),
QT_MOC_LITERAL(7, 91, 7),
QT_MOC_LITERAL(8, 99, 11),
QT_MOC_LITERAL(9, 111, 12),
QT_MOC_LITERAL(10, 124, 8),
QT_MOC_LITERAL(11, 133, 11),
QT_MOC_LITERAL(12, 145, 4),
QT_MOC_LITERAL(13, 150, 9),
QT_MOC_LITERAL(14, 160, 11),
QT_MOC_LITERAL(15, 172, 16),
QT_MOC_LITERAL(16, 189, 16),
QT_MOC_LITERAL(17, 206, 16),
QT_MOC_LITERAL(18, 223, 16),
QT_MOC_LITERAL(19, 240, 7),
QT_MOC_LITERAL(20, 248, 7),
QT_MOC_LITERAL(21, 256, 23)
    },
    "MainWindow\0on_btn_Close_clicked\0\0"
    "positionChanged\0durationChanged\0playTo\0"
    "showOrHideSongList\0checked\0importSongs\0"
    "playPrevious\0playNext\0playOrPause\0"
    "stop\0plusSound\0reduceSound\0setPlaybackMode1\0"
    "setPlaybackMode2\0setPlaybackMode3\0"
    "setPlaybackMode4\0support\0aboutUs\0"
    "setSongProgressPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    1,  110,    2, 0x08 /* Private */,
       4,    1,  113,    2, 0x08 /* Private */,
       5,    2,  116,    2, 0x08 /* Private */,
       6,    1,  121,    2, 0x08 /* Private */,
       8,    0,  124,    2, 0x08 /* Private */,
       9,    0,  125,    2, 0x08 /* Private */,
      10,    0,  126,    2, 0x08 /* Private */,
      11,    0,  127,    2, 0x08 /* Private */,
      12,    0,  128,    2, 0x08 /* Private */,
      13,    0,  129,    2, 0x08 /* Private */,
      14,    0,  130,    2, 0x08 /* Private */,
      15,    0,  131,    2, 0x08 /* Private */,
      16,    0,  132,    2, 0x08 /* Private */,
      17,    0,  133,    2, 0x08 /* Private */,
      18,    0,  134,    2, 0x08 /* Private */,
      19,    0,  135,    2, 0x08 /* Private */,
      20,    0,  136,    2, 0x08 /* Private */,
      21,    1,  137,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool,    7,
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
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_btn_Close_clicked(); break;
        case 1: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->playTo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->showOrHideSongList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->importSongs(); break;
        case 6: _t->playPrevious(); break;
        case 7: _t->playNext(); break;
        case 8: _t->playOrPause(); break;
        case 9: _t->stop(); break;
        case 10: _t->plusSound(); break;
        case 11: _t->reduceSound(); break;
        case 12: _t->setPlaybackMode1(); break;
        case 13: _t->setPlaybackMode2(); break;
        case 14: _t->setPlaybackMode3(); break;
        case 15: _t->setPlaybackMode4(); break;
        case 16: _t->support(); break;
        case 17: _t->aboutUs(); break;
        case 18: _t->setSongProgressPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
