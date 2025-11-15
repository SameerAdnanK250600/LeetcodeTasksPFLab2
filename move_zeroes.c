void moveZeroes(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        int isSorted = 1;
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] == 0 && j != numsSize-1) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted) return;
    }
}
