int searchInsert(int* nums, int numsSize, int target) {
  int i = 0;

  // Beats 100%
  // 0ms runtime

  for (i = 0; i < numsSize; i++) {
    if (nums[i] >= target) return i;
  }

  return i;      
}
