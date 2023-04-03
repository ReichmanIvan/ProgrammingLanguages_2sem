#pragma once
#include <iostream>
namespace miit::line_lib
{
    class point
    {
    public:
        point(double value_x = 0.0, double value_y = 0.0);
        double get_x() const;
        double get_y() const;
    private:
        double x;
        double y;
    };
}

