#include <stdbool.h>
#include <string.h>

// Beats 100%
// Runtime 0ms

int lengthOfLastWord(char* s) {
  int len = strlen(s);
  int i = len - 1;
  int counter = 0;

  while (s[i] == ' ') i--;
  while (s[i] != ' ' && i >= 0) {
    counter++;
    if (i != 0) i--; else break;
  }

  return counter;
}
