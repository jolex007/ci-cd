#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalcTest, Add) {
    EXCEPT_EQ(add(2, 3), 5);
}

TEST(CalcTest, DevideNormal) {
    EXCEPT_EQ(devide(6, 3), 2);
}

TEST(CalcTest, DevideByZero) {
    EXCEPT_THROW(devide(10, 0), std::invalid_argument);
}
