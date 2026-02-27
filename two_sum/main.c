/**
 * Note: The returned array must be malloced, assume caller calls free().
*/

// O(n²) solution. An O(n) solution would use a hashmap where the keys are
// the array values and the values are their indices. For each element x,
// we check if target - x exists in the hashmap.
//
// Since implementing a HashMap would take a long time for this problem in C,
// I'll keep the solution as is.

#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
  int i;
  int j;
  int* arr = malloc(numsSize * sizeof(int));  

  for (i = 0; i < numsSize; i++) {
    for (j = i + 1; j < numsSize; j++) {
      if (nums[i] + nums[j] == target) {
        arr[0] = i;
        arr[1] = j;
        break;      
      }         
    }
  }
  *returnSize = 2;
  return arr;  
}
