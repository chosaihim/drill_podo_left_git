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
    QPushButton *PB_getCOM;
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
    QFrame *RIGHT_HAND;
    QPushButton *PB_R_HandUp;
    QLabel *label_RightHand;
    QPushButton *PB_R_Approach;
    QPushButton *PB_R_Push;
    QPushButton *PB_R_Pull;
    QPushButton *PB_R_Release;
    QPushButton *PB_R_HalfOpen;
    QPushButton *PB_R_QuatClose;
    QFrame *frame_gripper_right;
    QPushButton *PB_RGripper_grasp;
    QLabel *label_RGripper;
    QPushButton *PB_RGripper_open;
    QPushButton *PB_R_angle;
    QPushButton *PB_angleTest;

    void setupUi(QDialog *DrillDialog)
    {
        if (DrillDialog->objectName().isEmpty())
            DrillDialog->setObjectName(QStringLiteral("DrillDialog"));
        DrillDialog->resize(650, 611);
        frame_gripper = new QFrame(DrillDialog);
        frame_gripper->setObjectName(QStringLiteral("frame_gripper"));
        frame_gripper->setGeometry(QRect(120, 10, 191, 71));
        frame_gripper->setFrameShape(QFrame::StyledPanel);
        frame_gripper->setFrameShadow(QFrame::Raised);
        PB_Gripper_grasp = new QPushButton(frame_gripper);
        PB_Gripper_grasp->setObjectName(QStringLiteral("PB_Gripper_grasp"));
        PB_Gripper_grasp->setGeometry(QRect(100, 40, 80, 22));
        label_Gripper_right = new QLabel(frame_gripper);
        label_Gripper_right->setObjectName(QStringLiteral("label_Gripper_right"));
        label_Gripper_right->setGeometry(QRect(10, 10, 171, 21));
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
        PB_WalkReady->setGeometry(QRect(10, 10, 101, 71));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        PB_WalkReady->setFont(font1);
        PB_STOP = new QPushButton(DrillDialog);
        PB_STOP->setObjectName(QStringLiteral("PB_STOP"));
        PB_STOP->setGeometry(QRect(500, 50, 91, 151));
        PB_STOP->setFont(font);
        PB_getCOM = new QPushButton(DrillDialog);
        PB_getCOM->setObjectName(QStringLiteral("PB_getCOM"));
        PB_getCOM->setGeometry(QRect(500, 10, 91, 31));
        frame_DRILL = new QFrame(DrillDialog);
        frame_DRILL->setObjectName(QStringLiteral("frame_DRILL"));
        frame_DRILL->setGeometry(QRect(570, 580, 371, 241));
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
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_HoldDrill->setFont(font2);
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
        label_Drilling->setFont(font2);
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
        label_PutDrill->setFont(font2);
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
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_DRILL->setFont(font3);
        PB_Hold = new QPushButton(frame_DRILL);
        PB_Hold->setObjectName(QStringLiteral("PB_Hold"));
        PB_Hold->setGeometry(QRect(10, 40, 111, 31));
        PB_Drilling = new QPushButton(frame_DRILL);
        PB_Drilling->setObjectName(QStringLiteral("PB_Drilling"));
        PB_Drilling->setGeometry(QRect(130, 40, 111, 31));
        PB_Put = new QPushButton(frame_DRILL);
        PB_Put->setObjectName(QStringLiteral("PB_Put"));
        PB_Put->setGeometry(QRect(250, 40, 111, 31));
        LeftHand = new QFrame(DrillDialog);
        LeftHand->setObjectName(QStringLiteral("LeftHand"));
        LeftHand->setGeometry(QRect(10, 470, 461, 131));
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
        RIGHT_HAND = new QFrame(DrillDialog);
        RIGHT_HAND->setObjectName(QStringLiteral("RIGHT_HAND"));
        RIGHT_HAND->setGeometry(QRect(10, 90, 461, 131));
        RIGHT_HAND->setFrameShape(QFrame::StyledPanel);
        RIGHT_HAND->setFrameShadow(QFrame::Raised);
        PB_R_HandUp = new QPushButton(RIGHT_HAND);
        PB_R_HandUp->setObjectName(QStringLiteral("PB_R_HandUp"));
        PB_R_HandUp->setGeometry(QRect(20, 40, 80, 22));
        label_RightHand = new QLabel(RIGHT_HAND);
        label_RightHand->setObjectName(QStringLiteral("label_RightHand"));
        label_RightHand->setGeometry(QRect(10, 10, 141, 21));
        PB_R_Approach = new QPushButton(RIGHT_HAND);
        PB_R_Approach->setObjectName(QStringLiteral("PB_R_Approach"));
        PB_R_Approach->setGeometry(QRect(20, 100, 80, 22));
        PB_R_Push = new QPushButton(RIGHT_HAND);
        PB_R_Push->setObjectName(QStringLiteral("PB_R_Push"));
        PB_R_Push->setGeometry(QRect(110, 40, 80, 22));
        PB_R_Pull = new QPushButton(RIGHT_HAND);
        PB_R_Pull->setObjectName(QStringLiteral("PB_R_Pull"));
        PB_R_Pull->setGeometry(QRect(110, 70, 80, 22));
        PB_R_Release = new QPushButton(RIGHT_HAND);
        PB_R_Release->setObjectName(QStringLiteral("PB_R_Release"));
        PB_R_Release->setGeometry(QRect(110, 100, 80, 22));
        PB_R_HalfOpen = new QPushButton(RIGHT_HAND);
        PB_R_HalfOpen->setObjectName(QStringLiteral("PB_R_HalfOpen"));
        PB_R_HalfOpen->setGeometry(QRect(280, 100, 80, 22));
        PB_R_QuatClose = new QPushButton(RIGHT_HAND);
        PB_R_QuatClose->setObjectName(QStringLiteral("PB_R_QuatClose"));
        PB_R_QuatClose->setGeometry(QRect(370, 100, 80, 22));
        frame_gripper_right = new QFrame(RIGHT_HAND);
        frame_gripper_right->setObjectName(QStringLiteral("frame_gripper_right"));
        frame_gripper_right->setGeometry(QRect(260, 20, 191, 71));
        frame_gripper_right->setFrameShape(QFrame::StyledPanel);
        frame_gripper_right->setFrameShadow(QFrame::Raised);
        PB_RGripper_grasp = new QPushButton(frame_gripper_right);
        PB_RGripper_grasp->setObjectName(QStringLiteral("PB_RGripper_grasp"));
        PB_RGripper_grasp->setGeometry(QRect(100, 40, 80, 22));
        label_RGripper = new QLabel(frame_gripper_right);
        label_RGripper->setObjectName(QStringLiteral("label_RGripper"));
        label_RGripper->setGeometry(QRect(10, 10, 171, 21));
        label_RGripper->setFont(font);
        PB_RGripper_open = new QPushButton(frame_gripper_right);
        PB_RGripper_open->setObjectName(QStringLiteral("PB_RGripper_open"));
        PB_RGripper_open->setGeometry(QRect(10, 40, 80, 22));
        PB_R_angle = new QPushButton(RIGHT_HAND);
        PB_R_angle->setObjectName(QStringLiteral("PB_R_angle"));
        PB_R_angle->setGeometry(QRect(20, 70, 80, 22));
        PB_angleTest = new QPushButton(DrillDialog);
        PB_angleTest->setObjectName(QStringLiteral("PB_angleTest"));
        PB_angleTest->setGeometry(QRect(50, 260, 80, 22));

        retranslateUi(DrillDialog);

        QMetaObject::connectSlotsByName(DrillDialog);
    } // setupUi

    void retranslateUi(QDialog *DrillDialog)
    {
        DrillDialog->setWindowTitle(QApplication::translate("DrillDialog", "Dialog", 0));
        PB_Gripper_grasp->setText(QApplication::translate("DrillDialog", "Close", 0));
        label_Gripper_right->setText(QApplication::translate("DrillDialog", "Gripper", 0));
        PB_Gripper_open->setText(QApplication::translate("DrillDialog", "Open", 0));
        PB_WalkReady->setText(QApplication::translate("DrillDialog", "Walk\n"
"Ready", 0));
        PB_STOP->setText(QApplication::translate("DrillDialog", "STOP", 0));
        PB_getCOM->setText(QApplication::translate("DrillDialog", "get COM", 0));
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
        PB_R_HandUp->setText(QApplication::translate("DrillDialog", "Hand Up", 0));
        label_RightHand->setText(QApplication::translate("DrillDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">RIGHT HAND</span></p></body></html>", 0));
        PB_R_Approach->setText(QApplication::translate("DrillDialog", "Approach", 0));
        PB_R_Push->setText(QApplication::translate("DrillDialog", "Push", 0));
        PB_R_Pull->setText(QApplication::translate("DrillDialog", "Pull", 0));
        PB_R_Release->setText(QApplication::translate("DrillDialog", "Release", 0));
        PB_R_HalfOpen->setText(QApplication::translate("DrillDialog", "half_open", 0));
        PB_R_QuatClose->setText(QApplication::translate("DrillDialog", "quat_close", 0));
        PB_RGripper_grasp->setText(QApplication::translate("DrillDialog", "Close", 0));
        label_RGripper->setText(QApplication::translate("DrillDialog", "Gripper-RIGHT", 0));
        PB_RGripper_open->setText(QApplication::translate("DrillDialog", "Open", 0));
        PB_R_angle->setText(QApplication::translate("DrillDialog", "angle", 0));
        PB_angleTest->setText(QApplication::translate("DrillDialog", "AngleTest", 0));
    } // retranslateUi

};

namespace Ui {
    class DrillDialog: public Ui_DrillDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRILLDIALOG_H
