/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"
#include <frc/XboxController.h>



void Robot::RobotInit() {}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {
   double ourVariableY = pilot.GetRightStickY();
   double ourVariableX = pilot.GetLeftStickX();

   if(pilot.GetAButton()) {
      leftFlyWheel.set(0.6);
      rightFlyWheel.set(0.6);
      backSpinTalon.set(0.6);
   } else {
      leftFlyWheel.set(0);
      rightFlyWheel.set(0);
      backSpinTalon.set(0);
   }

    


   MotorGroupLeft.set(ourVariableX);
   MotorGroupRight.set(ourVariableY);
}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
