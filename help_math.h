#pragma once
#include <limits>

namespace miit::help_math
{
    bool is_double_equal(const double value_1, const double value_2, const double precision = std::numeric_limits<double>::min());
}
