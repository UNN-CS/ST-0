// Copyright 2026 NNTU-CS
#include <cstdint>
#include <stdexcept>
#include <string>
uint64_t factorial(uint8_t n) {
  const uint64_t MAX_N = 20;
  if (n > MAX_N) {
    std::string msg = "Factorial " + std::to_string(n)
                        + "! can't be fit in uint64_t "
                        "(max: "+ std::to_string(MAX_N) + "!)";
    throw std::overflow_error(msg);
  }

  if (n == 0 || n == 1) {
    return 1;
  }

  uint64_t res = 1;
  for (uint64_t i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}
