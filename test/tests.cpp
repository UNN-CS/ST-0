// Copyright 2026 NNTU-CS
#include <cstdint>
#include "gtest/gtest.h"
#include "alg.h"

TEST(algtest, factorial_0) {
  uint64_t result = factorial(0);
  EXPECT_EQ(1, result);
}

TEST(algtest, factorial_1) {
  uint64_t result = factorial(1);
  EXPECT_EQ(1, result);
}

TEST(algtest, factorial_2) {
  uint64_t result = factorial(2);
  EXPECT_EQ(2, result);
}

TEST(algtest, factorial_5) {
  uint64_t result = factorial(5);
  EXPECT_EQ(120, result);
}

TEST(algtest, factorial_10) {
  uint64_t result = factorial(10);
  EXPECT_EQ(3628800, result);
}

TEST(algtest, factorial_20) {
  uint64_t result = factorial(20);
  EXPECT_EQ(2432902008176640000ULL, result);
}

TEST(algtest, factorial_overflow) {
  EXPECT_THROW(factorial(21), std::overflow_error);
}
