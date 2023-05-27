#pragma once
#include <iostream>
#include "point.h"
#include "color.h"
using namespace line_lib;

/**
 * \class line
 * \brief Класс, представляющий линию, определенную двумя точками и цветом.
 */
class line
{
public:
    /**
     * \brief Конструктор класса line.
     * \param point_1 Первая точка линии.
     * \param point_2 Вторая точка линии.
     * \param color Цвет линии.
     */
    line(const point point_1, const point point_2, const line_col::color color);

    /**
     * \brief Получает первую точку линии.
     * \return Первая точка линии.
     */
    point get_point_1() const;

    /**
     * \brief Получает вторую точку линии.
     * \return Вторая точка линии.
     */
    point get_point_2() const;

    /**
     * \brief Получает цвет линии.
     * \return Цвет линии.
     */
    line_col::color get_color() const;

    /**
     * \brief Перегруженный оператор вывода в поток.
     * \param out Поток вывода.
     * \param line Линия для вывода.
     * \return Поток вывода.
     */
    friend std::ostream& operator<< (std::ostream& out, const line& line);

private:
    point point_1; /**< Первая точка линии. */
    point point_2; /**< Вторая точка линии. */
    line_col::color color; /**< Цвет линии. */
};
