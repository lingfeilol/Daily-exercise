int pivotIndex(int* nums, int numsSize){
    int ret = -1;
    for (int i = 0; i < numsSize; ++i) {
        int index = i;
        int leftSum = 0;
        for (int j = 0; j < index; ++j) {
            leftSum += nums[j];
        }
        int rightSum = 0;
        for (int k = index+1; k < numsSize; ++k) {
            rightSum += nums[k];
        }
        if (rightSum == leftSum) {
            ret = index;
            break;
        }
    }
    return ret;
}
