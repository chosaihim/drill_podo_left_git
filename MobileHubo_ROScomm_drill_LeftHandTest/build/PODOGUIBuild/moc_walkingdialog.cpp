/****************************************************************************
** Meta object code from reading C++ file 'walkingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/PODOGUI/walkingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walkingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalkingDialog_t {
    QByteArrayData data[101];
    char stringdata0[2444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalkingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalkingDialog_t qt_meta_stringdata_WalkingDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WalkingDialog"
QT_MOC_LITERAL(1, 14, 13), // "DisplayUpdate"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 23), // "on_BTN_HOME_POS_clicked"
QT_MOC_LITERAL(4, 53, 29), // "on_BTN_WALK_READY_POS_clicked"
QT_MOC_LITERAL(5, 83, 31), // "on_TW_DSP_SCHEDULER_cellClicked"
QT_MOC_LITERAL(6, 115, 3), // "row"
QT_MOC_LITERAL(7, 119, 6), // "column"
QT_MOC_LITERAL(8, 126, 26), // "on_SPIN_INDEX_valueChanged"
QT_MOC_LITERAL(9, 153, 4), // "arg1"
QT_MOC_LITERAL(10, 158, 24), // "on_BTN_CLEAR_ALL_clicked"
QT_MOC_LITERAL(11, 183, 18), // "on_BTN_ADD_clicked"
QT_MOC_LITERAL(12, 202, 21), // "on_BTN_DELETE_clicked"
QT_MOC_LITERAL(13, 224, 20), // "on_BTN_APPLY_clicked"
QT_MOC_LITERAL(14, 245, 22), // "on_BTN_FW_SAVE_clicked"
QT_MOC_LITERAL(15, 268, 22), // "on_BTN_FW_LOAD_clicked"
QT_MOC_LITERAL(16, 291, 27), // "on_BTN_FW_SAVE_PLAY_clicked"
QT_MOC_LITERAL(17, 319, 28), // "on_BTN_FW_PLAY_SAVED_clicked"
QT_MOC_LITERAL(18, 348, 26), // "on_BTN_INT_FORWARD_clicked"
QT_MOC_LITERAL(19, 375, 27), // "on_BTN_INT_BACKWARD_clicked"
QT_MOC_LITERAL(20, 403, 24), // "on_BTN_DATA_SAVE_clicked"
QT_MOC_LITERAL(21, 428, 30), // "on_BTN_DATA_SAVE_START_clicked"
QT_MOC_LITERAL(22, 459, 24), // "on_BTN_INT_RIGHT_clicked"
QT_MOC_LITERAL(23, 484, 23), // "on_BTN_INT_LEFT_clicked"
QT_MOC_LITERAL(24, 508, 21), // "on_BTN_INT_CW_clicked"
QT_MOC_LITERAL(25, 530, 22), // "on_BTN_INT_CCW_clicked"
QT_MOC_LITERAL(26, 553, 25), // "on_BTN_Control_On_clicked"
QT_MOC_LITERAL(27, 579, 26), // "on_BTN_Control_Off_clicked"
QT_MOC_LITERAL(28, 606, 20), // "on_BTN_FW_GO_clicked"
QT_MOC_LITERAL(29, 627, 28), // "on_BTN_FILL_UP_STAIR_clicked"
QT_MOC_LITERAL(30, 656, 27), // "on_BTN_FILL_1ST_DSP_clicked"
QT_MOC_LITERAL(31, 684, 28), // "on_BTN_FILL_DN_STAIR_clicked"
QT_MOC_LITERAL(32, 713, 30), // "on_BTN_FILL_UP_STAIR_2_clicked"
QT_MOC_LITERAL(33, 744, 30), // "on_BTN_FILL_DN_STAIR_2_clicked"
QT_MOC_LITERAL(34, 775, 11), // "fill_blanks"
QT_MOC_LITERAL(35, 787, 9), // "double[6]"
QT_MOC_LITERAL(36, 797, 2), // "rx"
QT_MOC_LITERAL(37, 800, 2), // "ry"
QT_MOC_LITERAL(38, 803, 2), // "rz"
QT_MOC_LITERAL(39, 806, 2), // "lx"
QT_MOC_LITERAL(40, 809, 2), // "ly"
QT_MOC_LITERAL(41, 812, 2), // "lz"
QT_MOC_LITERAL(42, 815, 5), // "com_z"
QT_MOC_LITERAL(43, 821, 4), // "ryaw"
QT_MOC_LITERAL(44, 826, 4), // "lyaw"
QT_MOC_LITERAL(45, 831, 5), // "rroll"
QT_MOC_LITERAL(46, 837, 5), // "lroll"
QT_MOC_LITERAL(47, 843, 6), // "rpitch"
QT_MOC_LITERAL(48, 850, 6), // "lpitch"
QT_MOC_LITERAL(49, 857, 30), // "on_BTN_FILL_UP_STAIR_3_clicked"
QT_MOC_LITERAL(50, 888, 30), // "on_BTN_FILL_DN_STAIR_4_clicked"
QT_MOC_LITERAL(51, 919, 30), // "on_BTN_FILL_UP_STAIR_4_clicked"
QT_MOC_LITERAL(52, 950, 30), // "on_BTN_FILL_DN_STAIR_3_clicked"
QT_MOC_LITERAL(53, 981, 29), // "on_BTN_FILL_1ST_DSP_2_clicked"
QT_MOC_LITERAL(54, 1011, 35), // "on_BTN_FILL_UP_TERRAIN_RF_1_c..."
QT_MOC_LITERAL(55, 1047, 35), // "on_BTN_FILL_UP_TERRAIN_LF_1_c..."
QT_MOC_LITERAL(56, 1083, 35), // "on_BTN_FILL_UP_TERRAIN_RF_2_c..."
QT_MOC_LITERAL(57, 1119, 35), // "on_BTN_FILL_UP_TERRAIN_LF_2_c..."
QT_MOC_LITERAL(58, 1155, 35), // "on_BTN_FILL_UP_TERRAIN_RF_3_c..."
QT_MOC_LITERAL(59, 1191, 35), // "on_BTN_FILL_UP_TERRAIN_LF_3_c..."
QT_MOC_LITERAL(60, 1227, 35), // "on_BTN_FILL_UP_TERRAIN_RF_4_c..."
QT_MOC_LITERAL(61, 1263, 35), // "on_BTN_FILL_UP_TERRAIN_LF_4_c..."
QT_MOC_LITERAL(62, 1299, 35), // "on_BTN_FILL_UP_TERRAIN_RF_5_c..."
QT_MOC_LITERAL(63, 1335, 35), // "on_BTN_FILL_UP_TERRAIN_LF_5_c..."
QT_MOC_LITERAL(64, 1371, 21), // "on_BTN_ENABLE_clicked"
QT_MOC_LITERAL(65, 1393, 34), // "on_BTN_FILL_UP_FROM_VISION_cl..."
QT_MOC_LITERAL(66, 1428, 36), // "on_BTN_FILL_UP_FROM_VISION_2_..."
QT_MOC_LITERAL(67, 1465, 23), // "on_BTN_INFINITY_clicked"
QT_MOC_LITERAL(68, 1489, 28), // "on_BTN_INFINITY_STOP_clicked"
QT_MOC_LITERAL(69, 1518, 40), // "on_BTN_STEP_TO_BE_WALK_READY_..."
QT_MOC_LITERAL(70, 1559, 20), // "on_BTN_READY_clicked"
QT_MOC_LITERAL(71, 1580, 36), // "on_BTN_VISION_DIRECT_CONNECT_..."
QT_MOC_LITERAL(72, 1617, 36), // "on_BTN_VISION_DIRECT_REQUEST_..."
QT_MOC_LITERAL(73, 1654, 27), // "on_BTN_MOTION_CHECK_clicked"
QT_MOC_LITERAL(74, 1682, 36), // "on_BTN_FILL_UP_FROM_VISION_3_..."
QT_MOC_LITERAL(75, 1719, 36), // "on_BTN_FILL_UP_FROM_VISION_4_..."
QT_MOC_LITERAL(76, 1756, 29), // "on_BTN_FILL_1ST_DSP_3_clicked"
QT_MOC_LITERAL(77, 1786, 21), // "on_BTN_RF_2nd_clicked"
QT_MOC_LITERAL(78, 1808, 21), // "on_BTN_LF_2nd_clicked"
QT_MOC_LITERAL(79, 1830, 29), // "on_BTN_SET_FOOT_PRINT_clicked"
QT_MOC_LITERAL(80, 1860, 22), // "on_BTN_FILL_RF_clicked"
QT_MOC_LITERAL(81, 1883, 22), // "on_BTN_GOAL_GO_clicked"
QT_MOC_LITERAL(82, 1906, 28), // "on_BTN_INT_FORWARD_2_clicked"
QT_MOC_LITERAL(83, 1935, 26), // "on_BTN_INT_RIGHT_2_clicked"
QT_MOC_LITERAL(84, 1962, 29), // "on_BTN_INT_BACKWARD_2_clicked"
QT_MOC_LITERAL(85, 1992, 25), // "on_BTN_INT_LEFT_2_clicked"
QT_MOC_LITERAL(86, 2018, 23), // "on_BTN_INT_CW_2_clicked"
QT_MOC_LITERAL(87, 2042, 24), // "on_BTN_INT_CCW_2_clicked"
QT_MOC_LITERAL(88, 2067, 39), // "on_BTN_WALK_READY_POS_WITH_M1..."
QT_MOC_LITERAL(89, 2107, 31), // "on_BTN_INITIALIZE_1step_clicked"
QT_MOC_LITERAL(90, 2139, 29), // "on_BTN_INT_INITIALIZE_clicked"
QT_MOC_LITERAL(91, 2169, 26), // "on_BTN_DATA_SAVE_2_clicked"
QT_MOC_LITERAL(92, 2196, 31), // "on_BTN_WALK_READY_POS_3_clicked"
QT_MOC_LITERAL(93, 2228, 22), // "on_BTN_Foot_up_clicked"
QT_MOC_LITERAL(94, 2251, 24), // "on_BTN_Knee_Down_clicked"
QT_MOC_LITERAL(95, 2276, 24), // "on_BTN_Foot_Down_clicked"
QT_MOC_LITERAL(96, 2301, 18), // "on_BTN_BOW_clicked"
QT_MOC_LITERAL(97, 2320, 31), // "on_BTN_WALK_READY_POS_4_clicked"
QT_MOC_LITERAL(98, 2352, 30), // "on_BTN_WALK_READY_TEST_clicked"
QT_MOC_LITERAL(99, 2383, 32), // "on_BTN_WALK_READY_TEST_2_clicked"
QT_MOC_LITERAL(100, 2416, 27) // "on_BTN_STOP_WALKING_clicked"

    },
    "WalkingDialog\0DisplayUpdate\0\0"
    "on_BTN_HOME_POS_clicked\0"
    "on_BTN_WALK_READY_POS_clicked\0"
    "on_TW_DSP_SCHEDULER_cellClicked\0row\0"
    "column\0on_SPIN_INDEX_valueChanged\0"
    "arg1\0on_BTN_CLEAR_ALL_clicked\0"
    "on_BTN_ADD_clicked\0on_BTN_DELETE_clicked\0"
    "on_BTN_APPLY_clicked\0on_BTN_FW_SAVE_clicked\0"
    "on_BTN_FW_LOAD_clicked\0"
    "on_BTN_FW_SAVE_PLAY_clicked\0"
    "on_BTN_FW_PLAY_SAVED_clicked\0"
    "on_BTN_INT_FORWARD_clicked\0"
    "on_BTN_INT_BACKWARD_clicked\0"
    "on_BTN_DATA_SAVE_clicked\0"
    "on_BTN_DATA_SAVE_START_clicked\0"
    "on_BTN_INT_RIGHT_clicked\0"
    "on_BTN_INT_LEFT_clicked\0on_BTN_INT_CW_clicked\0"
    "on_BTN_INT_CCW_clicked\0on_BTN_Control_On_clicked\0"
    "on_BTN_Control_Off_clicked\0"
    "on_BTN_FW_GO_clicked\0on_BTN_FILL_UP_STAIR_clicked\0"
    "on_BTN_FILL_1ST_DSP_clicked\0"
    "on_BTN_FILL_DN_STAIR_clicked\0"
    "on_BTN_FILL_UP_STAIR_2_clicked\0"
    "on_BTN_FILL_DN_STAIR_2_clicked\0"
    "fill_blanks\0double[6]\0rx\0ry\0rz\0lx\0ly\0"
    "lz\0com_z\0ryaw\0lyaw\0rroll\0lroll\0rpitch\0"
    "lpitch\0on_BTN_FILL_UP_STAIR_3_clicked\0"
    "on_BTN_FILL_DN_STAIR_4_clicked\0"
    "on_BTN_FILL_UP_STAIR_4_clicked\0"
    "on_BTN_FILL_DN_STAIR_3_clicked\0"
    "on_BTN_FILL_1ST_DSP_2_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_RF_1_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_LF_1_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_RF_2_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_LF_2_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_RF_3_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_LF_3_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_RF_4_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_LF_4_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_RF_5_clicked\0"
    "on_BTN_FILL_UP_TERRAIN_LF_5_clicked\0"
    "on_BTN_ENABLE_clicked\0"
    "on_BTN_FILL_UP_FROM_VISION_clicked\0"
    "on_BTN_FILL_UP_FROM_VISION_2_clicked\0"
    "on_BTN_INFINITY_clicked\0"
    "on_BTN_INFINITY_STOP_clicked\0"
    "on_BTN_STEP_TO_BE_WALK_READY_POS_clicked\0"
    "on_BTN_READY_clicked\0"
    "on_BTN_VISION_DIRECT_CONNECT_clicked\0"
    "on_BTN_VISION_DIRECT_REQUEST_clicked\0"
    "on_BTN_MOTION_CHECK_clicked\0"
    "on_BTN_FILL_UP_FROM_VISION_3_clicked\0"
    "on_BTN_FILL_UP_FROM_VISION_4_clicked\0"
    "on_BTN_FILL_1ST_DSP_3_clicked\0"
    "on_BTN_RF_2nd_clicked\0on_BTN_LF_2nd_clicked\0"
    "on_BTN_SET_FOOT_PRINT_clicked\0"
    "on_BTN_FILL_RF_clicked\0on_BTN_GOAL_GO_clicked\0"
    "on_BTN_INT_FORWARD_2_clicked\0"
    "on_BTN_INT_RIGHT_2_clicked\0"
    "on_BTN_INT_BACKWARD_2_clicked\0"
    "on_BTN_INT_LEFT_2_clicked\0"
    "on_BTN_INT_CW_2_clicked\0"
    "on_BTN_INT_CCW_2_clicked\0"
    "on_BTN_WALK_READY_POS_WITH_M180_clicked\0"
    "on_BTN_INITIALIZE_1step_clicked\0"
    "on_BTN_INT_INITIALIZE_clicked\0"
    "on_BTN_DATA_SAVE_2_clicked\0"
    "on_BTN_WALK_READY_POS_3_clicked\0"
    "on_BTN_Foot_up_clicked\0on_BTN_Knee_Down_clicked\0"
    "on_BTN_Foot_Down_clicked\0on_BTN_BOW_clicked\0"
    "on_BTN_WALK_READY_POS_4_clicked\0"
    "on_BTN_WALK_READY_TEST_clicked\0"
    "on_BTN_WALK_READY_TEST_2_clicked\0"
    "on_BTN_STOP_WALKING_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalkingDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      82,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  424,    2, 0x08 /* Private */,
       3,    0,  425,    2, 0x08 /* Private */,
       4,    0,  426,    2, 0x08 /* Private */,
       5,    2,  427,    2, 0x08 /* Private */,
       8,    1,  432,    2, 0x08 /* Private */,
      10,    0,  435,    2, 0x08 /* Private */,
      11,    0,  436,    2, 0x08 /* Private */,
      12,    0,  437,    2, 0x08 /* Private */,
      13,    0,  438,    2, 0x08 /* Private */,
      14,    0,  439,    2, 0x08 /* Private */,
      15,    0,  440,    2, 0x08 /* Private */,
      16,    0,  441,    2, 0x08 /* Private */,
      17,    0,  442,    2, 0x08 /* Private */,
      18,    0,  443,    2, 0x08 /* Private */,
      19,    0,  444,    2, 0x08 /* Private */,
      20,    0,  445,    2, 0x08 /* Private */,
      21,    0,  446,    2, 0x08 /* Private */,
      22,    0,  447,    2, 0x08 /* Private */,
      23,    0,  448,    2, 0x08 /* Private */,
      24,    0,  449,    2, 0x08 /* Private */,
      25,    0,  450,    2, 0x08 /* Private */,
      26,    0,  451,    2, 0x08 /* Private */,
      27,    0,  452,    2, 0x08 /* Private */,
      28,    0,  453,    2, 0x08 /* Private */,
      29,    0,  454,    2, 0x08 /* Private */,
      30,    0,  455,    2, 0x08 /* Private */,
      31,    0,  456,    2, 0x08 /* Private */,
      32,    0,  457,    2, 0x08 /* Private */,
      33,    0,  458,    2, 0x08 /* Private */,
      34,   13,  459,    2, 0x08 /* Private */,
      49,    0,  486,    2, 0x08 /* Private */,
      50,    0,  487,    2, 0x08 /* Private */,
      51,    0,  488,    2, 0x08 /* Private */,
      52,    0,  489,    2, 0x08 /* Private */,
      53,    0,  490,    2, 0x08 /* Private */,
      54,    0,  491,    2, 0x08 /* Private */,
      55,    0,  492,    2, 0x08 /* Private */,
      56,    0,  493,    2, 0x08 /* Private */,
      57,    0,  494,    2, 0x08 /* Private */,
      58,    0,  495,    2, 0x08 /* Private */,
      59,    0,  496,    2, 0x08 /* Private */,
      60,    0,  497,    2, 0x08 /* Private */,
      61,    0,  498,    2, 0x08 /* Private */,
      62,    0,  499,    2, 0x08 /* Private */,
      63,    0,  500,    2, 0x08 /* Private */,
      64,    0,  501,    2, 0x08 /* Private */,
      65,    0,  502,    2, 0x08 /* Private */,
      66,    0,  503,    2, 0x08 /* Private */,
      67,    0,  504,    2, 0x08 /* Private */,
      68,    0,  505,    2, 0x08 /* Private */,
      69,    0,  506,    2, 0x08 /* Private */,
      70,    0,  507,    2, 0x08 /* Private */,
      71,    0,  508,    2, 0x08 /* Private */,
      72,    0,  509,    2, 0x08 /* Private */,
      73,    0,  510,    2, 0x08 /* Private */,
      74,    0,  511,    2, 0x08 /* Private */,
      75,    0,  512,    2, 0x08 /* Private */,
      76,    0,  513,    2, 0x08 /* Private */,
      77,    0,  514,    2, 0x08 /* Private */,
      78,    0,  515,    2, 0x08 /* Private */,
      79,    0,  516,    2, 0x08 /* Private */,
      80,    0,  517,    2, 0x08 /* Private */,
      81,    0,  518,    2, 0x08 /* Private */,
      82,    0,  519,    2, 0x08 /* Private */,
      83,    0,  520,    2, 0x08 /* Private */,
      84,    0,  521,    2, 0x08 /* Private */,
      85,    0,  522,    2, 0x08 /* Private */,
      86,    0,  523,    2, 0x08 /* Private */,
      87,    0,  524,    2, 0x08 /* Private */,
      88,    0,  525,    2, 0x08 /* Private */,
      89,    0,  526,    2, 0x08 /* Private */,
      90,    0,  527,    2, 0x08 /* Private */,
      91,    0,  528,    2, 0x08 /* Private */,
      92,    0,  529,    2, 0x08 /* Private */,
      93,    0,  530,    2, 0x08 /* Private */,
      94,    0,  531,    2, 0x08 /* Private */,
      95,    0,  532,    2, 0x08 /* Private */,
      96,    0,  533,    2, 0x08 /* Private */,
      97,    0,  534,    2, 0x08 /* Private */,
      98,    0,  535,    2, 0x08 /* Private */,
      99,    0,  536,    2, 0x08 /* Private */,
     100,    0,  537,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35, 0x80000000 | 35,   36,   37,   38,   39,   40,   41,   42,   43,   44,   45,   46,   47,   48,
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

void WalkingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalkingDialog *_t = static_cast<WalkingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DisplayUpdate(); break;
        case 1: _t->on_BTN_HOME_POS_clicked(); break;
        case 2: _t->on_BTN_WALK_READY_POS_clicked(); break;
        case 3: _t->on_TW_DSP_SCHEDULER_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_SPIN_INDEX_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_BTN_CLEAR_ALL_clicked(); break;
        case 6: _t->on_BTN_ADD_clicked(); break;
        case 7: _t->on_BTN_DELETE_clicked(); break;
        case 8: _t->on_BTN_APPLY_clicked(); break;
        case 9: _t->on_BTN_FW_SAVE_clicked(); break;
        case 10: _t->on_BTN_FW_LOAD_clicked(); break;
        case 11: _t->on_BTN_FW_SAVE_PLAY_clicked(); break;
        case 12: _t->on_BTN_FW_PLAY_SAVED_clicked(); break;
        case 13: _t->on_BTN_INT_FORWARD_clicked(); break;
        case 14: _t->on_BTN_INT_BACKWARD_clicked(); break;
        case 15: _t->on_BTN_DATA_SAVE_clicked(); break;
        case 16: _t->on_BTN_DATA_SAVE_START_clicked(); break;
        case 17: _t->on_BTN_INT_RIGHT_clicked(); break;
        case 18: _t->on_BTN_INT_LEFT_clicked(); break;
        case 19: _t->on_BTN_INT_CW_clicked(); break;
        case 20: _t->on_BTN_INT_CCW_clicked(); break;
        case 21: _t->on_BTN_Control_On_clicked(); break;
        case 22: _t->on_BTN_Control_Off_clicked(); break;
        case 23: _t->on_BTN_FW_GO_clicked(); break;
        case 24: _t->on_BTN_FILL_UP_STAIR_clicked(); break;
        case 25: _t->on_BTN_FILL_1ST_DSP_clicked(); break;
        case 26: _t->on_BTN_FILL_DN_STAIR_clicked(); break;
        case 27: _t->on_BTN_FILL_UP_STAIR_2_clicked(); break;
        case 28: _t->on_BTN_FILL_DN_STAIR_2_clicked(); break;
        case 29: _t->fill_blanks((*reinterpret_cast< double(*)[6]>(_a[1])),(*reinterpret_cast< double(*)[6]>(_a[2])),(*reinterpret_cast< double(*)[6]>(_a[3])),(*reinterpret_cast< double(*)[6]>(_a[4])),(*reinterpret_cast< double(*)[6]>(_a[5])),(*reinterpret_cast< double(*)[6]>(_a[6])),(*reinterpret_cast< double(*)[6]>(_a[7])),(*reinterpret_cast< double(*)[6]>(_a[8])),(*reinterpret_cast< double(*)[6]>(_a[9])),(*reinterpret_cast< double(*)[6]>(_a[10])),(*reinterpret_cast< double(*)[6]>(_a[11])),(*reinterpret_cast< double(*)[6]>(_a[12])),(*reinterpret_cast< double(*)[6]>(_a[13]))); break;
        case 30: _t->on_BTN_FILL_UP_STAIR_3_clicked(); break;
        case 31: _t->on_BTN_FILL_DN_STAIR_4_clicked(); break;
        case 32: _t->on_BTN_FILL_UP_STAIR_4_clicked(); break;
        case 33: _t->on_BTN_FILL_DN_STAIR_3_clicked(); break;
        case 34: _t->on_BTN_FILL_1ST_DSP_2_clicked(); break;
        case 35: _t->on_BTN_FILL_UP_TERRAIN_RF_1_clicked(); break;
        case 36: _t->on_BTN_FILL_UP_TERRAIN_LF_1_clicked(); break;
        case 37: _t->on_BTN_FILL_UP_TERRAIN_RF_2_clicked(); break;
        case 38: _t->on_BTN_FILL_UP_TERRAIN_LF_2_clicked(); break;
        case 39: _t->on_BTN_FILL_UP_TERRAIN_RF_3_clicked(); break;
        case 40: _t->on_BTN_FILL_UP_TERRAIN_LF_3_clicked(); break;
        case 41: _t->on_BTN_FILL_UP_TERRAIN_RF_4_clicked(); break;
        case 42: _t->on_BTN_FILL_UP_TERRAIN_LF_4_clicked(); break;
        case 43: _t->on_BTN_FILL_UP_TERRAIN_RF_5_clicked(); break;
        case 44: _t->on_BTN_FILL_UP_TERRAIN_LF_5_clicked(); break;
        case 45: _t->on_BTN_ENABLE_clicked(); break;
        case 46: _t->on_BTN_FILL_UP_FROM_VISION_clicked(); break;
        case 47: _t->on_BTN_FILL_UP_FROM_VISION_2_clicked(); break;
        case 48: _t->on_BTN_INFINITY_clicked(); break;
        case 49: _t->on_BTN_INFINITY_STOP_clicked(); break;
        case 50: _t->on_BTN_STEP_TO_BE_WALK_READY_POS_clicked(); break;
        case 51: _t->on_BTN_READY_clicked(); break;
        case 52: _t->on_BTN_VISION_DIRECT_CONNECT_clicked(); break;
        case 53: _t->on_BTN_VISION_DIRECT_REQUEST_clicked(); break;
        case 54: _t->on_BTN_MOTION_CHECK_clicked(); break;
        case 55: _t->on_BTN_FILL_UP_FROM_VISION_3_clicked(); break;
        case 56: _t->on_BTN_FILL_UP_FROM_VISION_4_clicked(); break;
        case 57: _t->on_BTN_FILL_1ST_DSP_3_clicked(); break;
        case 58: _t->on_BTN_RF_2nd_clicked(); break;
        case 59: _t->on_BTN_LF_2nd_clicked(); break;
        case 60: _t->on_BTN_SET_FOOT_PRINT_clicked(); break;
        case 61: _t->on_BTN_FILL_RF_clicked(); break;
        case 62: _t->on_BTN_GOAL_GO_clicked(); break;
        case 63: _t->on_BTN_INT_FORWARD_2_clicked(); break;
        case 64: _t->on_BTN_INT_RIGHT_2_clicked(); break;
        case 65: _t->on_BTN_INT_BACKWARD_2_clicked(); break;
        case 66: _t->on_BTN_INT_LEFT_2_clicked(); break;
        case 67: _t->on_BTN_INT_CW_2_clicked(); break;
        case 68: _t->on_BTN_INT_CCW_2_clicked(); break;
        case 69: _t->on_BTN_WALK_READY_POS_WITH_M180_clicked(); break;
        case 70: _t->on_BTN_INITIALIZE_1step_clicked(); break;
        case 71: _t->on_BTN_INT_INITIALIZE_clicked(); break;
        case 72: _t->on_BTN_DATA_SAVE_2_clicked(); break;
        case 73: _t->on_BTN_WALK_READY_POS_3_clicked(); break;
        case 74: _t->on_BTN_Foot_up_clicked(); break;
        case 75: _t->on_BTN_Knee_Down_clicked(); break;
        case 76: _t->on_BTN_Foot_Down_clicked(); break;
        case 77: _t->on_BTN_BOW_clicked(); break;
        case 78: _t->on_BTN_WALK_READY_POS_4_clicked(); break;
        case 79: _t->on_BTN_WALK_READY_TEST_clicked(); break;
        case 80: _t->on_BTN_WALK_READY_TEST_2_clicked(); break;
        case 81: _t->on_BTN_STOP_WALKING_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject WalkingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WalkingDialog.data,
      qt_meta_data_WalkingDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalkingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalkingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalkingDialog.stringdata0))
        return static_cast<void*>(const_cast< WalkingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WalkingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 82)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 82;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
