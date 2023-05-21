#pragma once
#include <iostream>
namespace miit::line_lib
{
    class color
    {
    public:
        color(const int red = 0, const int green = 0, const int blue = 0);
        int get_red() const;
        int get_green() const;
        int get_blue() const;
    private:
        int red;
        int green;
        int blue;
    };
}
