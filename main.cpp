#include <iostream>
#include "..\line_lib\line.h"
using namespace line_lib;

int main()
{
	auto point_1 = point(1.5, 2.5);
	std::cout << point_1.get_x() << std::endl;
	line_col::color color_1 = line_col::color(123, 231, 213);
	std::cout << color_1.get_blue();
	return 0;
}
