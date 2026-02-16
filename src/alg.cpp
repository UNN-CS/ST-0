// Copyright 2026 NNTU-CS
#include <cstdint>

uint64_t factorial(uint8_t n) {

    if (n <= 1) {
        return 1;
    }

    return n * factorial(n - 1);
}
