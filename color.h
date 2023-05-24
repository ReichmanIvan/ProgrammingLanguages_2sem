#pragma once
#include <iostream>
#include "point.h"
namespace line_col 
{
    class color
    {
    public:
        color(const int red = 0, const int green = 0, const int blue = 0);
        int get_red() const;
        int get_green() const;
        int get_blue() const;
        friend std::ostream& operator<< (std::ostream& out, const color& color);
    private:
        int red;
        int green;
        int blue;
    };
}



