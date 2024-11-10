/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <rev/CANSparkMax.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <frc/TimedRobot.h>
#include <frc/XboxController.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;
  frc::XboxController pilot{1};
  rev::CANSparkMax rightside1 = rev::CANSparkMax(1, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax leftside1 = rev::CANSparkMax(3, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax rightside2 = rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax leftside2 = rev::CANSparkMax(4, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  frc::MotorControllerGroup MotorGroupRight = frc::MotorControllerGroup(rightside1, rightside2);
  frc::MotorControllerGroup MotorGroupLeft = frc::MotorControllerGroup(leftside1, leftside2);

};
