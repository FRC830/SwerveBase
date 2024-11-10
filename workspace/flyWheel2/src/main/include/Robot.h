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
#include <frc/XboxController.h>
#include <frc/shuffleboard/Shuffleboard.h>
#include <frc/shuffleboard/Shuffleboardtab.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/smartdashboard/SendableChooser.h>



class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;
  
  frc::XboxController pilot = frc::XboxController {0};

  ctre::phoenix::motorcontrol::can::TalonFX leftFlyWheel {4};
  ctre::phoenix::motorcontrol::can::TalonFX rightFlyWheel {9};
  ctre::phoenix::motorcontrol::can::TalonFX backSpinTalon {5};
};
