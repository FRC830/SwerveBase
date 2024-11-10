/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/TimedRobot.h>
#include <ctre/phoenix/motorcontrol/can/TalonSRX.h>
#include <ctre/phoenix/motorcontrol/can/TalonFX.h>
#include <ctre/phoenix/motorcontrol/can/VictorSPX.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;
  
  frc::XboxController pilot frc::XboxController(0);

  ctre::phoenix::motorcontrol::can::TalonFX leftFlyWheel {4};
  ctre::phoenix::motorcontrol::can::TalonFX rightFlyWheel {9};
  ctre::phoenix::motorcontrol::can::TalonFX backSpinTalon {5};

  frc::XboxController pilot (0);
  rev::CANSparkMax rightside1(1, rev::CANSparkMaxLowLevel::kBrushless);
  rev::CANSparkMax leftside1(2, rev::CANSparkMaxLowLevel::kBrushless);
  rev::CANSparkMax rightside2(3, rev::CANSparkMaxLowLevel::kBrushless);
  rev::CANSparkMax leftside2(4, rev::CANSparkMaxLowLevel::kBrushless);
  frc::MotorControllerGroup MotorGroupRight = frc::MotorControllerGroup(rightside1, rightside2);
  frc::MotorControllerGroup MotorGroupLeft = frc::MotorControllerGroup(leftside1, leftside2);

};
