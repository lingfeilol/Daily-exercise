/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int *ret=(int *)malloc(sizeof(int)*2);
    memset(ret,-1,sizeof(ret));
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            ret[k++]=i; 
            break;
            
        }
            
    }
    for(int j=numsSize-1;j>=0;j--)
    {
        if(nums[j]==target)
        {
            ret[k++]=j;
            break;
        }

    }
    *returnSize=2;
    return ret;
}