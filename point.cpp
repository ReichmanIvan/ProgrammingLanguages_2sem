#include "point.h"
#include "help_mathr.h"

miit::line_lib::point::point(const double value_x, const double value_y)
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

bool miit::line_lib::operator==(const point& lha, const point& rha)
{
	return (miit::help_math::is_double_equal(lha.x, rha.x) && miit::help_math::is_double_equal(lha.y, rha.y));
}
