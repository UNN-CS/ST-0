// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  int t;
    while (b != 0) {
      t = b;
      b = a % b;
      a = t;
    }
    return a;
}
