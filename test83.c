int compare(const void* s1,const void* s2)//暴力解法为O(N^2) 无法通过，必须先排序减少时间复杂度
{
    return *(int*)s1 - *(int*)s2;
}
bool containsDuplicate(int* nums, int numsSize){
    if(numsSize==1)  return false;
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i-1]==nums[i])
            return true;
    }
    return false;
}