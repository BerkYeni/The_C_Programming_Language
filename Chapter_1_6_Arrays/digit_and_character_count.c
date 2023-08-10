#include <stdio.h>

void version_1();

int main() {
  version_1();
  return 0;
}

void version_1() {
  int c, index;
  long white_space_amount, other_amount;
  long digits_amounts[10];

  white_space_amount = other_amount = 0;
  for (index = 0; index < 10; index += 1)
    digits_amounts[index] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      digits_amounts[c - '0'] += 1;

    else if (c == ' ' || c == '\n' || c == '\t')
      white_space_amount += 1;

    else other_amount += 1;
  }

  printf("Amount of each digit:\n");
  for (index = 0; index < 10; index += 1)
    printf("  %d: %ld\n", index, digits_amounts[index]);
  printf("\n");
  printf("Amount of white space characters: %ld\n", white_space_amount);
  printf("Amount of other characters: %ld\n", other_amount);
}