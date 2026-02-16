// Copyright 2026 NNTU-CS
#include <cstdint>

uint64_t factorial(uint8_t n) {
	if (n == 0) {
		return 1;
	}
	else if (n > 20) {
		throw -1;
	}
	else {
		uint64_t ans = 1;
		for (uint64_t i = 2; i <= n; i++) {
			ans *= i;
		}
		return ans;
	}
}


