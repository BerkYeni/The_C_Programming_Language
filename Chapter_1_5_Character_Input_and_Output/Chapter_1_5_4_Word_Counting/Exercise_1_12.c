#include <stdio.h>

#define BREAK_CH 1
#define NORMAL_CH 0

#define IN 1
#define OUT 0

int main() {
  int c, word_state, c_is;

  c_is = BREAK_CH;
  word_state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      c_is = BREAK_CH;
    else
      c_is = NORMAL_CH;

    if (word_state == OUT) {
      if (c_is == NORMAL_CH) {
        putchar(c);
        word_state = IN;
      }
    } else {
      if (c_is == BREAK_CH) {
        putchar('\n');
        word_state = OUT;
      } else
        putchar(c);
    }
  }
  return 0;
}