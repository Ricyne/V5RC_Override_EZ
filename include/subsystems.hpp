#pragma once

#include "EZ-Template/api.hpp"
#include "EZ-Template/piston.hpp"
#include "api.h"
#include "pros/motor_group.hpp"
#include "pros/motors.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

inline pros::MotorGroup intake_motors({10,11});

inline ez::Piston silktouch('A'); 