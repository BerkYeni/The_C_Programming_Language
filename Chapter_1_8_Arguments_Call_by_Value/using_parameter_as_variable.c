#include <stdio.h>

int power(int base, int exponent);

int main() {
  int i;
  for (i = 0; i < 10; i += 1)
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  return 0;
}

int power(int base, int exponent) {
  // use exponent as a variable
  int temp;
  for (temp = 1; exponent > 0; exponent -= 1)
    // the for loop decrements exponent towards 0
    temp *= base;
  return temp;
}