#pragma once
#include <iostream>
#include "help_math.h"

namespace line_lib
{
    /**
     * \struct point
     * \brief Структура, представляющая точку в двумерном пространстве.
     */
    struct point
    {
        /**
         * \brief Конструктор по умолчанию.
         * \param value_x Значение координаты x точки.
         * \param value_y Значение координаты y точки.
         */
        point(const double value_x = 0.0, const double value_y = 0.0);

        /**
         * \brief Перегруженный оператор сравнения.
         * \param lha Левый операнд.
         * \param rha Правый операнд.
         * \return true, если точки равны; false в противном случае.
         */
        friend bool operator == (const point& lha, const point& rha);

        /**
         * \brief Перегруженный оператор вывода в поток.
         * \param out Поток вывода.
         * \param point Точка для вывода.
         * \return Поток вывода.
         */
        friend std::ostream& operator<< (std::ostream& out, const point& point);

        double x; /**< Координата x точки. */
        double y; /**< Координата y точки. */
    };
}

