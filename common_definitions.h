//
// Created by nikolay on 17 of January, 2020.
//

#include <utility>

#ifndef CONVEX_ROBOT_KINEMATICS_COMMON_DEFINITIONS_H
#define CONVEX_ROBOT_KINEMATICS_COMMON_DEFINITIONS_H

struct Point
{
    long long x, y;
};

Point operator+(Point a, Point b);

typedef std::pair<Point, Point> Rectangle;

#endif //CONVEX_ROBOT_KINEMATICS_COMMON_DEFINITIONS_H
