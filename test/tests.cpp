// Copyright 2026 NNTU-CS
#include <cstdint>
#include "gtest/gtest.h"
#include "include/alg.h"

TEST(algtest, test1) {
  uint64_t result = factorial(1);
  EXPECT_EQ(1, result);
}

TEST(algtest, test2) {
  uint64_t result = factorial(2);
  EXPECT_EQ(2, result);
}

TEST(algtest, test3) {
  uint64_t result = factorial(25);
  EXPECT_EQ(-1, result);
}

TEST(algtest, test4) {
  uint64_t result = factorial(3);
  EXPECT_EQ(6, result);
}

TEST(algtest, test5) {
  uint64_t result = factorial(4);
  EXPECT_EQ(24, result);
}

TEST(algtest, test6) {
  uint64_t result = factorial(0);
  EXPECT_EQ(1, result);
}

TEST(algtest, test7) {
  uint64_t result = factorial(20);
  EXPECT_EQ(2432902008176640000, result);
}
