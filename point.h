#pragma once
#include <iostream>

struct point 
{
    public:
        point();
        double x;
        double y;
        point(double value_x, double value_y);
        void print();
};