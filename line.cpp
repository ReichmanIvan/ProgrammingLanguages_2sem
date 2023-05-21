#include "line.h"

miit::line_lib::line::line(const miit::line_lib::point& point_1, const miit::line_lib::point& point_2, const miit::line_lib::color& color)
	:point_1(point_1), point_2(point_2), color(color)
{
	if (point_1 == point_2)
	{
		throw std::out_of_range("Not line");
	}
}

miit::line_lib::point miit::line_lib::line::get_point_1() const
{
	return this->point_1;
}

miit::line_lib::point miit::line_lib::line::get_point_2() const
{
	return this->point_2;
}

miit::line_lib::color miit::line_lib::line::get_color() const
{
	return this->color;
}
