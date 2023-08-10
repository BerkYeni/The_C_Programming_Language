#include <stdio.h>

#define character_amount 123

int main() {
  int c, index;
  long frequencies[character_amount];
  // fill with all chars: 'a', 'b', 'c', ..., '9'
  for (index = 0; index < character_amount; index += 1) {
    frequencies[index] = 0;
  }

  while ((c = getchar()) != EOF) {
    frequencies[c] += 1;
  }

  printf("Frequencies of different characters:\n");
  for (index = 0; index < character_amount; index += 1) {
    if (frequencies[index] > 0) 
      printf("  %c : %ld\n", index, frequencies[index]);
  }

  return 0;
}