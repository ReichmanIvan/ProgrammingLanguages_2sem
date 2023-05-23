#include "line.h"
using namespace line_lib;

line::line(const point point_1, const point point_2, const line_col::color color)
{
	if (point_1 == point_2)
	{
		throw std::out_of_range("Not line");
	}
}

point line::get_point_1() const
{
	return this->point_1;
}

point line::get_point_2() const
{
	return this->point_2;
}

line_col::color line::get_color() const
{
	return this->color;
}
