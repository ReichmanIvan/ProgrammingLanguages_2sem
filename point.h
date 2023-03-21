#pragma once
#include <iostream>

class Point 
{
    public:
        Point();
        double x;
        double y;
        Point(double valueX, double valueY);
        void Print();
};