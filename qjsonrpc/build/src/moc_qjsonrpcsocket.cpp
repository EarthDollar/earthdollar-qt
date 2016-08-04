/****************************************************************************
** Meta object code from reading C++ file 'qjsonrpcsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qjsonrpcsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjsonrpcsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QJsonRpcAbstractSocket_t {
    QByteArrayData data[23];
    char stringdata[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QJsonRpcAbstractSocket_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QJsonRpcAbstractSocket_t qt_meta_stringdata_QJsonRpcAbstractSocket = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QJsonRpcAbstractSocket"
QT_MOC_LITERAL(1, 23, 15), // "messageReceived"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "QJsonRpcMessage"
QT_MOC_LITERAL(4, 56, 7), // "message"
QT_MOC_LITERAL(5, 64, 6), // "notify"
QT_MOC_LITERAL(6, 71, 19), // "sendMessageBlocking"
QT_MOC_LITERAL(7, 91, 5), // "msecs"
QT_MOC_LITERAL(8, 97, 11), // "sendMessage"
QT_MOC_LITERAL(9, 109, 21), // "QJsonRpcServiceReply*"
QT_MOC_LITERAL(10, 131, 26), // "invokeRemoteMethodBlocking"
QT_MOC_LITERAL(11, 158, 6), // "method"
QT_MOC_LITERAL(12, 165, 4), // "arg1"
QT_MOC_LITERAL(13, 170, 4), // "arg2"
QT_MOC_LITERAL(14, 175, 4), // "arg3"
QT_MOC_LITERAL(15, 180, 4), // "arg4"
QT_MOC_LITERAL(16, 185, 4), // "arg5"
QT_MOC_LITERAL(17, 190, 4), // "arg6"
QT_MOC_LITERAL(18, 195, 4), // "arg7"
QT_MOC_LITERAL(19, 200, 4), // "arg8"
QT_MOC_LITERAL(20, 205, 4), // "arg9"
QT_MOC_LITERAL(21, 210, 5), // "arg10"
QT_MOC_LITERAL(22, 216, 18) // "invokeRemoteMethod"

    },
    "QJsonRpcAbstractSocket\0messageReceived\0"
    "\0QJsonRpcMessage\0message\0notify\0"
    "sendMessageBlocking\0msecs\0sendMessage\0"
    "QJsonRpcServiceReply*\0invokeRemoteMethodBlocking\0"
    "method\0arg1\0arg2\0arg3\0arg4\0arg5\0arg6\0"
    "arg7\0arg8\0arg9\0arg10\0invokeRemoteMethod"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QJsonRpcAbstractSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  204,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  207,    2, 0x0a /* Public */,
       6,    2,  210,    2, 0x0a /* Public */,
       6,    1,  215,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  218,    2, 0x0a /* Public */,
      10,   12,  221,    2, 0x0a /* Public */,
      10,   11,  246,    2, 0x2a /* Public | MethodCloned */,
      10,   10,  269,    2, 0x2a /* Public | MethodCloned */,
      10,    9,  290,    2, 0x2a /* Public | MethodCloned */,
      10,    8,  309,    2, 0x2a /* Public | MethodCloned */,
      10,    7,  326,    2, 0x2a /* Public | MethodCloned */,
      10,    6,  341,    2, 0x2a /* Public | MethodCloned */,
      10,    5,  354,    2, 0x2a /* Public | MethodCloned */,
      10,    4,  365,    2, 0x2a /* Public | MethodCloned */,
      10,    3,  374,    2, 0x2a /* Public | MethodCloned */,
      10,    2,  381,    2, 0x2a /* Public | MethodCloned */,
      10,   11,  386,    2, 0x0a /* Public */,
      10,   10,  409,    2, 0x2a /* Public | MethodCloned */,
      10,    9,  430,    2, 0x2a /* Public | MethodCloned */,
      10,    8,  449,    2, 0x2a /* Public | MethodCloned */,
      10,    7,  466,    2, 0x2a /* Public | MethodCloned */,
      10,    6,  481,    2, 0x2a /* Public | MethodCloned */,
      10,    5,  494,    2, 0x2a /* Public | MethodCloned */,
      10,    4,  505,    2, 0x2a /* Public | MethodCloned */,
      10,    3,  514,    2, 0x2a /* Public | MethodCloned */,
      10,    2,  521,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  526,    2, 0x2a /* Public | MethodCloned */,
      22,   11,  529,    2, 0x0a /* Public */,
      22,   10,  552,    2, 0x2a /* Public | MethodCloned */,
      22,    9,  573,    2, 0x2a /* Public | MethodCloned */,
      22,    8,  592,    2, 0x2a /* Public | MethodCloned */,
      22,    7,  609,    2, 0x2a /* Public | MethodCloned */,
      22,    6,  624,    2, 0x2a /* Public | MethodCloned */,
      22,    5,  637,    2, 0x2a /* Public | MethodCloned */,
      22,    4,  648,    2, 0x2a /* Public | MethodCloned */,
      22,    3,  657,    2, 0x2a /* Public | MethodCloned */,
      22,    2,  664,    2, 0x2a /* Public | MethodCloned */,
      22,    1,  669,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    7,
    0x80000000 | 3, 0x80000000 | 3,    4,
    0x80000000 | 9, 0x80000000 | 3,    4,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,    7,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,    7,   12,   13,   14,   15,   16,   17,   18,   19,   20,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,    7,   12,   13,   14,   15,   16,   17,   18,   19,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,    7,   12,   13,   14,   15,   16,   17,   18,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,    7,   12,   13,   14,   15,   16,   17,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,    7,   12,   13,   14,   15,   16,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,    7,   12,   13,   14,   15,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,    7,   12,   13,   14,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant,   11,    7,   12,   13,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant,   11,    7,   12,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int,   11,    7,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,   18,   19,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,   18,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,   11,   12,
    0x80000000 | 3, QMetaType::QString,   11,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,   18,   19,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,   18,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,   17,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,   16,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,   15,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,   14,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant,   11,   12,   13,
    0x80000000 | 9, QMetaType::QString, QMetaType::QVariant,   11,   12,
    0x80000000 | 9, QMetaType::QString,   11,

       0        // eod
};

void QJsonRpcAbstractSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QJsonRpcAbstractSocket *_t = static_cast<QJsonRpcAbstractSocket *>(_o);
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1]))); break;
        case 1: _t->notify((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1]))); break;
        case 2: { QJsonRpcMessage _r = _t->sendMessageBlocking((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 3: { QJsonRpcMessage _r = _t->sendMessageBlocking((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 4: { QJsonRpcServiceReply* _r = _t->sendMessage((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 5: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])),(*reinterpret_cast< const QVariant(*)>(_a[11])),(*reinterpret_cast< const QVariant(*)>(_a[12])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 6: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])),(*reinterpret_cast< const QVariant(*)>(_a[11])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 7: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 8: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 9: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 10: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 11: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 12: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 13: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 14: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 15: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 16: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])),(*reinterpret_cast< const QVariant(*)>(_a[11])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 17: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 18: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 19: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 20: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 21: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 22: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 23: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 24: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 25: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 26: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 27: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])),(*reinterpret_cast< const QVariant(*)>(_a[11])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 28: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 29: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 30: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 31: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 32: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 33: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 34: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 35: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 36: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 37: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJsonRpcMessage >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJsonRpcMessage >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJsonRpcMessage >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJsonRpcMessage >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJsonRpcMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QJsonRpcAbstractSocket::*_t)(const QJsonRpcMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QJsonRpcAbstractSocket::messageReceived)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QJsonRpcAbstractSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJsonRpcAbstractSocket.data,
      qt_meta_data_QJsonRpcAbstractSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QJsonRpcAbstractSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJsonRpcAbstractSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QJsonRpcAbstractSocket.stringdata))
        return static_cast<void*>(const_cast< QJsonRpcAbstractSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int QJsonRpcAbstractSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void QJsonRpcAbstractSocket::messageReceived(const QJsonRpcMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QJsonRpcSocket_t {
    QByteArrayData data[23];
    char stringdata[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QJsonRpcSocket_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QJsonRpcSocket_t qt_meta_stringdata_QJsonRpcSocket = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QJsonRpcSocket"
QT_MOC_LITERAL(1, 15, 6), // "notify"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "QJsonRpcMessage"
QT_MOC_LITERAL(4, 39, 7), // "message"
QT_MOC_LITERAL(5, 47, 19), // "sendMessageBlocking"
QT_MOC_LITERAL(6, 67, 5), // "msecs"
QT_MOC_LITERAL(7, 73, 11), // "sendMessage"
QT_MOC_LITERAL(8, 85, 21), // "QJsonRpcServiceReply*"
QT_MOC_LITERAL(9, 107, 26), // "invokeRemoteMethodBlocking"
QT_MOC_LITERAL(10, 134, 6), // "method"
QT_MOC_LITERAL(11, 141, 4), // "arg1"
QT_MOC_LITERAL(12, 146, 4), // "arg2"
QT_MOC_LITERAL(13, 151, 4), // "arg3"
QT_MOC_LITERAL(14, 156, 4), // "arg4"
QT_MOC_LITERAL(15, 161, 4), // "arg5"
QT_MOC_LITERAL(16, 166, 4), // "arg6"
QT_MOC_LITERAL(17, 171, 4), // "arg7"
QT_MOC_LITERAL(18, 176, 4), // "arg8"
QT_MOC_LITERAL(19, 181, 4), // "arg9"
QT_MOC_LITERAL(20, 186, 5), // "arg10"
QT_MOC_LITERAL(21, 192, 18), // "invokeRemoteMethod"
QT_MOC_LITERAL(22, 211, 22) // "_q_processIncomingData"

    },
    "QJsonRpcSocket\0notify\0\0QJsonRpcMessage\0"
    "message\0sendMessageBlocking\0msecs\0"
    "sendMessage\0QJsonRpcServiceReply*\0"
    "invokeRemoteMethodBlocking\0method\0"
    "arg1\0arg2\0arg3\0arg4\0arg5\0arg6\0arg7\0"
    "arg8\0arg9\0arg10\0invokeRemoteMethod\0"
    "_q_processIncomingData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QJsonRpcSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  204,    2, 0x0a /* Public */,
       5,    2,  207,    2, 0x0a /* Public */,
       5,    1,  212,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  215,    2, 0x0a /* Public */,
       9,   12,  218,    2, 0x0a /* Public */,
       9,   11,  243,    2, 0x2a /* Public | MethodCloned */,
       9,   10,  266,    2, 0x2a /* Public | MethodCloned */,
       9,    9,  287,    2, 0x2a /* Public | MethodCloned */,
       9,    8,  306,    2, 0x2a /* Public | MethodCloned */,
       9,    7,  323,    2, 0x2a /* Public | MethodCloned */,
       9,    6,  338,    2, 0x2a /* Public | MethodCloned */,
       9,    5,  351,    2, 0x2a /* Public | MethodCloned */,
       9,    4,  362,    2, 0x2a /* Public | MethodCloned */,
       9,    3,  371,    2, 0x2a /* Public | MethodCloned */,
       9,    2,  378,    2, 0x2a /* Public | MethodCloned */,
       9,   11,  383,    2, 0x0a /* Public */,
       9,   10,  406,    2, 0x2a /* Public | MethodCloned */,
       9,    9,  427,    2, 0x2a /* Public | MethodCloned */,
       9,    8,  446,    2, 0x2a /* Public | MethodCloned */,
       9,    7,  463,    2, 0x2a /* Public | MethodCloned */,
       9,    6,  478,    2, 0x2a /* Public | MethodCloned */,
       9,    5,  491,    2, 0x2a /* Public | MethodCloned */,
       9,    4,  502,    2, 0x2a /* Public | MethodCloned */,
       9,    3,  511,    2, 0x2a /* Public | MethodCloned */,
       9,    2,  518,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  523,    2, 0x2a /* Public | MethodCloned */,
      21,   11,  526,    2, 0x0a /* Public */,
      21,   10,  549,    2, 0x2a /* Public | MethodCloned */,
      21,    9,  570,    2, 0x2a /* Public | MethodCloned */,
      21,    8,  589,    2, 0x2a /* Public | MethodCloned */,
      21,    7,  606,    2, 0x2a /* Public | MethodCloned */,
      21,    6,  621,    2, 0x2a /* Public | MethodCloned */,
      21,    5,  634,    2, 0x2a /* Public | MethodCloned */,
      21,    4,  645,    2, 0x2a /* Public | MethodCloned */,
      21,    3,  654,    2, 0x2a /* Public | MethodCloned */,
      21,    2,  661,    2, 0x2a /* Public | MethodCloned */,
      21,    1,  666,    2, 0x2a /* Public | MethodCloned */,
      22,    0,  669,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    6,
    0x80000000 | 3, 0x80000000 | 3,    4,
    0x80000000 | 8, 0x80000000 | 3,    4,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,    6,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,    6,   11,   12,   13,   14,   15,   16,   17,   18,   19,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,    6,   11,   12,   13,   14,   15,   16,   17,   18,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,    6,   11,   12,   13,   14,   15,   16,   17,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,    6,   11,   12,   13,   14,   15,   16,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,    6,   11,   12,   13,   14,   15,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,    6,   11,   12,   13,   14,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,    6,   11,   12,   13,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant,   10,    6,   11,   12,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::QVariant,   10,    6,   11,
    0x80000000 | 3, QMetaType::QString, QMetaType::Int,   10,    6,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,   17,   18,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,   17,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,   10,   11,
    0x80000000 | 3, QMetaType::QString,   10,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,   17,   18,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,   17,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,   16,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,   15,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,   14,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,   13,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant, QMetaType::QVariant,   10,   11,   12,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariant,   10,   11,
    0x80000000 | 8, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void QJsonRpcSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QJsonRpcSocket *_t = static_cast<QJsonRpcSocket *>(_o);
        switch (_id) {
        case 0: _t->notify((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1]))); break;
        case 1: { QJsonRpcMessage _r = _t->sendMessageBlocking((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 2: { QJsonRpcMessage _r = _t->sendMessageBlocking((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 3: { QJsonRpcServiceReply* _r = _t->sendMessage((*reinterpret_cast< const QJsonRpcMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 4: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])),(*reinterpret_cast< const QVariant(*)>(_a[11])),(*reinterpret_cast< const QVariant(*)>(_a[12])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 5: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])),(*reinterpret_cast< const QVariant(*)>(_a[11])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 6: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 7: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 8: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 9: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 10: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 11: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 12: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 13: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 14: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 15: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])),(*reinterpret_cast< const QVariant(*)>(_a[11])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 16: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 17: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 18: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 19: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 20: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 21: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 22: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 23: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 24: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 25: { QJsonRpcMessage _r = _t->invokeRemoteMethodBlocking((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonRpcMessage*>(_a[0]) = _r; }  break;
        case 26: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])),(*reinterpret_cast< const QVariant(*)>(_a[11])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 27: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])),(*reinterpret_cast< const QVariant(*)>(_a[10])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 28: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])),(*reinterpret_cast< const QVariant(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 29: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 30: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 31: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 32: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 33: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 34: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 35: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 36: { QJsonRpcServiceReply* _r = _t->invokeRemoteMethod((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonRpcServiceReply**>(_a[0]) = _r; }  break;
        case 37: _t->d_func()->_q_processIncomingData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJsonRpcMessage >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJsonRpcMessage >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJsonRpcMessage >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJsonRpcMessage >(); break;
            }
            break;
        }
    }
}

const QMetaObject QJsonRpcSocket::staticMetaObject = {
    { &QJsonRpcAbstractSocket::staticMetaObject, qt_meta_stringdata_QJsonRpcSocket.data,
      qt_meta_data_QJsonRpcSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QJsonRpcSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJsonRpcSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QJsonRpcSocket.stringdata))
        return static_cast<void*>(const_cast< QJsonRpcSocket*>(this));
    return QJsonRpcAbstractSocket::qt_metacast(_clname);
}

int QJsonRpcSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QJsonRpcAbstractSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
struct qt_meta_stringdata_QJsonRpcServiceSocket_t {
    QByteArrayData data[1];
    char stringdata[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QJsonRpcServiceSocket_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QJsonRpcServiceSocket_t qt_meta_stringdata_QJsonRpcServiceSocket = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QJsonRpcServiceSocket"

    },
    "QJsonRpcServiceSocket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QJsonRpcServiceSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QJsonRpcServiceSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QJsonRpcServiceSocket::staticMetaObject = {
    { &QJsonRpcSocket::staticMetaObject, qt_meta_stringdata_QJsonRpcServiceSocket.data,
      qt_meta_data_QJsonRpcServiceSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QJsonRpcServiceSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJsonRpcServiceSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QJsonRpcServiceSocket.stringdata))
        return static_cast<void*>(const_cast< QJsonRpcServiceSocket*>(this));
    if (!strcmp(_clname, "QJsonRpcServiceProvider"))
        return static_cast< QJsonRpcServiceProvider*>(const_cast< QJsonRpcServiceSocket*>(this));
    return QJsonRpcSocket::qt_metacast(_clname);
}

int QJsonRpcServiceSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QJsonRpcSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
