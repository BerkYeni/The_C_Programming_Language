#include <stdio.h>

void version_1();
void version_2();

int main() {
  // version_1();
  version_2();
  return 0;
}

void version_1() {
  int c;
  int blank;
  blank = 0;
  while ((c = getchar()) != EOF) {
    if (blank == 0) {
      if (c == ' ')
        blank = 1;
      putchar(c);
    } else {
      if (c != ' ') {
        blank = 0;
        putchar(c);
      }
    }
  }
}

void version_2() {
  int c, previous_c;
  previous_c = EOF;
  while ((c = getchar()) != EOF) {
    if (!(previous_c == ' ' && c == ' '))
      putchar(c);
    previous_c = c;
  }
}