/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i=0;
    int j=0;
    int* ret=(int*)malloc(sizeof(int)*2);
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ret[0]=i;
                ret[1]=j;
                *returnSize=2;
                 return ret;
            }
        }
    }
    return ret;
}