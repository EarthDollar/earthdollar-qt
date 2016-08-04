/****************************************************************************
** Meta object code from reading C++ file 'qjsonrpclocalserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qjsonrpclocalserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjsonrpclocalserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QJsonRpcLocalServer_t {
    QByteArrayData data[11];
    char stringdata[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QJsonRpcLocalServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QJsonRpcLocalServer_t qt_meta_stringdata_QJsonRpcLocalServer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QJsonRpcLocalServer"
QT_MOC_LITERAL(1, 20, 15), // "clientConnected"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "clientDisconnected"
QT_MOC_LITERAL(4, 56, 22), // "notifyConnectedClients"
QT_MOC_LITERAL(5, 79, 15), // "QJsonRpcMessage"
QT_MOC_LITERAL(6, 95, 7), // "message"
QT_MOC_LITERAL(7, 103, 6), // "method"
QT_MOC_LITERAL(8, 110, 6), // "params"
QT_MOC_LITERAL(9, 117, 21), // "_q_clientDisconnected"
QT_MOC_LITERAL(10, 139, 17) // "_q_processMessage"

    },
    "QJsonRpcLocalServer\0clientConnected\0"
    "\0clientDisconnected\0notifyConnectedClients\0"
    "QJsonRpcMessage\0message\0method\0params\0"
    "_q_clientDisconnected\0_q_processMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QJsonRpcLocalServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x0a /* Public */,
       4,    2,   49,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonArray,    7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void QJsonRpcLocalServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QJsonRpcLocalServer *_t = static_cast<QJsonRpcLocalServer *>(_o);
        switch (_id) {
        case 0: _t->clientConnected(); break;
        case 1: _t->clientDisconnected(); break;
        case 2: _t->notifyConnectedClients((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1]))); break;
        case 3: _t->notifyConnectedClients((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonArray(*)>(_a[2]))); break;
        case 4: _t->_q_clientDisconnected(); break;
        case 5: _t->_q_processMessage((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QJsonRpcLocalServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QJsonRpcLocalServer::clientConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (QJsonRpcLocalServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QJsonRpcLocalServer::clientDisconnected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QJsonRpcLocalServer::staticMetaObject = {
    { &QLocalServer::staticMetaObject, qt_meta_stringdata_QJsonRpcLocalServer.data,
      qt_meta_data_QJsonRpcLocalServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QJsonRpcLocalServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJsonRpcLocalServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QJsonRpcLocalServer.stringdata))
        return static_cast<void*>(const_cast< QJsonRpcLocalServer*>(this));
    if (!strcmp(_clname, "QJsonRpcAbstractServer"))
        return static_cast< QJsonRpcAbstractServer*>(const_cast< QJsonRpcLocalServer*>(this));
    return QLocalServer::qt_metacast(_clname);
}

int QJsonRpcLocalServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLocalServer::qt_metacall(_c, _id, _a);
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
void QJsonRpcLocalServer::clientConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QJsonRpcLocalServer::clientDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
