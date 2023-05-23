#include "point.h"
#include "help_math.h"
using namespace line_lib;

point::point(const double value_x, const double value_y)
	:x(value_x), y(value_y)
{
}

double point::get_x() const
{
	return this->x;
}

double point::get_y() const
{
	return this->y;
}

bool line_lib::operator==(const point& lha, const point& rha)
{
	return (miit::help_math::is_double_equal(lha.get_x(), rha.get_x()) && miit::help_math::is_double_equal(lha.get_y(), rha.get_y()));
}
