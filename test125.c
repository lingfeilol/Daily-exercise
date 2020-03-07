int compare(const void* s1,const void* s2)
{
    return *(int*)s1 - *(int*)s2;
}
int arrayPairSum(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),compare);
    int ret=0;
    for(int i=0;i<numsSize;i+=2)
    {
        ret+=nums[i];
    }
    return ret;
}