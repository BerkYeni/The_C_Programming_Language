#include <stdio.h>

int main() {
  int c, blank_count, tab_count, line_count;
  blank_count = 0;
  tab_count = 0;
  line_count = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++blank_count;
    if (c == '\t')
      ++tab_count;
    if (c == '\n')
      ++line_count;
  }

  printf("Amount of blanks: %d\n", blank_count);
  printf("Amount of tabs: %d\n", tab_count);
  printf("Amount of new lines: %d\n", line_count);

  return 0;
}