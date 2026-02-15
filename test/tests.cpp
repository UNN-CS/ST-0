// Copyright 2026 NNTU-CS
#include "alg.h"
#include "gtest/gtest.h"
#include <cstdint>

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
  uint64_t result = factorial(5);
  EXPECT_EQ(120, result);
}

TEST(algtest, test5) {
  uint64_t result = factorial(12);
  EXPECT_EQ(479001600, result);
}

TEST(algtest, test6) { EXPECT_THROW(factorial(21), std::out_of_range); }