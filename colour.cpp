#include "colour.h"

miit::line_lib::colour::colour(int red, int green, int blue)
	:red(red), green(green), blue(blue)
{
}

int miit::line_lib::colour::get_red() const
{
	return this->red;
}

int miit::line_lib::colour::get_green() const
{
	return this->green;
}

int miit::line_lib::colour::get_blue() const
{
	return this->blue;
}
