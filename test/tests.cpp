// Copyright 2026 NNTU-CS
#include <cstdint>
#include "gtest/gtest.h"
#include "alg.h"

TEST(algtest, test1) {
  uint64_t result = factorial(1);
  EXPECT_EQ(1, result);
}

TEST(algtest, test2) {
  uint64_t result = factorial(5);
  EXPECT_EQ(120, result);
}

TEST(algtest, test3) {
  EXPECT_THROW(factorial(21), std::overflow_error);
}
