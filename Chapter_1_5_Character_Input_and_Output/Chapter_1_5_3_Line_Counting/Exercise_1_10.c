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
  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\')
      printf("\\\\");
    else
      putchar(c);
  }
}

void version_2() {
  int c, is_else;
  is_else = 1;
  while ((c = getchar()) != EOF) {
    is_else = 1;
    if (c == '\t') {
      printf("\\t");
      is_else = 0;
    }
    if (c == '\b') {
      printf("\\b");
      is_else = 0;
    }
    if (c == '\\'){
      printf("\\\\");
      is_else = 0;
    }
    if (is_else == 1)
      putchar(c);
  }
}