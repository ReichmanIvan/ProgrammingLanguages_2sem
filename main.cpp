#include <iostream>
#include "..\line_lib\point.h"
#include "..\line_lib\color.h"
using namespace miit::line_lib;

int main()
{
	auto point_1 = point(1.5, 2.5);
	std::cout << point_1.get_x() << std::endl;
	auto color_1 = color(123, 231, 213);
	std::cout << color_1.get_blue();
	return 0;
}
