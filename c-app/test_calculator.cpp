#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalcTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(CalcTest, DevideNormal) {
    EXPECT_EQ(devide(6, 3), 2);
}

TEST(CalcTest, DevideByZero) {
    EXPECT_THROW(devide(10, 0), std::invalid_argument);
}
