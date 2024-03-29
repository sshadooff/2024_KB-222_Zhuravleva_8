/****************************************************************************
** Meta object code from reading C++ file 'fitnessinctructor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../fitnessinctructor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fitnessinctructor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FitnessInctructor_t {
    QByteArrayData data[13];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FitnessInctructor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FitnessInctructor_t qt_meta_stringdata_FitnessInctructor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FitnessInctructor"
QT_MOC_LITERAL(1, 18, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "on_nextButton_clicked"
QT_MOC_LITERAL(4, 64, 12), // "days_clicked"
QT_MOC_LITERAL(5, 77, 8), // "dayIndex"
QT_MOC_LITERAL(6, 86, 12), // "back_clicked"
QT_MOC_LITERAL(7, 99, 14), // "click_complete"
QT_MOC_LITERAL(8, 114, 12), // "QPushButton*"
QT_MOC_LITERAL(9, 127, 14), // "completeButton"
QT_MOC_LITERAL(10, 142, 11), // "clickButton"
QT_MOC_LITERAL(11, 154, 15), // "progress_update"
QT_MOC_LITERAL(12, 170, 16) // "on_reset_clicked"

    },
    "FitnessInctructor\0on_startButton_clicked\0"
    "\0on_nextButton_clicked\0days_clicked\0"
    "dayIndex\0back_clicked\0click_complete\0"
    "QPushButton*\0completeButton\0clickButton\0"
    "progress_update\0on_reset_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FitnessInctructor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    2,   55,    2, 0x08 /* Private */,
      11,    0,   60,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FitnessInctructor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FitnessInctructor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_startButton_clicked(); break;
        case 1: _t->on_nextButton_clicked(); break;
        case 2: _t->days_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->back_clicked(); break;
        case 4: _t->click_complete((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< QPushButton*(*)>(_a[2]))); break;
        case 5: _t->progress_update(); break;
        case 6: _t->on_reset_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPushButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FitnessInctructor::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FitnessInctructor.data,
    qt_meta_data_FitnessInctructor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FitnessInctructor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FitnessInctructor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FitnessInctructor.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FitnessInctructor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
