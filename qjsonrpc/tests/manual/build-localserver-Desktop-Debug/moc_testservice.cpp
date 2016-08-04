/****************************************************************************
** Meta object code from reading C++ file 'testservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../localserver/testservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TestService_t {
    QByteArrayData data[14];
    char stringdata[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestService_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestService_t qt_meta_stringdata_TestService = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TestService"
QT_MOC_LITERAL(1, 12, 11), // "serviceName"
QT_MOC_LITERAL(2, 24, 5), // "agent"
QT_MOC_LITERAL(3, 30, 10), // "testMethod"
QT_MOC_LITERAL(4, 41, 0), // ""
QT_MOC_LITERAL(5, 42, 20), // "testMethodWithParams"
QT_MOC_LITERAL(6, 63, 5), // "first"
QT_MOC_LITERAL(7, 69, 6), // "second"
QT_MOC_LITERAL(8, 76, 5), // "third"
QT_MOC_LITERAL(9, 82, 27), // "testMethodWithVariantParams"
QT_MOC_LITERAL(10, 110, 6), // "fourth"
QT_MOC_LITERAL(11, 117, 34), // "testMethodWithParamsAndReturn..."
QT_MOC_LITERAL(12, 152, 4), // "name"
QT_MOC_LITERAL(13, 157, 30) // "testMethodWithDefaultParameter"

    },
    "TestService\0serviceName\0agent\0testMethod\0"
    "\0testMethodWithParams\0first\0second\0"
    "third\0testMethodWithVariantParams\0"
    "fourth\0testMethodWithParamsAndReturnValue\0"
    "name\0testMethodWithDefaultParameter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestService[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    0,   46,    4, 0x0a /* Public */,
       5,    3,   47,    4, 0x0a /* Public */,
       9,    4,   54,    4, 0x0a /* Public */,
      11,    1,   63,    4, 0x0a /* Public */,
      13,    2,   66,    4, 0x0a /* Public */,
      13,    1,   71,    4, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Double,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Double, QMetaType::QVariant,    6,    7,    8,   10,
    QMetaType::QString, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void TestService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestService *_t = static_cast<TestService *>(_o);
        switch (_id) {
        case 0: _t->testMethod(); break;
        case 1: _t->testMethodWithParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->testMethodWithVariantParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 3: { QString _r = _t->testMethodWithParamsAndReturnValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->testMethodWithDefaultParameter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->testMethodWithDefaultParameter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TestService::staticMetaObject = {
    { &QJsonRpcService::staticMetaObject, qt_meta_stringdata_TestService.data,
      qt_meta_data_TestService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestService.stringdata))
        return static_cast<void*>(const_cast< TestService*>(this));
    return QJsonRpcService::qt_metacast(_clname);
}

int TestService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QJsonRpcService::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
