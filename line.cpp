#include "line.h"
using namespace line_lib;

/**
 * \brief Конструктор класса line.
 * \param point_1 Первая точка линии.
 * \param point_2 Вторая точка линии.
 * \param color Цвет линии.
 * \throw std::out_of_range, если точки point_1 и point_2 совпадают.
 */
line::line(const point point_1, const point point_2, const line_col::color color)
    : point_1(point_1), point_2(point_2), color(color)
{
    if (point_1 == point_2)
    {
        throw std::out_of_range("Not line");
    }
}

/**
 * \brief Возвращает первую точку линии.
 * \return Первая точка линии.
 */
point line::get_point_1() const
{
    return this->point_1;
}

/**
 * \brief Возвращает вторую точку линии.
 * \return Вторая точка линии.
 */
point line::get_point_2() const
{
    return this->point_2;
}

/**
 * \brief Возвращает цвет линии.
 * \return Цвет линии.
 */
line_col::color line::get_color() const
{
    return this->color;
}

/**
 * \brief Перегруженный оператор вывода в поток.
 * \param out Поток вывода.
 * \param line Линия для вывода.
 * \return Поток вывода.
 */
std::ostream& operator<<(std::ostream& out, const line& line)
{
    out << "line(" << line.get_point_1() << ", " << line.get_point_2() << ", " << line.get_color() << ")";
    return out;
}
