#include <stdio.h>

#define BREAK_CH 1
#define NORMAL_CH 0

#define IN 1
#define OUT 0

void version_1();
void version_2();

int main() {
  version_1();
  // version_2();
  return 0;
}

void version_1() {
  int c, word_state, c_is;
  long c_num, n_num, w_num;

  c_num = n_num = w_num = 0;
  c_is = BREAK_CH;
  word_state = OUT;

  while ((c = getchar()) != EOF) {
    ++c_num;

    if (c == '\n') 
      ++n_num;

    if (c == ' ' || c == '\n' || c == '\t')
      c_is = BREAK_CH;
    else
      c_is = NORMAL_CH;

    if (word_state == OUT) {
      if (c_is == NORMAL_CH) {
        ++w_num;
        word_state = IN;
      }
    } else {
      if (c_is == BREAK_CH)
        word_state = OUT;
    }
  }

  printf("Amount of characters: %ld\n", c_num);
  printf("Amount of line breaks: %ld\n", n_num);
  printf("Amount of words: %ld\n", w_num);
}

void version_2() {
  int c, word_state;
  long c_num, n_num, w_num;

  c_num = n_num = w_num = 0;
  word_state = OUT;

  while ((c = getchar()) != EOF) {
    ++c_num;

    if (c == '\n') 
      ++n_num;

    if (c == ' ' || c == '\t' || c == '\n')
      word_state = OUT;
    else if (word_state == OUT) {
      ++w_num;
      word_state = IN;
    }
  }

  printf("Amount of characters: %ld\n", c_num);
  printf("Amount of line breaks: %ld\n", n_num);
  printf("Amount of words: %ld\n", w_num);
}