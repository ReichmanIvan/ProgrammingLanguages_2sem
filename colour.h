#pragma once
#include <iostream>
namespace miit::line_lib
{
    class colour
    {
    public:
        colour(int red = 0, int green = 0, int blue = 0);
        int get_red() const;
        int get_green() const;
        int get_blue() const;
    private:
        int red;
        int green;
        int blue;
    };
}
