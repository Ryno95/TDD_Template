#include "ctest.h"
#include "../src/ft_math.h"

CTEST(squared_test, zero_test)
{
    ASSERT_EQUAL(0, ft_square(0));
}

CTEST(squared_test, positive_nums)
{
    ASSERT_EQUAL(4, ft_square(2));
}

CTEST(squared_test, negative_nums)
{
    ASSERT_EQUAL(4, ft_square(-2));
}