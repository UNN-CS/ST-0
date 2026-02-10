// Copyright 2026 NNTU-CS
#include <cstdint>
#include "alg.h"

uint64_t factorial(uint8_t n) {
  uint64_t res = 1;
  if (n < 2) {
    return res;
  }
  for (uint8_t i = 2; i <= n; i++){
    res *= i;
  }
  return res;
}
