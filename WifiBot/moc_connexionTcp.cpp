/****************************************************************************
** Meta object code from reading C++ file 'connexionTcp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "connexionTcp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connexionTcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_connexionTcp_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_connexionTcp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_connexionTcp_t qt_meta_stringdata_connexionTcp = {
    {
QT_MOC_LITERAL(0, 0, 12), // "connexionTcp"
QT_MOC_LITERAL(1, 13, 14), // "CapteursValues"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "Capteurs"
QT_MOC_LITERAL(4, 38, 1), // "s"
QT_MOC_LITERAL(5, 40, 9), // "connexion"
QT_MOC_LITERAL(6, 50, 12), // "disconnexion"
QT_MOC_LITERAL(7, 63, 16), // "refreshConnexion"
QT_MOC_LITERAL(8, 80, 11) // "handleError"

    },
    "connexionTcp\0CapteursValues\0\0Capteurs\0"
    "s\0connexion\0disconnexion\0refreshConnexion\0"
    "handleError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_connexionTcp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void connexionTcp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        connexionTcp *_t = static_cast<connexionTcp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CapteursValues((*reinterpret_cast< Capteurs(*)>(_a[1]))); break;
        case 1: _t->connexion(); break;
        case 2: _t->disconnexion(); break;
        case 3: _t->refreshConnexion(); break;
        case 4: _t->handleError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (connexionTcp::*_t)(Capteurs );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connexionTcp::CapteursValues)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject connexionTcp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_connexionTcp.data,
      qt_meta_data_connexionTcp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *connexionTcp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *connexionTcp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_connexionTcp.stringdata0))
        return static_cast<void*>(const_cast< connexionTcp*>(this));
    return QObject::qt_metacast(_clname);
}

int connexionTcp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void connexionTcp::CapteursValues(Capteurs _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
