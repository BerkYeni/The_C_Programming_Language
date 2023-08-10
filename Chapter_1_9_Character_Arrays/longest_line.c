#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int save_line(char line[], int max_len);
void copy_char_array(char source[], char destination[]);

int main() {
  int current_length, max_length;
  char current_line[MAX_LINE_LENGTH];
  char longest_line[MAX_LINE_LENGTH]; // longest line storage

  max_length = 0;
  while ((current_length = save_line(current_line, MAX_LINE_LENGTH)) > 0) {
    if (current_length > max_length) {
      copy_char_array(current_line, longest_line);
      max_length = current_length;
    }
  }
  if (max_length > 0)
    printf("%s\n", longest_line);
  else printf("No lines.\n");

  return 0;
}

int save_line(char line[], int max_len) {
  // save line to the array "line" and return length
  int length, c;
  for (length = 0; length < max_len - 1; length += 1) {
    c = getchar();
    if (c == EOF) {
      line[length] = '\0';
      return length;
    }

    line[length] = c;
    if (c == '\n') {
      line[length + 1] = '\0';
      return length + 1;
    }
  }
  line[length] = '\0';
  return length;
}

void copy_char_array(char source[], char destination[]) {
  int c, index;
  c = EOF;
  for (index = 0; (c = source[index]) != '\0'; index += 1)
    destination[index] = c;
}