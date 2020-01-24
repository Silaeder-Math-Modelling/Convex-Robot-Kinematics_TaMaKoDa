//
// Created by nikolay on 1/24/20.
//
#include "common_definitions.h"

Point operator+(Point a, Point b)
{
    return {a.x + b.x, a.y + b.y};
}
