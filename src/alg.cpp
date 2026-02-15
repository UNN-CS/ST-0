// Copyright 2026 NNTU-CS
#include <cstdint>
#include <stdexcept>

uint64_t factorial(uint8_t n) {
  if (n > 20) {
    throw std::out_of_range("n must be <= 20 for uint64_t factorial");
  }
  uint64_t res = 1;
  for (uint8_t i = 1; i <= n; i++) {
    res *= i;
  }
  return res;
}
