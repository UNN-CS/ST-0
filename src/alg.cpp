// Copyright 2026 NNTU-CS
#include <cstdint>
#include "alg.h"

uint64_t factorial(uint8_t n) {
  uint64_t result = 1;

  if (n < 2) {
    return result;
  }

  return n * factorial(n-1);
}
