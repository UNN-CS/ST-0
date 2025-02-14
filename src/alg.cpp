// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}
