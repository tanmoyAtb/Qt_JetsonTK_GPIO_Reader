/****************************************************************************
** Meta object code from reading C++ file 'workerbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "workerbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workerbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_workerButton_t {
    QByteArrayData data[11];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_workerButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_workerButton_t qt_meta_stringdata_workerButton = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 12),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 5),
QT_MOC_LITERAL(4, 33, 8),
QT_MOC_LITERAL(5, 42, 13),
QT_MOC_LITERAL(6, 56, 16),
QT_MOC_LITERAL(7, 73, 15),
QT_MOC_LITERAL(8, 89, 15),
QT_MOC_LITERAL(9, 105, 17),
QT_MOC_LITERAL(10, 123, 8)
    },
    "workerButton\0valueChanged\0\0value\0"
    "finished\0clickUpSignal\0clickRightSignal\0"
    "clickDownSignal\0clickLeftSignal\0"
    "clickSelectSignal\0mainLoop\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_workerButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06,
       4,    0,   57,    2, 0x06,
       5,    0,   58,    2, 0x06,
       6,    0,   59,    2, 0x06,
       7,    0,   60,    2, 0x06,
       8,    0,   61,    2, 0x06,
       9,    0,   62,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    0,   63,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void workerButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        workerButton *_t = static_cast<workerButton *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->clickUpSignal(); break;
        case 3: _t->clickRightSignal(); break;
        case 4: _t->clickDownSignal(); break;
        case 5: _t->clickLeftSignal(); break;
        case 6: _t->clickSelectSignal(); break;
        case 7: _t->mainLoop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (workerButton::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&workerButton::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (workerButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&workerButton::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (workerButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&workerButton::clickUpSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (workerButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&workerButton::clickRightSignal)) {
                *result = 3;
            }
        }
        {
            typedef void (workerButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&workerButton::clickDownSignal)) {
                *result = 4;
            }
        }
        {
            typedef void (workerButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&workerButton::clickLeftSignal)) {
                *result = 5;
            }
        }
        {
            typedef void (workerButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&workerButton::clickSelectSignal)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject workerButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_workerButton.data,
      qt_meta_data_workerButton,  qt_static_metacall, 0, 0}
};


const QMetaObject *workerButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *workerButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_workerButton.stringdata))
        return static_cast<void*>(const_cast< workerButton*>(this));
    return QObject::qt_metacast(_clname);
}

int workerButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void workerButton::valueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void workerButton::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void workerButton::clickUpSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void workerButton::clickRightSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void workerButton::clickDownSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void workerButton::clickLeftSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void workerButton::clickSelectSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
