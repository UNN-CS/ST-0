// Copyright 2021 NNTU-CS
#include <utility>

#include "alg.h"

int gcd(int a, int b) {
  while (b != 0) {
    std::swap(a, b);
    b = a % b;
  }
  return a;
}
