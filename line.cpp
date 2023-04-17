#include "line.h"

miit::line_lib::line::line(miit::line_lib::point point_1, miit::line_lib::point point_2, miit::line_lib::colour colour)
	:point_1(point_1), point_2(point_2), colour(colour)
{
}

miit::line_lib::point miit::line_lib::line::get_point_1() const
{
	return this->point_1;
}

miit::line_lib::point miit::line_lib::line::get_point_2() const
{
	return this->point_2;
}

miit::line_lib::colour miit::line_lib::line::get_colour() const
{
	return this->colour;
}
