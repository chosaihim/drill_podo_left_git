#ifndef COMMAND_H
#define COMMAND_H

enum ROSCOMMAND_ALCOMMAND
{
    COMMAND_BREAK = 100,
    BASICCMD_HOMEPOS,
    BASICCMD_WALKREADY,
    BASICCMD_GRIPPER,
    BASICCMD_SAVE,
    MANUALCMD_JOYON,
    MANUALCMD_JOYMOVE,
    BASICCMD_DRILL,
};

enum
{
    GUI_GRIPPER_BREAK = 0,
    GUI_GRIPPER_STOP,
    GUI_GRIPPER_OPEN,
    GUI_GRIPPER_CLOSE,
    GUI_GRIPPER_OPEN_HALF,
    GUI_GRIPPER_CLOSE_QUATER,
};

enum
{
    GUI_GRIPPER_BOTH = 0,
    GUI_GRIPPER_RIGHT,
    GUI_GRIPPER_LEFT
};

enum
{
    JOY_OFF = 0,
    JOY_ON,
    JOY_START,
    JOY_STOP
};

enum
{
    DRILL_NOTHING,
    //WAIT
    DRILL_WAIT,
    //HOLD
    DRILL_HOLD,
    DRILL_HOLD_APPROACH,
    DRILL_HOLD_GRASP,
    DRILL_HOLD_GRASP_CLOSE,
    DRILL_HOLD_BRING,
    //DRILLING
    DRILL_DRILL,
    DRILL_DRILL_READY,
    DRILL_DRILL_APPROACH,
    DRILL_DRILL_DOWN,
    DRILL_DRILL_UP,
    //PUT
    DRILL_PUT,
    DRILL_PUT_LIFT,
    DRILL_PUT_PUT,
    DRILL_PUT_PUT_OPEN,
    DRILL_PUT_PRE_WKRD,
    DRILL_PUT_WKRD,
    //EXTRA
    DRILL_STOP,
    DRILL_GETCOM,

    //LEFT
    LEFT_HANDUP,
    LEFT_APPROACH,
    LEFT_PUSH,
    LEFT_PULL,
    LEFT_RELEASE,
};

#endif // COMMAND_H
