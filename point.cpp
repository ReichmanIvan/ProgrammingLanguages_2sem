#include "point.h"
#include "help_math.h"
#include <sstream>
using namespace line_lib;

point::point(const double value_x, const double value_y)
	:x(value_x), y(value_y)
{
}

bool line_lib::operator==(const point& lha, const point& rha)
{
	return (miit::help_math::is_double_equal(lha.x, rha.x) && miit::help_math::is_double_equal(lha.y, rha.y));
}

std::ostream& line_lib::operator<<(std::ostream& out, const point& point)
{
	out << "Point(" << point.x << ", " << point.y << ")";
	return out;
}

std::wstring ToString(point* point) 
{
	std::wstringstream buffer;
	buffer << L"{ ";
	buffer << point->x << L" " << point->y << L" }";
	return buffer.str();
}
