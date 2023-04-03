#include <iostream>
#include "..\line_lib\point.h"
#include "..\line_lib\colour.h"
using namespace miit::line_lib;

int main()
{
	auto point_1 = point(1.5, 2.5);
	std::cout << point_1.get_x() << std::endl;
	auto colour_1 = colour(123, 231, 213);
	std::cout << colour_1.get_blue();
	return 0;
}
