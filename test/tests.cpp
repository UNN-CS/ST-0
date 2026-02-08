// Copyright 2021 NNTU-CS
#include "gtest/gtest.h"
#include "alg.h"

TEST(algtest, test1) {
  int result = gcd(10, 15);
  EXPECT_EQ(5, result);
}
