#include <stdlib.h>

// Beats 100%
// Runtime 0ms

// NOTE:
// Appearantly you can solve this by XORing
// all the elements together. Every XOR will
// cancel out in the result except for the
// integer that appears only one time.

// int compare(const void* a, const void* b) {
//     return (*(int*)a - *(int*)b);
// }

// int singleNumber(int* nums, int numsSize) {
//     if (numsSize == 1) return nums[0];

//     qsort(nums, numsSize, sizeof(int), compare);

//     for (int i = 0; i < numsSize - 1; i += 2) {
//         if (nums[i] != nums[i + 1]) return nums[i];
//     }

//     // must be the solo number
//     return nums[numsSize - 1];
// }

int singleNumber(int* nums, int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
      result ^= nums[i];
    }

    // must be the solo number
    return result;
}
