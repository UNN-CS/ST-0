// Copyright Nikita Korovin
#include <utility>
#include "alg.h"

int gcd(int a, int b) {
  if (a < b) {
    std::swap(a, b);
  }
  if (b == 0) {
    return a;
  } else {
      return gcd(b, a - b);
    }
  }
