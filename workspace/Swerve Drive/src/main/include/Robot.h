// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/XboxController.h>
#include <math.h>
#include <rev/CANSparkMax.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;
  void SimulationInit() override;
  void SimulationPeriodic() override;

  frc::XboxController pilot = frc::XboxController(0); 

  rev::CANSparkMax motorFL = rev::CANSparkMax(1, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax motorFR = rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax motorBL = rev::CANSparkMax(3, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax motorBR = rev::CANSparkMax(4, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax motorFL2 = rev::CANSparkMax(5, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax motorFR2 = rev::CANSparkMax(6, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax motorBL2 = rev::CANSparkMax(7, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::CANSparkMax motorBR2 = rev::CANSparkMax(8, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
  rev::SparkMaxRelativeEncoder motorFLEncoder = motorFL.GetEncoder();
  rev::SparkMaxRelativeEncoder motorFREncoder = motorFR.GetEncoder();
  rev::SparkMaxRelativeEncoder motorBLEncoder = motorBL.GetEncoder();
  rev::SparkMaxRelativeEncoder motorBREncoder = motorBR.GetEncoder();
  rev::SparkMaxRelativeEncoder motorFL2Encoder = motorFL2.GetEncoder();
  rev::SparkMaxRelativeEncoder motorFR2Encoder = motorFR2.GetEncoder();
  rev::SparkMaxRelativeEncoder motorBL2Encoder = motorBL2.GetEncoder();
  rev::SparkMaxRelativeEncoder motorBR2Encoder = motorBR2.GetEncoder();

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
};
