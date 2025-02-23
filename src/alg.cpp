// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  while (b != 0) {
    int tmp = a % b;
    a = b;
    b = tmp;
  }
  return a;
}
