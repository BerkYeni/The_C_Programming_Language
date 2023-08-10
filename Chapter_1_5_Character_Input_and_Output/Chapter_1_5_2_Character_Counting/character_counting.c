#include <stdio.h>

void version_1();
void version_2();

int main() {
  printf("Input Ctrl-Z for End Of File. (Windows)\n");
  // version_1();
  version_2();
  return 0;
}

void version_1() {
  long count;
  count = 0;
  while (getchar() != EOF)
    ++count;
  printf("Total character amount: %1d\n", count);
}

void version_2() {
  double count;
  for (count = 0; getchar() != EOF; ++count);
  printf("Total character amount: %.0f\n", count);
}