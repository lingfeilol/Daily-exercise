/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int *ret=(int *)malloc(sizeof(int)*2);
    memset(ret,-1,sizeof(int)*2);
    //找左侧边界值
    int left=0;
    int right=numsSize-1;
    int mid=0;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(nums[mid]<target)
        {
            left=mid+1;
        }
        else if(nums[mid]>target)
        {
            right=mid-1;
        }
        else if(nums[mid]==target)
            //不要返回，缩小左边范围
            right=mid-1;
    }
    if(left>=numsSize || nums[left]!=target)
        return ret;
    else
        ret[0]=left;


    //找右侧边界值
    left=0;
    right=numsSize-1;
    mid=0;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(nums[mid]<target)
        {
            left=mid+1;
        }
        else if(nums[mid]>target)
        {
            right=mid-1;
        }
        else if(nums[mid]==target)
            //不返回，缩小右边边界
            left=mid+1;
    }
    if(right<0 || nums[right]!=target)
        return ret;
    else
        ret[1]=right;
    return ret;
   

}