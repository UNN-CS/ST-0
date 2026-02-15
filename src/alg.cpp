// Copyright 2026 NNTU-CS
#include <cstdint>
#include <limits>
#include <stdexcept>

uint64_t factorial(uint8_t n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  uint64_t result = 1;

  for (uint64_t i = 2; i <= n; ++i) {
    if (result > std::numeric_limits<uint64_t>::max() / i) {
      throw std::overflow_error("factorial overflow");
    }

    result *= i;
  }

  return result;
}
