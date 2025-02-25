// Copyright 2021 NNTU-CS

#include <iostream>
#include "alg.h"

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
