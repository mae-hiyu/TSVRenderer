/****************************************************************************
** Meta object code from reading C++ file 'renderer_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../source/reflect_core/RendererBase/renderer_manager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renderer_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_reflect__RendererManager_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_reflect__RendererManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_reflect__RendererManager_t qt_meta_stringdata_reflect__RendererManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "reflect::RendererManager"
QT_MOC_LITERAL(1, 25, 10), // "outputText"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "text"
QT_MOC_LITERAL(4, 42, 11), // "outputImage"
QT_MOC_LITERAL(5, 54, 5), // "image"
QT_MOC_LITERAL(6, 60, 17), // "finishedRendering"
QT_MOC_LITERAL(7, 78, 15) // "finishRendering"

    },
    "reflect::RendererManager\0outputText\0"
    "\0text\0outputImage\0image\0finishedRendering\0"
    "finishRendering"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_reflect__RendererManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void reflect::RendererManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RendererManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->outputText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->outputImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 2: _t->finishedRendering(); break;
        case 3: _t->finishRendering(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RendererManager::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RendererManager::outputText)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RendererManager::*)(const QImage & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RendererManager::outputImage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RendererManager::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RendererManager::finishedRendering)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject reflect::RendererManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_reflect__RendererManager.data,
    qt_meta_data_reflect__RendererManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *reflect::RendererManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *reflect::RendererManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_reflect__RendererManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int reflect::RendererManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void reflect::RendererManager::outputText(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< reflect::RendererManager *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void reflect::RendererManager::outputImage(const QImage & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< reflect::RendererManager *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void reflect::RendererManager::finishedRendering()const
{
    QMetaObject::activate(const_cast< reflect::RendererManager *>(this), &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
