// Copyright 2026 NNTU-CS
#include <cstdint>
#include <stdexcept>

uint64_t factorial(uint8_t n) {
    if (n == 0) {
        return 1;
    }
    
    if (n > 20) {
        throw std::overflow_error("Factorial value exceeds uint64_t capacity");
    }
    
    uint64_t result = 1;
    for (uint8_t i = 2; i <= n; i++) {
        if (result > UINT64_MAX / i) {
            throw std::overflow_error("Factorial value exceeds uint64_t capacity");
        }
        result *= i;
    }
    
    return result;
}
