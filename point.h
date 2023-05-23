#pragma once
#include <iostream>
#include "help_math.h"

namespace line_lib
{
    class point
    {
    public:
        point(const double value_x = 0.0, const double value_y = 0.0);
        double get_x() const;
        double get_y() const;
        friend bool operator == (const point& lha, const point& rha);
    private:
        double x;
        double y;
    };
}
