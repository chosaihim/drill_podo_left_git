#ifndef DRILLDIALOG_H
#define DRILLDIALOG_H

#include <QDialog>
#include "BasicFiles/PODOALDialog.h"
#include "../../share/Headers/Command.h"
#include "CommonHeader.h"
#include "../../share/Headers/ROS_COMMUNICATION.h"

namespace Ui {
class DrillDialog;
}

class DrillDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DrillDialog(QWidget *parent = 0);
    ~DrillDialog();

private slots:

    //WALKREADY
    void on_PB_WalkReady_clicked();

    //GRIPPER
    void on_PB_Gripper_open_clicked();

    void on_PB_Gripper_grasp_clicked();

    //HOLD_DRILL
    void on_PB_Hold_Approach_clicked();

    void on_PB_Hold_Grasp_clicked();

    void on_PB_Hold_Bring_clicked();

    //DRILLING
    void on_PB_Drill_Ready_clicked();

    void on_PB_Drill_Approach_clicked();

    void on_PB_Drill_Down_clicked();

    void on_PB_Drill_Up_clicked();

    //PUT_DRILL
    void on_PB_Put_Lift_clicked();

    void on_PB_Put_Put_clicked();

    void on_PB_Put_WKRD_clicked();

    //EMERGENCY STOP
    void on_PB_STOP_clicked();

    //DEBUGGING TOOLS
    void on_PB_getCOM_clicked();

    void on_PB_Hold_clicked();

    void on_PB_Drilling_clicked();

    void on_PB_Put_clicked();

    void on_PB_HandUp_clicked();

    void on_PB_Approach_clicked();

    void on_PB_Push_clicked();

    void on_PB_Pull_clicked();

    void on_PB_Release_clicked();

    void on_PB_HalfOpen_clicked();

    void on_PB_QuatClose_clicked();

    void on_PB_R_HandUp_clicked();

    void on_PB_R_Approach_clicked();

    void on_PB_R_Push_clicked();

    void on_PB_R_Pull_clicked();

    void on_PB_R_Release_clicked();

    void on_PB_R_HalfOpen_clicked();

    void on_PB_R_QuatClose_clicked();

    void on_PB_RGripper_open_clicked();

    void on_PB_RGripper_grasp_clicked();

    void on_PB_R_angle_clicked();

    void on_PB_angleTest_clicked();

    void on_PB_save_clicked();

    void on_PB_done_clicked();

    void on_PB_gripperTest_clicked();

    void on_PB_setROSCoord_clicked();

    void on_PB_pushSeq_clicked();

    void on_PB_pullSeq_clicked();

    void on_PB_noROS_clicked();

private:
    Ui::DrillDialog *ui;
    LANDialog       *lanData;
    QTimer          *displayTimer;

    int ALNum_ROScommand;
};

#endif // DRILLDIALOG_H
