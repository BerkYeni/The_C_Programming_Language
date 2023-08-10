#include <stdio.h>

float fahrenheit_to_celsius(float fahrenheit);

int main() {
  float fahrenheit, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit to Celsius table:\n");

  fahrenheit = lower;
  while (fahrenheit <= upper) {
    celsius = fahrenheit_to_celsius(fahrenheit);
    printf("%3.0f %6.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }
  return 0;
}

float fahrenheit_to_celsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}