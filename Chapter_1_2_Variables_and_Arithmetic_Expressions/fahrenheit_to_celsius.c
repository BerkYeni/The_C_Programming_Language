#include <stdio.h>

void version_1();
void version_2();

int main() {
  // version_1();
  version_2();

  return 0;
}

void version_1() {
  int fahrenheit, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahrenheit = lower;
  while (fahrenheit <= upper) {
    celsius = 5 * (fahrenheit - 32) / 9;
    printf("%3d %6d\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }
}

void version_2() {
  float fahrenheit, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit to Celsius table:\n");

  fahrenheit = lower;
  while (fahrenheit <= upper) {
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("%3.0f %6.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }
}