// Copyright 2026 NNTU-CS
#include <cstdint>

uint64_t factorial(uint8_t n) {
  if (n > 20) {
    return -1;
  }

  uint64_t result = 1;
  for (uint8_t i = 0; i < n; ++i) {
    result = result * (i + 1);
  }
  return result;
}
