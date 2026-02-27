// Beats 100%
// 0ms runtime

int removeDuplicates(int* nums, int numsSize) {
  int i;
  int j = 0;

  for (i = 1; i < numsSize; i++) {
    if (nums[i] != nums[i - 1]) {
      j++;
      nums[j] = nums[i];
    }
  }
  return j + 1;   
}
