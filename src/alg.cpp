// Copyright 2026 NNTU-CS
#include <cstdint>

uint64_t factorial(uint8_t n) {
  uint64_t res = 1;
  for (uint8_t i = 1; i <= n; i++) {
    res *= i;
  }
  return res;
}
