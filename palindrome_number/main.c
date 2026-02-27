#include <features.h>
#include <stdbool.h>

// Beats 100%
// Runtime 0ms

bool isPalindrome(int x) {
  int digits[12];
  int len = 0;

  if (x == 0) return true;
  if (x < 0) return false;

  while (x > 0) {
    digits[len] = x % 10;
    x /= 10;
    len++;
  }

  int left = 0;
  int right = len - 1;

  while (left < right) {
    if (digits[left] != digits[right]) return false;
    left++;
    right--;
  }
  
  return true;
}
