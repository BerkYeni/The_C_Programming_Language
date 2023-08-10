#include <stdio.h>

int main() {
  int c;
  int result;

  printf("Input Ctrl-Z for End Of File. (Windows)\n");
  while (result = ((c = getchar()) != EOF)) {
    printf("Result of '%c != EOF': %d\n", c, result);
  }
  printf("Result of '%c != EOF': %d\n", c, result);

  return 0;
}