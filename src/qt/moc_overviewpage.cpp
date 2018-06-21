/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[22];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OverviewPage"
QT_MOC_LITERAL(1, 13, 18), // "transactionClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 45, 5), // "index"
QT_MOC_LITERAL(5, 51, 10), // "setBalance"
QT_MOC_LITERAL(6, 62, 7), // "CAmount"
QT_MOC_LITERAL(7, 70, 7), // "balance"
QT_MOC_LITERAL(8, 78, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(9, 97, 15), // "immatureBalance"
QT_MOC_LITERAL(10, 113, 15), // "zerocoinBalance"
QT_MOC_LITERAL(11, 129, 26), // "unconfirmedZerocoinBalance"
QT_MOC_LITERAL(12, 156, 23), // "immatureZerocoinBalance"
QT_MOC_LITERAL(13, 180, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(14, 197, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(15, 216, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(16, 237, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(17, 255, 24), // "handleTransactionClicked"
QT_MOC_LITERAL(18, 280, 12), // "updateAlerts"
QT_MOC_LITERAL(19, 293, 8), // "warnings"
QT_MOC_LITERAL(20, 302, 21), // "updateWatchOnlyLabels"
QT_MOC_LITERAL(21, 324, 13) // "showWatchOnly"

    },
    "OverviewPage\0transactionClicked\0\0"
    "QModelIndex\0index\0setBalance\0CAmount\0"
    "balance\0unconfirmedBalance\0immatureBalance\0"
    "zerocoinBalance\0unconfirmedZerocoinBalance\0"
    "immatureZerocoinBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "updateDisplayUnit\0handleTransactionClicked\0"
    "updateAlerts\0warnings\0updateWatchOnlyLabels\0"
    "showWatchOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    9,   47,    2, 0x0a /* Public */,
      16,    0,   66,    2, 0x08 /* Private */,
      17,    1,   67,    2, 0x08 /* Private */,
      18,    1,   70,    2, 0x08 /* Private */,
      20,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Bool,   21,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7])),(*reinterpret_cast< const CAmount(*)>(_a[8])),(*reinterpret_cast< const CAmount(*)>(_a[9]))); break;
        case 2: _t->updateDisplayUnit(); break;
        case 3: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OverviewPage::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::transactionClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage.data,
      qt_meta_data_OverviewPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
