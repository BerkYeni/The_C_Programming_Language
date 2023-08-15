#include <stdio.h>

#define MAX_LINE_LENGTH 20

int save_line(char line[], int max_len);
void copy_char_array(char source[], char destination[]);

int main() {
  int current_length, max_length, temporary_length;
  char current_line[MAX_LINE_LENGTH];
  char longest_line[MAX_LINE_LENGTH];
  char temporary_line_storage[MAX_LINE_LENGTH];

  max_length = 0;
  temporary_length = 0;
  while ((current_length = save_line(current_line, MAX_LINE_LENGTH)) > 0) {
    if (current_line[current_length - 1] != '\n') {
      // if the line doesn't end with end line character
      // that means it it was bigger than max length
      temporary_length = current_length;
      copy_char_array(current_line, temporary_line_storage);
      while (temporary_line_storage[temporary_length - 1] != '\n') {
        temporary_length = save_line(temporary_line_storage, MAX_LINE_LENGTH);
        current_length += temporary_length;
      }
    }

    // otherwise it was smaller than max length and can
    // be normally stored
    if (current_length > max_length) {
      copy_char_array(current_line, longest_line);
      max_length = current_length;
    }
  }
  if (max_length > 0) {
    printf("%s\n", longest_line);
    printf("Longest line length: %d", max_length);
  }
  else printf("No lines.\n");

  return 0;
}

int save_line(char line[], int max_len) {
  // save line to the array "line" and return length
  int length, c;
  for (length = 0; length < max_len - 1; length += 1) {
    c = getchar();
    if (c == EOF) {
      break;
    }

    line[length] = c;
    if (c == '\n') {
      length += 1;
      break;
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
  destination[index] = '\0';
}
