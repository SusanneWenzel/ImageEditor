/****************************************************************************
** Meta object code from reading C++ file 'EditablePolygonItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../layer/EditablePolygonItem.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditablePolygonItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_EditablePolygonItem_t {
    uint offsetsAndSizes[22];
    char stringdata0[20];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[5];
    char stringdata5[3];
    char stringdata6[19];
    char stringdata7[9];
    char stringdata8[19];
    char stringdata9[15];
    char stringdata10[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_EditablePolygonItem_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_EditablePolygonItem_t qt_meta_stringdata_EditablePolygonItem = {
    {
        QT_MOC_LITERAL(0, 19),  // "EditablePolygonItem"
        QT_MOC_LITERAL(20, 16),  // "requestMovePoint"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 3),  // "idx"
        QT_MOC_LITERAL(42, 4),  // "from"
        QT_MOC_LITERAL(47, 2),  // "to"
        QT_MOC_LITERAL(50, 18),  // "requestInsertPoint"
        QT_MOC_LITERAL(69, 8),  // "scenePos"
        QT_MOC_LITERAL(78, 18),  // "requestRemovePoint"
        QT_MOC_LITERAL(97, 14),  // "updateGeometry"
        QT_MOC_LITERAL(112, 19)   // "onVisibilityChanged"
    },
    "EditablePolygonItem",
    "requestMovePoint",
    "",
    "idx",
    "from",
    "to",
    "requestInsertPoint",
    "scenePos",
    "requestRemovePoint",
    "updateGeometry",
    "onVisibilityChanged"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_EditablePolygonItem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   44,    2, 0x06,    1 /* Public */,
       6,    2,   51,    2, 0x06,    5 /* Public */,
       8,    1,   56,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   59,    2, 0x08,   10 /* Private */,
      10,    0,   60,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF, QMetaType::QPointF,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,    3,    7,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject EditablePolygonItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsObject::staticMetaObject>(),
    qt_meta_stringdata_EditablePolygonItem.offsetsAndSizes,
    qt_meta_data_EditablePolygonItem,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_EditablePolygonItem_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditablePolygonItem, std::true_type>,
        // method 'requestMovePoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        // method 'requestInsertPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        // method 'requestRemovePoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateGeometry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVisibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void EditablePolygonItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditablePolygonItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestMovePoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[3]))); break;
        case 1: _t->requestInsertPoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 2: _t->requestRemovePoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->updateGeometry(); break;
        case 4: _t->onVisibilityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditablePolygonItem::*)(int , const QPointF & , const QPointF & );
            if (_t _q_method = &EditablePolygonItem::requestMovePoint; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EditablePolygonItem::*)(int , const QPointF & );
            if (_t _q_method = &EditablePolygonItem::requestInsertPoint; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EditablePolygonItem::*)(int );
            if (_t _q_method = &EditablePolygonItem::requestRemovePoint; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *EditablePolygonItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditablePolygonItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditablePolygonItem.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int EditablePolygonItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void EditablePolygonItem::requestMovePoint(int _t1, const QPointF & _t2, const QPointF & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EditablePolygonItem::requestInsertPoint(int _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EditablePolygonItem::requestRemovePoint(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
