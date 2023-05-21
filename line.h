#pragma once
#include <iostream>
#include "point.h"
#include "color.h"
namespace miit::line_lib
{
    class line
    {
    public:
        line(const point& point_1, const point& point_2, const color& color);
        point get_point_1() const;
        point get_point_2() const;
        color get_color() const;
    private:
        point point_1;
        point point_2;
        color color;
    };
}
