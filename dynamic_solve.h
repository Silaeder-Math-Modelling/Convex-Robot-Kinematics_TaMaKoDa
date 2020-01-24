//
// Created by nikolay on 17 of January, 2020.
//
#include "common_definitions.h"
#include "project_math.h"

#ifndef CONVEX_ROBOT_KINEMATICS_DYNAMIC_CALCULATOR_H
#define CONVEX_ROBOT_KINEMATICS_DYNAMIC_CALCULATOR_H

bool possible_to_pass(Rectangle field, const std::vector<Rectangle> &obstacles, Point robot, Point start, Point finish);

#endif //CONVEX_ROBOT_KINEMATICS_DYNAMIC_CALCULATOR_H
