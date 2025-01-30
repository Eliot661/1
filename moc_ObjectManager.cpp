/****************************************************************************
** Meta object code from reading C++ file 'ObjectManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ObjectManager.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSObjectManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSObjectManagerENDCLASS = QtMocHelpers::stringData(
    "ObjectManager",
    "setCylinderObjects",
    "",
    "setTubesObjects",
    "setUndercutsObjects",
    "setMaxilaryObjects",
    "setMandibularyObjects"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSObjectManagerENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[20];
    char stringdata5[19];
    char stringdata6[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSObjectManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSObjectManagerENDCLASS_t qt_meta_stringdata_CLASSObjectManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ObjectManager"
        QT_MOC_LITERAL(14, 18),  // "setCylinderObjects"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 15),  // "setTubesObjects"
        QT_MOC_LITERAL(50, 19),  // "setUndercutsObjects"
        QT_MOC_LITERAL(70, 18),  // "setMaxilaryObjects"
        QT_MOC_LITERAL(89, 21)   // "setMandibularyObjects"
    },
    "ObjectManager",
    "setCylinderObjects",
    "",
    "setTubesObjects",
    "setUndercutsObjects",
    "setMaxilaryObjects",
    "setMandibularyObjects"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSObjectManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x02,    1 /* Public */,
       3,    0,   45,    2, 0x02,    2 /* Public */,
       4,    0,   46,    2, 0x02,    3 /* Public */,
       5,    0,   47,    2, 0x02,    4 /* Public */,
       6,    0,   48,    2, 0x02,    5 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ObjectManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSObjectManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSObjectManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSObjectManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ObjectManager, std::true_type>,
        // method 'setCylinderObjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTubesObjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setUndercutsObjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMaxilaryObjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMandibularyObjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ObjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCylinderObjects(); break;
        case 1: _t->setTubesObjects(); break;
        case 2: _t->setUndercutsObjects(); break;
        case 3: _t->setMaxilaryObjects(); break;
        case 4: _t->setMandibularyObjects(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ObjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSObjectManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ObjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
