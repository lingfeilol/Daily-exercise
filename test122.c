int compare(const void*s1,const void*s2)
{
    return  (*(int*)s1 - *(int *)s2);
}
//先排序，再对比
int findUnsortedSubarray(int* nums, int numsSize){
    int tmp[100000]={0};
    for(int k=0;k<numsSize;k++)
    {
        tmp[k]=nums[k];
    }
    qsort(tmp,numsSize,sizeof(int),compare);
    int begin=0;
    int end=numsSize-1;
    while(begin<=end && tmp[begin]==nums[begin])
    {
        begin++;
    }  
    while(begin<=end && tmp[end]==nums[end])
    {
        end--;
    }
    int ret=end-begin+1;
    if(begin==numsSize-1&& end==0)
        ret=0;
    return ret;
}
