// Copyright 2026 NNTU-CS
#include <cstdint>
#include <stdexcept>

uint64_t factorial(uint8_t n) {
  if (n > 20) {
    throw std::overflow_error("Factorial would overflow for n > 20");
  }
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}
