#include "point.h"

miit::line_lib::point::point(double value_x, double value_y)
	:x(value_x), y(value_y)
{
}

double miit::line_lib::point::get_x() const
{
	return this->x;
}

double miit::line_lib::point::get_y() const
{
	return this->y;
}
