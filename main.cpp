#include <iostream>
#include "..\line_lib\line.h"
using namespace line_lib;

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
 */
int main()
{
    point point_1(123.0, 21.0);
    point point_2(57.0, 35.0);
    line_col::color color_1(12, 247, 102);
    line line_1(point_1, point_2, color_1);
    std::cout << line_1;
    return 0;
}
