#include "point.h"
#include "help_math.h"
#include <sstream>
using namespace line_lib;

/**
 * \struct point
 * \brief Структура, представляющая точку в двумерном пространстве.
 */
point::point(const double value_x, const double value_y)
    : x(value_x), y(value_y)
{
}

/**
 * \brief Перегруженный оператор сравнения.
 * \param lha Левый операнд.
 * \param rha Правый операнд.
 * \return true, если точки равны; false в противном случае.
 */
bool line_lib::operator==(const point& lha, const point& rha)
{
    return (miit::help_math::is_double_equal(lha.x, rha.x) && miit::help_math::is_double_equal(lha.y, rha.y));
}

/**
 * \brief Перегруженный оператор вывода в поток.
 * \param out Поток вывода.
 * \param point Точка для вывода.
 * \return Поток вывода.
 */
std::ostream& line_lib::operator<<(std::ostream& out, const point& point)
{
    out << "Point(" << point.x << ", " << point.y << ")";
    return out;
}

/**
 * \brief Преобразует указатель на объект point в строку.
 * \param point Указатель на объект point.
 * \return Строка, представляющая точку в формате "{ x y }".
 */
std::wstring ToString(point* point)
{
    std::wstringstream buffer;
    buffer << L"{ ";
    buffer << point->x << L" " << point->y << L" }";
    return buffer.str();
}
