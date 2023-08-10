#include <stdio.h>

int main() {
  float fahrenheit, celsius;
  float lower, upper, step;

  lower = -140;
  upper = 160;
  step = 20;

  printf("Celsius to Fahrenheit table:\n");

  celsius = lower;
  while (celsius <= upper) {
    fahrenheit = ((9.0 / 5.0) * celsius) + 32.0;
    printf("%4.0f %6.0f\n", celsius, fahrenheit);
    celsius = celsius + step;
  }
  return 0;
}