#pragma once
#include <iostream>
#include "point.h"
#include "color.h"
using namespace line_lib;

    class line
    {
    public:
        line(const point point_1, const point point_2, const line_col::color color);
        point get_point_1() const;
        point get_point_2() const;
        line_col::color get_color() const;
        friend std::ostream& operator<< (std::ostream& out, const line& line);
    private:
        point point_1;
        point point_2;
        line_col::color color;
    };

