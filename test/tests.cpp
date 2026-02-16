// Copyright 2026 NNTU-CS

#include <cstdint>
#include "gtest/gtest.h"
#include "alg.h"

TEST(algtest, test_factorial_0) {
    uint64_t result = factorial(0);
    EXPECT_EQ(1, result);
}

TEST(algtest, test_factorial_1) {
    uint64_t result = factorial(1);
    EXPECT_EQ(1, result);
}

TEST(algtest, test_factorial_2) {
    uint64_t result = factorial(2);
    EXPECT_EQ(2, result);
}

TEST(algtest, test_factorial_3) {
    uint64_t result = factorial(3);
    EXPECT_EQ(6, result);
}

TEST(algtest, test_factorial_4) {
    uint64_t result = factorial(4);
    EXPECT_EQ(24, result);
}

TEST(algtest, test_factorial_5) {
    uint64_t result = factorial(5);
    EXPECT_EQ(120, result);
}

TEST(algtest, test_factorial_8) {
    uint64_t result = factorial(8);
    EXPECT_EQ(40320, result);
}

TEST(algtest, test_factorial_14) {
    uint64_t result = factorial(14);
    EXPECT_EQ(87178291200, result);
}

TEST(algtest, test_factorial_20) {
    uint64_t result = factorial(20);
    EXPECT_EQ(2432902008176640000, result);
}
