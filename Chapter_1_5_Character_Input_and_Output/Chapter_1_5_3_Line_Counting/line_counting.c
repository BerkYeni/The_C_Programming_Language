#include <stdio.h>

int main() {
  int c, line_count;
  while ((c = getchar()) != EOF)
    if (c == '\n') ++line_count;
  printf("Amount of lines: %d\n", line_count);
  return 0;
}