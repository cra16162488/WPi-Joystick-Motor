/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/


/*
4
5
talonsrx
*/


#pragma once

#include <string>

#include <IterativeRobot.h>
#include <SmartDashboard/SendableChooser.h>
#include <RobotDrive.h>
#include <Joystick.h>
#include <ctre/Phoenix.h>
// #include <VictorSP.h>

class Robot : public frc::IterativeRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

  private:
   RobotDrive *m_drive;

   WPI_TalonSRX m_master_motor_left{4};
   WPI_TalonSRX m_master_motor_right{1};

   WPI_TalonSRX m_slave_motor_left0{5};
   WPI_TalonSRX m_slave_motor_left1{6};
   WPI_TalonSRX m_slave_motor_right0{2};
   WPI_TalonSRX m_slave_motor_right1{3};
   
   Joystick *m_joystick;
};
