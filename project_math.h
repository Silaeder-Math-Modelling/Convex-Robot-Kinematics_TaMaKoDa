//
// Created by nikolay on 17 of January, 2020.
//
#include <vector>

#include "common_definitions.h"

#ifndef CONVEX_ROBOT_KINEMATICS_PROJECT_MATH_H
#define CONVEX_ROBOT_KINEMATICS_PROJECT_MATH_H

bool can_stay_here(const std::vector<Rectangle> &obstacles, Rectangle field, Point robot, Point pos);

#endif //CONVEX_ROBOT_KINEMATICS_PROJECT_MATH_H
