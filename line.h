#pragma once
#include <iostream>
#include "point.h"
#include "colour.h"
namespace miit::line_lib
{
    class line
    {
    public:
        line(point point_1, point point_2, colour colour);
        point get_point_1() const;
        point get_point_2() const;
        colour get_colour() const;
    private:
        point point_1;
        point point_2;
        colour colour;
    };
}
