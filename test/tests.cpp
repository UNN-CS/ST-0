// Copyright 2026 NNTU-CS
#include <cstdint>
#include "gtest/gtest.h"
#include "alg.h"

TEST(algtest, test0) {
	uint64_t result = factorial(0);
	EXPECT_EQ(1, result);
}

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
	uint64_t result = factorial(4);
	EXPECT_EQ(24, result);
}

TEST(algtest, test5) {
	uint64_t result = factorial(5);
	EXPECT_EQ(120, result);
}

TEST(algtest, test6) {
	uint64_t result = factorial(6);
	EXPECT_EQ(720, result);
}

TEST(algtest, test7) {
	uint64_t result = factorial(7);
	EXPECT_EQ(5040, result);
}

TEST(algtest, test10) {
	uint64_t result = factorial(10);
	EXPECT_EQ(3628800, result);
}

TEST(algtest, test20) {
	uint64_t result = factorial(20);
	EXPECT_EQ(2432902008176640000ULL, result);
}