#include "color.h"
using namespace line_col;

/**
 * \brief Конструктор класса color.
 * \param red Значение красного цвета.
 * \param green Значение зеленого цвета.
 * \param blue Значение синего цвета.
 * \throw std::out_of_range, если значения цветов выходят за пределы диапазона [0, 255].
 */
color::color(const int red, const int green, const int blue)
    : red(red), green(green), blue(blue)
{
    if (red < 0 || red > 255 || green < 0 || green > 255 || blue < 0 || blue > 255)
    {
        throw std::out_of_range("Not correct color");
    }
}

/**
 * \brief Получает значение красного цвета.
 * \return Значение красного цвета.
 */
int color::get_red() const
{
    return this->red;
}

/**
 * \brief Получает значение зеленого цвета.
 * \return Значение зеленого цвета.
 */
int color::get_green() const
{
    return this->green;
}

/**
 * \brief Получает значение синего цвета.
 * \return Значение синего цвета.
 */
int color::get_blue() const
{
    return this->blue;
}

/**
 * \brief Перегруженный оператор вывода в поток.
 * \param out Поток вывода.
 * \param color Цвет для вывода.
 * \return Поток вывода.
 */
std::ostream& line_col::operator<<(std::ostream& out, const color& color)
{
    out << "color(" << color.get_red() << ", " << color.get_green() << "," << color.get_blue() << ")";
    return out;
}
