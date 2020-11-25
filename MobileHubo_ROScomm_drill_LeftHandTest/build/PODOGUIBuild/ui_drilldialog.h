/********************************************************************************
** Form generated from reading UI file 'drilldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRILLDIALOG_H
#define UI_DRILLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DrillDialog
{
public:
    QFrame *frame_gripper;
    QPushButton *PB_Gripper_grasp;
    QLabel *label_Gripper_right;
    QPushButton *PB_Gripper_open;
    QPushButton *PB_WalkReady;
    QPushButton *PB_STOP;
    QFrame *RIGHT_HAND;
    QLabel *label_RightHand;
    QPushButton *PB_setROSCoord;
    QLabel *label;
    QPushButton *PB_pushSeq;
    QPushButton *PB_pullSeq;
    QLabel *label_2;
    QFrame *line;
    QPushButton *PB_noROS;
    QFrame *frame_2;
    QPushButton *PB_R_Pull;
    QPushButton *PB_R_Release;
    QPushButton *PB_R_Push;
    QPushButton *PB_R_Approach;
    QPushButton *PB_R_HandUp;
    QLabel *label_3;
    QFrame *frame;
    QPushButton *PB_save;
    QPushButton *PB_done;
    QLabel *label_RGripper_2;
    QFrame *frame_gripper_right;
    QPushButton *PB_RGripper_grasp;
    QLabel *label_RGripper;
    QPushButton *PB_RGripper_open;
    QFrame *frame_4;
    QFrame *frame_DRILL;
    QFrame *frame_HoldDrill;
    QPushButton *PB_Hold_Approach;
    QLabel *label_HoldDrill;
    QPushButton *PB_Hold_Bring;
    QPushButton *PB_Hold_Grasp;
    QFrame *frame_Drilling;
    QLabel *label_Drilling;
    QPushButton *PB_Drill_Ready;
    QPushButton *PB_Drill_Approach;
    QPushButton *PB_Drill_Down;
    QPushButton *PB_Drill_Up;
    QFrame *frame_PutDril;
    QLabel *label_PutDrill;
    QPushButton *PB_Put_Lift;
    QPushButton *PB_Put_Put;
    QPushButton *PB_Put_WKRD;
    QLabel *label_DRILL;
    QPushButton *PB_Hold;
    QPushButton *PB_Drilling;
    QPushButton *PB_Put;
    QFrame *LeftHand;
    QPushButton *PB_HandUp;
    QLabel *label_LeftHand;
    QPushButton *PB_Approach;
    QPushButton *PB_Push;
    QPushButton *PB_Pull;
    QPushButton *PB_Release;
    QPushButton *PB_HalfOpen;
    QPushButton *PB_QuatClose;
    QFrame *frame_3;
    QPushButton *PB_R_QuatClose;
    QPushButton *PB_R_angle;
    QPushButton *PB_R_HalfOpen;
    QPushButton *PB_angleTest;
    QPushButton *PB_getCOM;
    QFrame *line_2;
    QFrame *line_3;

    void setupUi(QDialog *DrillDialog)
    {
        if (DrillDialog->objectName().isEmpty())
            DrillDialog->setObjectName(QStringLiteral("DrillDialog"));
        DrillDialog->resize(852, 790);
        frame_gripper = new QFrame(DrillDialog);
        frame_gripper->setObjectName(QStringLiteral("frame_gripper"));
        frame_gripper->setGeometry(QRect(400, 150, 101, 101));
        frame_gripper->setFrameShape(QFrame::StyledPanel);
        frame_gripper->setFrameShadow(QFrame::Raised);
        PB_Gripper_grasp = new QPushButton(frame_gripper);
        PB_Gripper_grasp->setObjectName(QStringLiteral("PB_Gripper_grasp"));
        PB_Gripper_grasp->setGeometry(QRect(10, 70, 80, 22));
        label_Gripper_right = new QLabel(frame_gripper);
        label_Gripper_right->setObjectName(QStringLiteral("label_Gripper_right"));
        label_Gripper_right->setGeometry(QRect(10, 10, 81, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_Gripper_right->setFont(font);
        PB_Gripper_open = new QPushButton(frame_gripper);
        PB_Gripper_open->setObjectName(QStringLiteral("PB_Gripper_open"));
        PB_Gripper_open->setGeometry(QRect(10, 40, 80, 22));
        PB_WalkReady = new QPushButton(DrillDialog);
        PB_WalkReady->setObjectName(QStringLiteral("PB_WalkReady"));
        PB_WalkReady->setGeometry(QRect(10, 10, 131, 131));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        PB_WalkReady->setFont(font1);
        PB_STOP = new QPushButton(DrillDialog);
        PB_STOP->setObjectName(QStringLiteral("PB_STOP"));
        PB_STOP->setGeometry(QRect(160, 10, 201, 131));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        PB_STOP->setFont(font2);
        RIGHT_HAND = new QFrame(DrillDialog);
        RIGHT_HAND->setObjectName(QStringLiteral("RIGHT_HAND"));
        RIGHT_HAND->setGeometry(QRect(10, 150, 381, 241));
        RIGHT_HAND->setFrameShape(QFrame::StyledPanel);
        RIGHT_HAND->setFrameShadow(QFrame::Raised);
        label_RightHand = new QLabel(RIGHT_HAND);
        label_RightHand->setObjectName(QStringLiteral("label_RightHand"));
        label_RightHand->setGeometry(QRect(10, 10, 211, 21));
        PB_setROSCoord = new QPushButton(RIGHT_HAND);
        PB_setROSCoord->setObjectName(QStringLiteral("PB_setROSCoord"));
        PB_setROSCoord->setGeometry(QRect(20, 190, 91, 22));
        label = new QLabel(RIGHT_HAND);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 170, 211, 16));
        PB_pushSeq = new QPushButton(RIGHT_HAND);
        PB_pushSeq->setObjectName(QStringLiteral("PB_pushSeq"));
        PB_pushSeq->setEnabled(true);
        PB_pushSeq->setGeometry(QRect(20, 40, 91, 81));
        PB_pullSeq = new QPushButton(RIGHT_HAND);
        PB_pullSeq->setObjectName(QStringLiteral("PB_pullSeq"));
        PB_pullSeq->setEnabled(false);
        PB_pullSeq->setGeometry(QRect(120, 40, 91, 81));
        label_2 = new QLabel(RIGHT_HAND);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 140, 59, 31));
        line = new QFrame(RIGHT_HAND);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 130, 191, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        PB_noROS = new QPushButton(RIGHT_HAND);
        PB_noROS->setObjectName(QStringLiteral("PB_noROS"));
        PB_noROS->setEnabled(false);
        PB_noROS->setGeometry(QRect(120, 190, 91, 22));
        frame_2 = new QFrame(RIGHT_HAND);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(240, 20, 121, 201));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        PB_R_Pull = new QPushButton(frame_2);
        PB_R_Pull->setObjectName(QStringLiteral("PB_R_Pull"));
        PB_R_Pull->setGeometry(QRect(20, 130, 80, 22));
        PB_R_Release = new QPushButton(frame_2);
        PB_R_Release->setObjectName(QStringLiteral("PB_R_Release"));
        PB_R_Release->setGeometry(QRect(20, 160, 80, 22));
        PB_R_Push = new QPushButton(frame_2);
        PB_R_Push->setObjectName(QStringLiteral("PB_R_Push"));
        PB_R_Push->setGeometry(QRect(20, 100, 80, 22));
        PB_R_Approach = new QPushButton(frame_2);
        PB_R_Approach->setObjectName(QStringLiteral("PB_R_Approach"));
        PB_R_Approach->setGeometry(QRect(20, 70, 80, 22));
        PB_R_HandUp = new QPushButton(frame_2);
        PB_R_HandUp->setObjectName(QStringLiteral("PB_R_HandUp"));
        PB_R_HandUp->setGeometry(QRect(20, 40, 80, 22));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 121, 21));
        QFont font3;
        font3.setPointSize(12);
        label_3->setFont(font3);
        frame = new QFrame(DrillDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(400, 10, 101, 131));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        PB_save = new QPushButton(frame);
        PB_save->setObjectName(QStringLiteral("PB_save"));
        PB_save->setGeometry(QRect(10, 70, 80, 22));
        PB_done = new QPushButton(frame);
        PB_done->setObjectName(QStringLiteral("PB_done"));
        PB_done->setGeometry(QRect(10, 100, 80, 22));
        label_RGripper_2 = new QLabel(frame);
        label_RGripper_2->setObjectName(QStringLiteral("label_RGripper_2"));
        label_RGripper_2->setGeometry(QRect(10, 10, 81, 51));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_RGripper_2->setFont(font4);
        frame_gripper_right = new QFrame(DrillDialog);
        frame_gripper_right->setObjectName(QStringLiteral("frame_gripper_right"));
        frame_gripper_right->setGeometry(QRect(400, 260, 101, 131));
        frame_gripper_right->setFrameShape(QFrame::StyledPanel);
        frame_gripper_right->setFrameShadow(QFrame::Raised);
        PB_RGripper_grasp = new QPushButton(frame_gripper_right);
        PB_RGripper_grasp->setObjectName(QStringLiteral("PB_RGripper_grasp"));
        PB_RGripper_grasp->setGeometry(QRect(10, 90, 80, 22));
        label_RGripper = new QLabel(frame_gripper_right);
        label_RGripper->setObjectName(QStringLiteral("label_RGripper"));
        label_RGripper->setGeometry(QRect(10, 10, 81, 41));
        label_RGripper->setFont(font);
        PB_RGripper_open = new QPushButton(frame_gripper_right);
        PB_RGripper_open->setObjectName(QStringLiteral("PB_RGripper_open"));
        PB_RGripper_open->setGeometry(QRect(10, 60, 80, 22));
        frame_4 = new QFrame(DrillDialog);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(790, 740, 61, 51));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_DRILL = new QFrame(frame_4);
        frame_DRILL->setObjectName(QStringLiteral("frame_DRILL"));
        frame_DRILL->setGeometry(QRect(20, 0, 371, 241));
        frame_DRILL->setFrameShape(QFrame::StyledPanel);
        frame_DRILL->setFrameShadow(QFrame::Raised);
        frame_HoldDrill = new QFrame(frame_DRILL);
        frame_HoldDrill->setObjectName(QStringLiteral("frame_HoldDrill"));
        frame_HoldDrill->setGeometry(QRect(10, 80, 111, 121));
        frame_HoldDrill->setFrameShape(QFrame::StyledPanel);
        frame_HoldDrill->setFrameShadow(QFrame::Raised);
        PB_Hold_Approach = new QPushButton(frame_HoldDrill);
        PB_Hold_Approach->setObjectName(QStringLiteral("PB_Hold_Approach"));
        PB_Hold_Approach->setGeometry(QRect(10, 30, 91, 21));
        label_HoldDrill = new QLabel(frame_HoldDrill);
        label_HoldDrill->setObjectName(QStringLiteral("label_HoldDrill"));
        label_HoldDrill->setGeometry(QRect(10, 10, 91, 16));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        label_HoldDrill->setFont(font5);
        PB_Hold_Bring = new QPushButton(frame_HoldDrill);
        PB_Hold_Bring->setObjectName(QStringLiteral("PB_Hold_Bring"));
        PB_Hold_Bring->setGeometry(QRect(10, 90, 91, 21));
        PB_Hold_Grasp = new QPushButton(frame_HoldDrill);
        PB_Hold_Grasp->setObjectName(QStringLiteral("PB_Hold_Grasp"));
        PB_Hold_Grasp->setGeometry(QRect(10, 60, 91, 22));
        frame_Drilling = new QFrame(frame_DRILL);
        frame_Drilling->setObjectName(QStringLiteral("frame_Drilling"));
        frame_Drilling->setGeometry(QRect(130, 80, 111, 151));
        frame_Drilling->setFrameShape(QFrame::StyledPanel);
        frame_Drilling->setFrameShadow(QFrame::Raised);
        label_Drilling = new QLabel(frame_Drilling);
        label_Drilling->setObjectName(QStringLiteral("label_Drilling"));
        label_Drilling->setGeometry(QRect(10, 10, 91, 16));
        label_Drilling->setFont(font5);
        PB_Drill_Ready = new QPushButton(frame_Drilling);
        PB_Drill_Ready->setObjectName(QStringLiteral("PB_Drill_Ready"));
        PB_Drill_Ready->setGeometry(QRect(10, 30, 91, 22));
        PB_Drill_Approach = new QPushButton(frame_Drilling);
        PB_Drill_Approach->setObjectName(QStringLiteral("PB_Drill_Approach"));
        PB_Drill_Approach->setGeometry(QRect(10, 60, 91, 22));
        PB_Drill_Down = new QPushButton(frame_Drilling);
        PB_Drill_Down->setObjectName(QStringLiteral("PB_Drill_Down"));
        PB_Drill_Down->setGeometry(QRect(10, 90, 91, 22));
        PB_Drill_Up = new QPushButton(frame_Drilling);
        PB_Drill_Up->setObjectName(QStringLiteral("PB_Drill_Up"));
        PB_Drill_Up->setGeometry(QRect(10, 120, 91, 22));
        frame_PutDril = new QFrame(frame_DRILL);
        frame_PutDril->setObjectName(QStringLiteral("frame_PutDril"));
        frame_PutDril->setGeometry(QRect(250, 80, 111, 121));
        frame_PutDril->setFrameShape(QFrame::StyledPanel);
        frame_PutDril->setFrameShadow(QFrame::Raised);
        label_PutDrill = new QLabel(frame_PutDril);
        label_PutDrill->setObjectName(QStringLiteral("label_PutDrill"));
        label_PutDrill->setGeometry(QRect(10, 10, 91, 16));
        label_PutDrill->setFont(font5);
        PB_Put_Lift = new QPushButton(frame_PutDril);
        PB_Put_Lift->setObjectName(QStringLiteral("PB_Put_Lift"));
        PB_Put_Lift->setGeometry(QRect(10, 30, 91, 22));
        PB_Put_Put = new QPushButton(frame_PutDril);
        PB_Put_Put->setObjectName(QStringLiteral("PB_Put_Put"));
        PB_Put_Put->setGeometry(QRect(10, 60, 91, 22));
        PB_Put_WKRD = new QPushButton(frame_PutDril);
        PB_Put_WKRD->setObjectName(QStringLiteral("PB_Put_WKRD"));
        PB_Put_WKRD->setGeometry(QRect(10, 90, 91, 22));
        label_DRILL = new QLabel(frame_DRILL);
        label_DRILL->setObjectName(QStringLiteral("label_DRILL"));
        label_DRILL->setGeometry(QRect(10, 10, 71, 21));
        QFont font6;
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setWeight(75);
        label_DRILL->setFont(font6);
        PB_Hold = new QPushButton(frame_DRILL);
        PB_Hold->setObjectName(QStringLiteral("PB_Hold"));
        PB_Hold->setGeometry(QRect(10, 40, 111, 31));
        PB_Drilling = new QPushButton(frame_DRILL);
        PB_Drilling->setObjectName(QStringLiteral("PB_Drilling"));
        PB_Drilling->setGeometry(QRect(130, 40, 111, 31));
        PB_Put = new QPushButton(frame_DRILL);
        PB_Put->setObjectName(QStringLiteral("PB_Put"));
        PB_Put->setGeometry(QRect(250, 40, 111, 31));
        LeftHand = new QFrame(frame_4);
        LeftHand->setObjectName(QStringLiteral("LeftHand"));
        LeftHand->setGeometry(QRect(10, 10, 461, 131));
        LeftHand->setFrameShape(QFrame::StyledPanel);
        LeftHand->setFrameShadow(QFrame::Raised);
        PB_HandUp = new QPushButton(LeftHand);
        PB_HandUp->setObjectName(QStringLiteral("PB_HandUp"));
        PB_HandUp->setGeometry(QRect(30, 40, 80, 22));
        label_LeftHand = new QLabel(LeftHand);
        label_LeftHand->setObjectName(QStringLiteral("label_LeftHand"));
        label_LeftHand->setGeometry(QRect(10, 10, 131, 21));
        PB_Approach = new QPushButton(LeftHand);
        PB_Approach->setObjectName(QStringLiteral("PB_Approach"));
        PB_Approach->setGeometry(QRect(30, 70, 80, 22));
        PB_Push = new QPushButton(LeftHand);
        PB_Push->setObjectName(QStringLiteral("PB_Push"));
        PB_Push->setGeometry(QRect(140, 40, 80, 22));
        PB_Pull = new QPushButton(LeftHand);
        PB_Pull->setObjectName(QStringLiteral("PB_Pull"));
        PB_Pull->setGeometry(QRect(140, 70, 80, 22));
        PB_Release = new QPushButton(LeftHand);
        PB_Release->setObjectName(QStringLiteral("PB_Release"));
        PB_Release->setGeometry(QRect(250, 40, 80, 22));
        PB_HalfOpen = new QPushButton(LeftHand);
        PB_HalfOpen->setObjectName(QStringLiteral("PB_HalfOpen"));
        PB_HalfOpen->setGeometry(QRect(360, 40, 80, 22));
        PB_QuatClose = new QPushButton(LeftHand);
        PB_QuatClose->setObjectName(QStringLiteral("PB_QuatClose"));
        PB_QuatClose->setGeometry(QRect(360, 70, 80, 22));
        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(-10, 20, 181, 80));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        PB_R_QuatClose = new QPushButton(frame_3);
        PB_R_QuatClose->setObjectName(QStringLiteral("PB_R_QuatClose"));
        PB_R_QuatClose->setGeometry(QRect(10, 30, 80, 22));
        PB_R_angle = new QPushButton(frame_3);
        PB_R_angle->setObjectName(QStringLiteral("PB_R_angle"));
        PB_R_angle->setGeometry(QRect(90, 30, 81, 22));
        PB_R_HalfOpen = new QPushButton(frame_3);
        PB_R_HalfOpen->setObjectName(QStringLiteral("PB_R_HalfOpen"));
        PB_R_HalfOpen->setGeometry(QRect(10, 10, 80, 22));
        PB_angleTest = new QPushButton(frame_3);
        PB_angleTest->setObjectName(QStringLiteral("PB_angleTest"));
        PB_angleTest->setGeometry(QRect(90, 10, 81, 22));
        PB_getCOM = new QPushButton(frame_3);
        PB_getCOM->setObjectName(QStringLiteral("PB_getCOM"));
        PB_getCOM->setGeometry(QRect(90, 50, 81, 21));
        line_2 = new QFrame(DrillDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(380, 10, 20, 131));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(DrillDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(370, 10, 20, 131));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        retranslateUi(DrillDialog);

        QMetaObject::connectSlotsByName(DrillDialog);
    } // setupUi

    void retranslateUi(QDialog *DrillDialog)
    {
        DrillDialog->setWindowTitle(QApplication::translate("DrillDialog", "Dialog", 0));
        PB_Gripper_grasp->setText(QApplication::translate("DrillDialog", "Close", 0));
        label_Gripper_right->setText(QApplication::translate("DrillDialog", "Grippers", 0));
        PB_Gripper_open->setText(QApplication::translate("DrillDialog", "Open", 0));
        PB_WalkReady->setText(QApplication::translate("DrillDialog", "Walk\n"
"Ready", 0));
        PB_STOP->setText(QApplication::translate("DrillDialog", "Emergency\n"
"STOP", 0));
        label_RightHand->setText(QApplication::translate("DrillDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">RIGHT HAND DRILL</span></p></body></html>", 0));
        PB_setROSCoord->setText(QApplication::translate("DrillDialog", "ROS Coord", 0));
        label->setText(QApplication::translate("DrillDialog", "Set hands Up (x,y,z)  w/ ROS", 0));
        PB_pushSeq->setText(QApplication::translate("DrillDialog", "PUSH", 0));
        PB_pullSeq->setText(QApplication::translate("DrillDialog", "PULL", 0));
        label_2->setText(QApplication::translate("DrillDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">ROS</span></p></body></html>", 0));
        PB_noROS->setText(QApplication::translate("DrillDialog", "NO ROS", 0));
        PB_R_Pull->setText(QApplication::translate("DrillDialog", "Pull", 0));
        PB_R_Release->setText(QApplication::translate("DrillDialog", "Release", 0));
        PB_R_Push->setText(QApplication::translate("DrillDialog", "Push", 0));
        PB_R_Approach->setText(QApplication::translate("DrillDialog", "Approach", 0));
        PB_R_HandUp->setText(QApplication::translate("DrillDialog", "Hand Up", 0));
        label_3->setText(QApplication::translate("DrillDialog", "motion parts", 0));
        PB_save->setText(QApplication::translate("DrillDialog", "save", 0));
        PB_done->setText(QApplication::translate("DrillDialog", "done", 0));
        label_RGripper_2->setText(QApplication::translate("DrillDialog", "Data\n"
"Save", 0));
        PB_RGripper_grasp->setText(QApplication::translate("DrillDialog", "Close", 0));
        label_RGripper->setText(QApplication::translate("DrillDialog", "Right\n"
"Gripper", 0));
        PB_RGripper_open->setText(QApplication::translate("DrillDialog", "Open", 0));
        PB_Hold_Approach->setText(QApplication::translate("DrillDialog", "Approach", 0));
        label_HoldDrill->setText(QApplication::translate("DrillDialog", "Hold Drill", 0));
        PB_Hold_Bring->setText(QApplication::translate("DrillDialog", "Bring", 0));
        PB_Hold_Grasp->setText(QApplication::translate("DrillDialog", "Grasp", 0));
        label_Drilling->setText(QApplication::translate("DrillDialog", "Drilling", 0));
        PB_Drill_Ready->setText(QApplication::translate("DrillDialog", "Ready", 0));
        PB_Drill_Approach->setText(QApplication::translate("DrillDialog", "Approach", 0));
        PB_Drill_Down->setText(QApplication::translate("DrillDialog", "Down", 0));
        PB_Drill_Up->setText(QApplication::translate("DrillDialog", "Up", 0));
        label_PutDrill->setText(QApplication::translate("DrillDialog", "Put Drill", 0));
        PB_Put_Lift->setText(QApplication::translate("DrillDialog", "Lift", 0));
        PB_Put_Put->setText(QApplication::translate("DrillDialog", "Put", 0));
        PB_Put_WKRD->setText(QApplication::translate("DrillDialog", "Walkready", 0));
        label_DRILL->setText(QApplication::translate("DrillDialog", "DRILL", 0));
        PB_Hold->setText(QApplication::translate("DrillDialog", "HOLD", 0));
        PB_Drilling->setText(QApplication::translate("DrillDialog", "DRILLING", 0));
        PB_Put->setText(QApplication::translate("DrillDialog", "PUT", 0));
        PB_HandUp->setText(QApplication::translate("DrillDialog", "Hand Up", 0));
        label_LeftHand->setText(QApplication::translate("DrillDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">LEFT HAND</span></p></body></html>", 0));
        PB_Approach->setText(QApplication::translate("DrillDialog", "Approach", 0));
        PB_Push->setText(QApplication::translate("DrillDialog", "Push", 0));
        PB_Pull->setText(QApplication::translate("DrillDialog", "Pull", 0));
        PB_Release->setText(QApplication::translate("DrillDialog", "Release", 0));
        PB_HalfOpen->setText(QApplication::translate("DrillDialog", "half_open", 0));
        PB_QuatClose->setText(QApplication::translate("DrillDialog", "quat_close", 0));
        PB_R_QuatClose->setText(QApplication::translate("DrillDialog", "quat_close", 0));
        PB_R_angle->setText(QApplication::translate("DrillDialog", "angle", 0));
        PB_R_HalfOpen->setText(QApplication::translate("DrillDialog", "half_open", 0));
        PB_angleTest->setText(QApplication::translate("DrillDialog", "AngleTest", 0));
        PB_getCOM->setText(QApplication::translate("DrillDialog", "get COM", 0));
    } // retranslateUi

};

namespace Ui {
    class DrillDialog: public Ui_DrillDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRILLDIALOG_H
