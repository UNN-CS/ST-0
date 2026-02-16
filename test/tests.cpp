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
  uint64_t result = factorial(3);
  EXPECT_EQ(6, result);
}

TEST(algtest, test4) {
  EXPECT_NO_THROW(factorial(5));
}

TEST(algtest, test5) {
  EXPECT_ANY_THROW(factorial(30));
}

TEST(algtest, test6) {
  uint64_t result = factorial(0);
  EXPECT_EQ(1, result);
}