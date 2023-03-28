#include "point.h"

point::point(double value_x, double value_y)
{
    this -> x = value_x;
    this -> y = value_y;
}


void point::print()
{
    std::cout << "(" << x << ", " << y << ")\n";
}