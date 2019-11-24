int missingNumber(int* nums, int numsSize){
    int ret=numsSize;
    int i=0;
    for(;i<numsSize;i++)
    {
        ret^=nums[i];
        ret^=i;
    }
    return ret;
}