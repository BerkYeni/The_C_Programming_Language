#include <stdio.h>

int power(int base, int exponent);

// test power function
int main() {
  int i;
  for (i = 0; i < 10; i += 1)
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  return 0;
}

int power(int base, int exponent) {
  int temp, i;
  temp = 1;
  for (i = 0; i < exponent; i += 1)
    temp *= base;
  return temp;
}