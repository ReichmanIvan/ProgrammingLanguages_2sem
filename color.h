#pragma once
#include <iostream>
#include "point.h"

namespace line_col 
{
    /**
     * \class color
     * \brief Класс, представляющий цвет в формате RGB.
     */
    class color
    {
    public:
        /**
         * \brief Конструктор класса color.
         * \param red Значение красного цвета.
         * \param green Значение зеленого цвета.
         * \param blue Значение синего цвета.
         */
        color(const int red = 0, const int green = 0, const int blue = 0);

        /**
         * \brief Получает значение красного цвета.
         * \return Значение красного цвета.
         */
        int get_red() const;

        /**
         * \brief Получает значение зеленого цвета.
         * \return Значение зеленого цвета.
         */
        int get_green() const;

        /**
         * \brief Получает значение синего цвета.
         * \return Значение синего цвета.
         */
        int get_blue() const;

        /**
         * \brief Перегруженный оператор вывода в поток.
         * \param out Поток вывода.
         * \param color Цвет для вывода.
         * \return Поток вывода.
         */
        friend std::ostream& operator<< (std::ostream& out, const color& color);

    private:
        int red;   /**< Значение красного цвета. */
        int green; /**< Значение зеленого цвета. */
        int blue;  /**< Значение синего цвета. */
    };
}
