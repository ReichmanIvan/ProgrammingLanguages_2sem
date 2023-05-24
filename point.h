#pragma once
#include <iostream>
#include "help_math.h"

namespace line_lib
{
    struct point
    {
        point(const double value_x = 0.0, const double value_y = 0.0);
        friend bool operator == (const point& lha, const point& rha);
        friend std::ostream& operator<< (std::ostream& out, const point& point);
        double x;
        double y;
    };
}

