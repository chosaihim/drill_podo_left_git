#include "drilldialog.h"
#include "ui_drilldialog.h"

#include "CommonHeader.h"
#include "BasicFiles/PODOALDialog.h"

DrillDialog::DrillDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DrillDialog)
{
    ui->setupUi(this);
    ALNum_ROScommand = PODOALDialog::GetALNumFromFileName("ROScommand");

    displayTimer = new QTimer(this);
    connect(displayTimer, SIGNAL(timeout()), this, SLOT(DisplayUpdate()));
    displayTimer->start(50);//50
}

DrillDialog::~DrillDialog()
{
    delete ui;
}

//WALKREADY
void DrillDialog::on_PB_WalkReady_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_WALKREADY;
    pLAN->SendCommand(cmd);
}

//GRIPPER
void DrillDialog::on_PB_Gripper_open_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_GRIPPER;
    cmd.COMMAND_DATA.USER_PARA_INT[1] = GUI_GRIPPER_BOTH;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = GUI_GRIPPER_OPEN;
    cmd.COMMAND_DATA.USER_PARA_DOUBLE[0] = 0.;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Gripper_grasp_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_GRIPPER;
    cmd.COMMAND_DATA.USER_PARA_INT[1] = GUI_GRIPPER_BOTH;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = GUI_GRIPPER_CLOSE;
    cmd.COMMAND_DATA.USER_PARA_DOUBLE[0] = 0.;
    pLAN->SendCommand(cmd);
}

//HOLD DRILL
void DrillDialog::on_PB_Hold_Approach_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_HOLD_APPROACH;
    pLAN->SendCommand(cmd);

}

void DrillDialog::on_PB_Hold_Grasp_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_HOLD_GRASP;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Hold_Bring_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_HOLD_BRING;
    pLAN->SendCommand(cmd);
}

//DRILLING
void DrillDialog::on_PB_Drill_Ready_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_DRILL_READY;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Drill_Approach_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_DRILL_APPROACH;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Drill_Down_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_DRILL_DOWN;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Drill_Up_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_DRILL_UP;
    pLAN->SendCommand(cmd);
}


//PUT DRILL
void DrillDialog::on_PB_Put_Lift_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_PUT_LIFT;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Put_Put_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_PUT_PUT;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Put_WKRD_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_PUT_PRE_WKRD;
    pLAN->SendCommand(cmd);
}


//EMERGENCY STOP
void DrillDialog::on_PB_STOP_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_STOP;
    pLAN->SendCommand(cmd);
}

//DEBUGGING TOOLS
void DrillDialog::on_PB_getCOM_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_GETCOM;
    pLAN->SendCommand(cmd);
}


//COMBINED BUTTONS
void DrillDialog::on_PB_Hold_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_HOLD;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Drilling_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_DRILL;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Put_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = DRILL_PUT;
    pLAN->SendCommand(cmd);
}


//LeftHand
void DrillDialog::on_PB_HandUp_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = LEFT_HANDUP;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Approach_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = LEFT_APPROACH;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Push_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = LEFT_PUSH;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Pull_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = LEFT_PULL;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_Release_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = LEFT_RELEASE;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_HalfOpen_clicked()
{

    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_GRIPPER;
    cmd.COMMAND_DATA.USER_PARA_INT[1] = GUI_GRIPPER_LEFT;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = GUI_GRIPPER_OPEN_HALF;
    cmd.COMMAND_DATA.USER_PARA_DOUBLE[0] = 0.;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_QuatClose_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_GRIPPER;
    cmd.COMMAND_DATA.USER_PARA_INT[1] = GUI_GRIPPER_LEFT;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = GUI_GRIPPER_CLOSE_QUATER;
    cmd.COMMAND_DATA.USER_PARA_DOUBLE[0] = 0.;
    pLAN->SendCommand(cmd);
}

//RIGHT
void DrillDialog::on_PB_R_HandUp_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = RIGHT_HANDUP;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_R_Approach_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = RIGHT_APPROACH;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_R_Push_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = RIGHT_PUSH;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_R_Pull_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = RIGHT_PULL;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_R_Release_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = RIGHT_RELEASE;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_R_HalfOpen_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_GRIPPER;
    cmd.COMMAND_DATA.USER_PARA_INT[1] = GUI_GRIPPER_RIGHT;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = GUI_GRIPPER_OPEN_HALF;
    cmd.COMMAND_DATA.USER_PARA_DOUBLE[0] = 0.;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_R_QuatClose_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_GRIPPER;
    cmd.COMMAND_DATA.USER_PARA_INT[1] = GUI_GRIPPER_RIGHT;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = GUI_GRIPPER_CLOSE_QUATER;
    cmd.COMMAND_DATA.USER_PARA_DOUBLE[0] = 0.;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_RGripper_open_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_GRIPPER;
    cmd.COMMAND_DATA.USER_PARA_INT[1] = GUI_GRIPPER_RIGHT;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = GUI_GRIPPER_OPEN;
    cmd.COMMAND_DATA.USER_PARA_DOUBLE[0] = 0.;
    pLAN->SendCommand(cmd);

}

void DrillDialog::on_PB_RGripper_grasp_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_GRIPPER;
    cmd.COMMAND_DATA.USER_PARA_INT[1] = GUI_GRIPPER_RIGHT;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = GUI_GRIPPER_CLOSE;
    cmd.COMMAND_DATA.USER_PARA_DOUBLE[0] = 0.;
    pLAN->SendCommand(cmd);
}

void DrillDialog::on_PB_R_angle_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = ANGLE_TEST;
    pLAN->SendCommand(cmd);

}

void DrillDialog::on_PB_angleTest_clicked()
{
    USER_COMMAND cmd;
    cmd.COMMAND_TARGET = ALNum_ROScommand;
    cmd.COMMAND_DATA.USER_COMMAND = BASICCMD_DRILL;
    cmd.COMMAND_DATA.USER_PARA_INT[0] = SET_ANGLE_TEST;
    pLAN->SendCommand(cmd);
}
