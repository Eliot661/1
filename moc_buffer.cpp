/****************************************************************************
** Meta object code from reading C++ file 'buffer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tools/buffer.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buffer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbufferENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbufferENDCLASS = QtMocHelpers::stringData(
    "buffer",
    "getDocDir",
    "",
    "checkMeshmixerResponse",
    "mmOpened",
    "acessTokenExpired",
    "refreshAccessToken",
    "authenticateToken",
    "listObjects",
    "exportSelectedMesh",
    "std::string",
    "path",
    "exportSelectedObject",
    "importSelectedFile",
    "getCurrentName",
    "getCurrentId",
    "getCurrentIds",
    "std::vector<int>",
    "deleteAtId",
    "id",
    "setNameToId",
    "name",
    "selectAtId",
    "getLastObject",
    "getObjectsNames",
    "std::vector<std::string>",
    "convertToScale",
    "scalar",
    "acceptCommand",
    "remesh",
    "partialUpper",
    "partialLower",
    "retentionPattern",
    "retentionStampBegin",
    "retentionStampFinish",
    "retentionDelicate",
    "acceptRetention",
    "acceptRetentionDelicate",
    "cancelRetention",
    "setObjectCount",
    "retentionType",
    "borderBegin",
    "borderFinish",
    "borderCancel",
    "gingiva",
    "makeSolidHighRes",
    "connector",
    "conus",
    "fastBar",
    "gideZero",
    "smoothFull",
    "smoothHalf",
    "splint",
    "separate",
    "cadBrush",
    "frame",
    "reduce",
    "tubeFrame",
    "surgicalGuide"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSbufferENDCLASS_t {
    uint offsetsAndSizes[118];
    char stringdata0[7];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[9];
    char stringdata5[18];
    char stringdata6[19];
    char stringdata7[18];
    char stringdata8[12];
    char stringdata9[19];
    char stringdata10[12];
    char stringdata11[5];
    char stringdata12[21];
    char stringdata13[19];
    char stringdata14[15];
    char stringdata15[13];
    char stringdata16[14];
    char stringdata17[17];
    char stringdata18[11];
    char stringdata19[3];
    char stringdata20[12];
    char stringdata21[5];
    char stringdata22[11];
    char stringdata23[14];
    char stringdata24[16];
    char stringdata25[25];
    char stringdata26[15];
    char stringdata27[7];
    char stringdata28[14];
    char stringdata29[7];
    char stringdata30[13];
    char stringdata31[13];
    char stringdata32[17];
    char stringdata33[20];
    char stringdata34[21];
    char stringdata35[18];
    char stringdata36[16];
    char stringdata37[24];
    char stringdata38[16];
    char stringdata39[15];
    char stringdata40[14];
    char stringdata41[12];
    char stringdata42[13];
    char stringdata43[13];
    char stringdata44[8];
    char stringdata45[17];
    char stringdata46[10];
    char stringdata47[6];
    char stringdata48[8];
    char stringdata49[9];
    char stringdata50[11];
    char stringdata51[11];
    char stringdata52[7];
    char stringdata53[9];
    char stringdata54[9];
    char stringdata55[6];
    char stringdata56[7];
    char stringdata57[10];
    char stringdata58[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSbufferENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSbufferENDCLASS_t qt_meta_stringdata_CLASSbufferENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "buffer"
        QT_MOC_LITERAL(7, 9),  // "getDocDir"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 22),  // "checkMeshmixerResponse"
        QT_MOC_LITERAL(41, 8),  // "mmOpened"
        QT_MOC_LITERAL(50, 17),  // "acessTokenExpired"
        QT_MOC_LITERAL(68, 18),  // "refreshAccessToken"
        QT_MOC_LITERAL(87, 17),  // "authenticateToken"
        QT_MOC_LITERAL(105, 11),  // "listObjects"
        QT_MOC_LITERAL(117, 18),  // "exportSelectedMesh"
        QT_MOC_LITERAL(136, 11),  // "std::string"
        QT_MOC_LITERAL(148, 4),  // "path"
        QT_MOC_LITERAL(153, 20),  // "exportSelectedObject"
        QT_MOC_LITERAL(174, 18),  // "importSelectedFile"
        QT_MOC_LITERAL(193, 14),  // "getCurrentName"
        QT_MOC_LITERAL(208, 12),  // "getCurrentId"
        QT_MOC_LITERAL(221, 13),  // "getCurrentIds"
        QT_MOC_LITERAL(235, 16),  // "std::vector<int>"
        QT_MOC_LITERAL(252, 10),  // "deleteAtId"
        QT_MOC_LITERAL(263, 2),  // "id"
        QT_MOC_LITERAL(266, 11),  // "setNameToId"
        QT_MOC_LITERAL(278, 4),  // "name"
        QT_MOC_LITERAL(283, 10),  // "selectAtId"
        QT_MOC_LITERAL(294, 13),  // "getLastObject"
        QT_MOC_LITERAL(308, 15),  // "getObjectsNames"
        QT_MOC_LITERAL(324, 24),  // "std::vector<std::string>"
        QT_MOC_LITERAL(349, 14),  // "convertToScale"
        QT_MOC_LITERAL(364, 6),  // "scalar"
        QT_MOC_LITERAL(371, 13),  // "acceptCommand"
        QT_MOC_LITERAL(385, 6),  // "remesh"
        QT_MOC_LITERAL(392, 12),  // "partialUpper"
        QT_MOC_LITERAL(405, 12),  // "partialLower"
        QT_MOC_LITERAL(418, 16),  // "retentionPattern"
        QT_MOC_LITERAL(435, 19),  // "retentionStampBegin"
        QT_MOC_LITERAL(455, 20),  // "retentionStampFinish"
        QT_MOC_LITERAL(476, 17),  // "retentionDelicate"
        QT_MOC_LITERAL(494, 15),  // "acceptRetention"
        QT_MOC_LITERAL(510, 23),  // "acceptRetentionDelicate"
        QT_MOC_LITERAL(534, 15),  // "cancelRetention"
        QT_MOC_LITERAL(550, 14),  // "setObjectCount"
        QT_MOC_LITERAL(565, 13),  // "retentionType"
        QT_MOC_LITERAL(579, 11),  // "borderBegin"
        QT_MOC_LITERAL(591, 12),  // "borderFinish"
        QT_MOC_LITERAL(604, 12),  // "borderCancel"
        QT_MOC_LITERAL(617, 7),  // "gingiva"
        QT_MOC_LITERAL(625, 16),  // "makeSolidHighRes"
        QT_MOC_LITERAL(642, 9),  // "connector"
        QT_MOC_LITERAL(652, 5),  // "conus"
        QT_MOC_LITERAL(658, 7),  // "fastBar"
        QT_MOC_LITERAL(666, 8),  // "gideZero"
        QT_MOC_LITERAL(675, 10),  // "smoothFull"
        QT_MOC_LITERAL(686, 10),  // "smoothHalf"
        QT_MOC_LITERAL(697, 6),  // "splint"
        QT_MOC_LITERAL(704, 8),  // "separate"
        QT_MOC_LITERAL(713, 8),  // "cadBrush"
        QT_MOC_LITERAL(722, 5),  // "frame"
        QT_MOC_LITERAL(728, 6),  // "reduce"
        QT_MOC_LITERAL(735, 9),  // "tubeFrame"
        QT_MOC_LITERAL(745, 13)   // "surgicalGuide"
    },
    "buffer",
    "getDocDir",
    "",
    "checkMeshmixerResponse",
    "mmOpened",
    "acessTokenExpired",
    "refreshAccessToken",
    "authenticateToken",
    "listObjects",
    "exportSelectedMesh",
    "std::string",
    "path",
    "exportSelectedObject",
    "importSelectedFile",
    "getCurrentName",
    "getCurrentId",
    "getCurrentIds",
    "std::vector<int>",
    "deleteAtId",
    "id",
    "setNameToId",
    "name",
    "selectAtId",
    "getLastObject",
    "getObjectsNames",
    "std::vector<std::string>",
    "convertToScale",
    "scalar",
    "acceptCommand",
    "remesh",
    "partialUpper",
    "partialLower",
    "retentionPattern",
    "retentionStampBegin",
    "retentionStampFinish",
    "retentionDelicate",
    "acceptRetention",
    "acceptRetentionDelicate",
    "cancelRetention",
    "setObjectCount",
    "retentionType",
    "borderBegin",
    "borderFinish",
    "borderCancel",
    "gingiva",
    "makeSolidHighRes",
    "connector",
    "conus",
    "fastBar",
    "gideZero",
    "smoothFull",
    "smoothHalf",
    "splint",
    "separate",
    "cadBrush",
    "frame",
    "reduce",
    "tubeFrame",
    "surgicalGuide"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbufferENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  308,    2, 0x02,    1 /* Public */,
       3,    0,  309,    2, 0x02,    2 /* Public */,
       4,    0,  310,    2, 0x02,    3 /* Public */,
       5,    0,  311,    2, 0x02,    4 /* Public */,
       6,    0,  312,    2, 0x02,    5 /* Public */,
       7,    0,  313,    2, 0x02,    6 /* Public */,
       8,    0,  314,    2, 0x02,    7 /* Public */,
       9,    1,  315,    2, 0x02,    8 /* Public */,
      12,    1,  318,    2, 0x02,   10 /* Public */,
      13,    1,  321,    2, 0x02,   12 /* Public */,
      14,    0,  324,    2, 0x02,   14 /* Public */,
      15,    0,  325,    2, 0x02,   15 /* Public */,
      16,    0,  326,    2, 0x02,   16 /* Public */,
      18,    1,  327,    2, 0x02,   17 /* Public */,
      20,    2,  330,    2, 0x02,   19 /* Public */,
      22,    1,  335,    2, 0x02,   22 /* Public */,
      23,    0,  338,    2, 0x02,   24 /* Public */,
      24,    0,  339,    2, 0x02,   25 /* Public */,
      26,    1,  340,    2, 0x02,   26 /* Public */,
      28,    0,  343,    2, 0x02,   28 /* Public */,
      29,    0,  344,    2, 0x02,   29 /* Public */,
      30,    0,  345,    2, 0x02,   30 /* Public */,
      31,    0,  346,    2, 0x02,   31 /* Public */,
      32,    0,  347,    2, 0x02,   32 /* Public */,
      33,    0,  348,    2, 0x02,   33 /* Public */,
      34,    0,  349,    2, 0x02,   34 /* Public */,
      35,    0,  350,    2, 0x02,   35 /* Public */,
      36,    0,  351,    2, 0x02,   36 /* Public */,
      37,    0,  352,    2, 0x02,   37 /* Public */,
      38,    0,  353,    2, 0x02,   38 /* Public */,
      39,    1,  354,    2, 0x02,   39 /* Public */,
      41,    0,  357,    2, 0x02,   41 /* Public */,
      42,    0,  358,    2, 0x02,   42 /* Public */,
      43,    0,  359,    2, 0x02,   43 /* Public */,
      44,    0,  360,    2, 0x02,   44 /* Public */,
      45,    0,  361,    2, 0x02,   45 /* Public */,
      46,    0,  362,    2, 0x02,   46 /* Public */,
      47,    0,  363,    2, 0x02,   47 /* Public */,
      48,    0,  364,    2, 0x02,   48 /* Public */,
      49,    0,  365,    2, 0x02,   49 /* Public */,
      50,    0,  366,    2, 0x02,   50 /* Public */,
      51,    0,  367,    2, 0x02,   51 /* Public */,
      52,    0,  368,    2, 0x02,   52 /* Public */,
      53,    0,  369,    2, 0x02,   53 /* Public */,
      54,    0,  370,    2, 0x02,   54 /* Public */,
      55,    0,  371,    2, 0x02,   55 /* Public */,
      56,    0,  372,    2, 0x02,   56 /* Public */,
      57,    0,  373,    2, 0x02,   57 /* Public */,
      58,    0,  374,    2, 0x02,   58 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   11,
    0x80000000 | 10,
    QMetaType::Int,
    0x80000000 | 17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   21,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Int,
    0x80000000 | 25,
    QMetaType::Float, QMetaType::Float,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 10,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject buffer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSbufferENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbufferENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbufferENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<buffer, std::true_type>,
        // method 'getDocDir'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'checkMeshmixerResponse'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mmOpened'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'acessTokenExpired'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'refreshAccessToken'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'authenticateToken'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'listObjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportSelectedMesh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'exportSelectedObject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'importSelectedFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getCurrentName'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getCurrentId'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getCurrentIds'
        QtPrivate::TypeAndForceComplete<std::vector<int>, std::false_type>,
        // method 'deleteAtId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setNameToId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectAtId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getLastObject'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getObjectsNames'
        QtPrivate::TypeAndForceComplete<std::vector<std::string>, std::false_type>,
        // method 'convertToScale'
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'acceptCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'remesh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'partialUpper'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'partialLower'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'retentionPattern'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'retentionStampBegin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'retentionStampFinish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'retentionDelicate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'acceptRetention'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'acceptRetentionDelicate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancelRetention'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setObjectCount'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'borderBegin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'borderFinish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'borderCancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gingiva'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'makeSolidHighRes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'conus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fastBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gideZero'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'smoothFull'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'smoothHalf'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'splint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'separate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cadBrush'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'frame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reduce'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tubeFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'surgicalGuide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void buffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<buffer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->getDocDir();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->checkMeshmixerResponse();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->mmOpened();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->acessTokenExpired();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->refreshAccessToken(); break;
        case 5: { bool _r = _t->authenticateToken();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->listObjects(); break;
        case 7: _t->exportSelectedMesh((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 8: _t->exportSelectedObject((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 9: _t->importSelectedFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: { std::string _r = _t->getCurrentName();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->getCurrentId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { std::vector<int> _r = _t->getCurrentIds();
            if (_a[0]) *reinterpret_cast< std::vector<int>*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->deleteAtId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->setNameToId((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 15: _t->selectAtId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: { int _r = _t->getLastObject();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: { std::vector<std::string> _r = _t->getObjectsNames();
            if (_a[0]) *reinterpret_cast< std::vector<std::string>*>(_a[0]) = std::move(_r); }  break;
        case 18: { float _r = _t->convertToScale((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->acceptCommand(); break;
        case 20: _t->remesh(); break;
        case 21: _t->partialUpper(); break;
        case 22: _t->partialLower(); break;
        case 23: _t->retentionPattern(); break;
        case 24: _t->retentionStampBegin(); break;
        case 25: _t->retentionStampFinish(); break;
        case 26: _t->retentionDelicate(); break;
        case 27: _t->acceptRetention(); break;
        case 28: _t->acceptRetentionDelicate(); break;
        case 29: _t->cancelRetention(); break;
        case 30: { int _r = _t->setObjectCount((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->borderBegin(); break;
        case 32: _t->borderFinish(); break;
        case 33: _t->borderCancel(); break;
        case 34: _t->gingiva(); break;
        case 35: _t->makeSolidHighRes(); break;
        case 36: _t->connector(); break;
        case 37: _t->conus(); break;
        case 38: _t->fastBar(); break;
        case 39: _t->gideZero(); break;
        case 40: _t->smoothFull(); break;
        case 41: _t->smoothHalf(); break;
        case 42: _t->splint(); break;
        case 43: _t->separate(); break;
        case 44: _t->cadBrush(); break;
        case 45: _t->frame(); break;
        case 46: _t->reduce(); break;
        case 47: _t->tubeFrame(); break;
        case 48: _t->surgicalGuide(); break;
        default: ;
        }
    }
}

const QMetaObject *buffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *buffer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSbufferENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int buffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 49;
    }
    return _id;
}
QT_WARNING_POP
