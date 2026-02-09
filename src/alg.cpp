#include "alg.h"
#include <cstdint>

uint64_t factorial(uint8_t n) {
  uint64_t result = 1;

  for (uint8_t i = 1; i <= n; ++i) {
      result *= i;
  }

  return result;
}