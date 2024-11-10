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

void Robot::TeleopInit() {
  frc::SmartDashboard::PutNumber("FlyWheelSpeed", 0);
  frc::SmartDashboard::PutNumber("BackFlyWheelSpeed", 0);

}
void Robot::TeleopPeriodic() {
  double FlyWheelSpeed = frc::SmartDashboard::GetNumber("FlyWheelSpeed", 0);
  double BackFlyWheelSpeed = frc::SmartDashboard::GetNumber("BackFlyWheelSpeed", 0);


   if(pilot.GetAButton()) {
      leftFlyWheel.Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, FlyWheelSpeed);
      rightFlyWheel.Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, FlyWheelSpeed);
      backSpinTalon.Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, BackFlyWheelSpeed);
   } else {
      leftFlyWheel.Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, 0);
      rightFlyWheel.Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, 0);
      backSpinTalon.Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, 0);
   }
}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
