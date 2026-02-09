// Copyright 2026 NNTU-CS
#include <cstdint>
#include "gtest/gtest.h"
#include "alg.h"

TEST(algtest, test1) {
  uint64_t result = factorial(1);
  EXPECT_EQ(1, result);
}

TEST(algtest, test2) {
  uint64_t result = factorial(2);
  EXPECT_EQ(2, result);
}

TEST(algtest, test3) {
  uint64_t result = factorial(0);
  EXPECT_EQ(1, result);
}

TEST(algtest, test4) {
  result = factorial(16);
  EXPECT_EQ(20922789888000ULL, result);
}

TEST(algtest, test5) {
  result = factorial(20);
  EXPECT_EQ(2432902008176640000ULL, result);
}

TEST(algtest, test6) {
  EXPECT_THROW(factorial(21), std::overflow_error);
}