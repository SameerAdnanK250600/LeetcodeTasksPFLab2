int removeDuplicates(int* nums, int numsSize) {
    int tempArray[numsSize];
    if (numsSize==1) return 1;
    for (int i = 0; i < numsSize; i++) {
        tempArray[i] = 0;
    }
    int count = 0;
    tempArray[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != tempArray[count]) {
            count++;
            tempArray[count] = nums[i];
        }
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = tempArray[i];
    }
    return count+1;
}
