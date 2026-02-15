// Copyright 2026 NNTU-CS
#include <cstdint>
#include "gtest/gtest.h"
#include "alg.h"

TEST(algtest, EdgeCaseFactorialZero) {
  uint64_t result = factorial(0);
  EXPECT_EQ(1, result);
}

TEST(algtest, EdgeCaseFactorialOne) {
  uint64_t result = factorial(1);
  EXPECT_EQ(1, result);
}

TEST(algtest, FactorialTwo) {
  uint64_t result = factorial(2);
  EXPECT_EQ(2, result);
}

TEST(algtest, FactorialTen) {
  uint64_t result = factorial(10);
  EXPECT_EQ(3628800, result);
}

TEST(algtest, FactorialMaxValidValue) {
  uint64_t result = factorial(20);
  EXPECT_EQ(2432902008176640000ULL, result);
}

TEST(algtest, FactorialExceedMaxValidValue) {
  EXPECT_THROW(factorial(21), std::overflow_error);
}

TEST(algtest, FactorialNegativeInt) {
  EXPECT_THROW(factorial(-1), std::overflow_error);
}
