/****************************************************************************
** Meta object code from reading C++ file 'tperson.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../sample3_1/tperson.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tperson.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TPerson_t {
    const uint offsetsAndSize[22];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TPerson_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TPerson_t qt_meta_stringdata_TPerson = {
    {
QT_MOC_LITERAL(0, 7), // "TPerson"
QT_MOC_LITERAL(8, 6), // "author"
QT_MOC_LITERAL(15, 4), // "Frsh"
QT_MOC_LITERAL(20, 7), // "version"
QT_MOC_LITERAL(28, 3), // "1.0"
QT_MOC_LITERAL(32, 10), // "ageChanged"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 8), // "ageValue"
QT_MOC_LITERAL(53, 6), // "getAge"
QT_MOC_LITERAL(60, 4), // "name"
QT_MOC_LITERAL(65, 5) // "score"

    },
    "TPerson\0author\0Frsh\0version\0""1.0\0"
    "ageChanged\0\0ageValue\0getAge\0name\0score"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TPerson[] = {

 // content:
      10,       // revision
       0,       // classname
       2,   14, // classinfo
       1,   18, // methods
       3,   27, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   24,    6, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
       8, QMetaType::SChar, 0x00015003, uint(0), 0,
       9, QMetaType::QString, 0x00015003, uint(-1), 0,
      10, QMetaType::SChar, 0x00015003, uint(-1), 0,

       0        // eod
};

void TPerson::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TPerson *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ageChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TPerson::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TPerson::ageChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TPerson *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint8*>(_v) = _t->getAge(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->m_Name; break;
        case 2: *reinterpret_cast< qint8*>(_v) = _t->m_Score; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TPerson *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAge(*reinterpret_cast< qint8*>(_v)); break;
        case 1:
            if (_t->m_Name != *reinterpret_cast< QString*>(_v)) {
                _t->m_Name = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->m_Score != *reinterpret_cast< qint8*>(_v)) {
                _t->m_Score = *reinterpret_cast< qint8*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TPerson::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TPerson.offsetsAndSize,
    qt_meta_data_TPerson,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TPerson_t
, QtPrivate::TypeAndForceComplete<qint8, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<qint8, std::true_type>, QtPrivate::TypeAndForceComplete<TPerson, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *TPerson::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TPerson::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TPerson.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TPerson::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TPerson::ageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
