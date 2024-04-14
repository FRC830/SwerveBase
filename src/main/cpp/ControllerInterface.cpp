#include "ControllerInterface.h"

void ControllerInterface::UpdateRobotControlData(RobotControlData &controlData)
{
    UpdateSwerveInput(controlData);
};

void ControllerInterface::UpdateSwerveInput(RobotControlData &controlData)
{
    controlData.swerveInput.slowMode = m_pilot.GetLeftBumper();
  
    controlData.swerveInput.xTranslation = -m_pilot.GetLeftY();
    controlData.swerveInput.yTranslation = -m_pilot.GetLeftX();
    controlData.swerveInput.rotation = -m_pilot.GetRightX();

    if (controlData.swerveInput.slowMode)
    {
        controlData.swerveInput.xTranslation *= m_slowmodefactor;
        controlData.swerveInput.yTranslation *= m_slowmodefactor;
        controlData.swerveInput.rotation *= m_slowmodefactor;
    }

    if (m_pilot.GetLeftTriggerAxis() > 0.2 && m_pilot.GetRightTriggerAxis() > 0.2)
    {
        controlData.swerveInput.resetGyroZeroHeading = true;
    }
    else
    {
        controlData.swerveInput.resetGyroZeroHeading = false;
    }
};
