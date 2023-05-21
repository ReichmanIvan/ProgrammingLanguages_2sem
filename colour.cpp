#include "color.h"

miit::line_lib::color::color(const int red, const int green, const int blue)
	:red(red), green(green), blue(blue)
{
	if (red < 0 || red > 255 || green < 0 || green > 255 || blue < 0 || blue > 255)
	{
		throw std::out_of_range("Not correct color");
	}
}

int miit::line_lib::color::get_red() const
{
	return this->red;
}

int miit::line_lib::color::get_green() const
{
	return this->green;
}

int miit::line_lib::color::get_blue() const
{
	return this->blue;
}
