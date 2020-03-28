/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int begin=0;
    int end=numsSize-1;
    int *ret=(int *)malloc(sizeof(int)*2);
    *returnSize=2;
    memset(ret,-1,sizeof(int)*2);
    while(begin<=end)
    {
        if(nums[begin]+nums[end]==target)
        {
            ret[0]=nums[begin];
            ret[1]=nums[end];
            break;
        }
        else if(nums[begin]+nums[end]>target)
            end--;
        else 
            begin++;
    }
    return ret;

}