#include "help_mathr.h"
#include <cmath>

bool miit::help_math::is_double_equal(const double value_1, const double value_2, const double precision)
{
    return std::abs(value_1 - value_2) < precision;
}
