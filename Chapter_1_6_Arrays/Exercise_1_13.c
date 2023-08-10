#include <stdio.h>

#define MAX_LENGTH 10

#define BREAK_CH 1
#define NORMAL_CH 0

#define IN 1
#define OUT 0

#define HORIZONTAL 1
#define VERTICAL 0

#define HEIGHT_CAP 15

int main() {
  int c;
  int word_state, c_is, render;
  int index, histogram_index, length, height;
  long word_length;
  long lengths[MAX_LENGTH];

  c_is = BREAK_CH;
  word_state = OUT;
  render = VERTICAL;

  word_length = 0;

  for (index = 0; index < MAX_LENGTH; index += 1)
    lengths[index] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      c_is = BREAK_CH;
    else
      c_is = NORMAL_CH;

    if (word_state == OUT) {
      if (c_is == NORMAL_CH) {
        word_length += 1;
        word_state = IN;
      }
    } else {
      if (c_is == BREAK_CH) {
        lengths[word_length] += 1;
        word_length = 0;
        word_state = OUT;
      } else 
        word_length += 1;
    }
  }

  if (render == HORIZONTAL) {
    for (index = 0; index < MAX_LENGTH; index += 1) {
      printf("  %d | ", index);
      for (histogram_index = 0; histogram_index < lengths[index]; histogram_index += 1)
        putchar('#');
      putchar('\n');
    }
  } else {
    for (index = 0; index < HEIGHT_CAP; index += 1) {
      height = HEIGHT_CAP - index;
      for (histogram_index = 0; histogram_index < MAX_LENGTH; histogram_index += 1) {
        length = lengths[histogram_index];
        if (height <= length) putchar('#');
        else putchar(' ');
      }
      putchar('\n');
    }
    for (index = 0; index < MAX_LENGTH; index += 1)
      putchar('-');
    putchar('\n');
    for (index = 0; index < MAX_LENGTH; index += 1)
      printf("%d", index);
  }

  return 0;
}