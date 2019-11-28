int compare(const void* p1,const void* p2)
{
    return *(int*)p1 > *(int*)p2;
}
int majorityElement(int* nums, int numsSize){
    int yiban=numsSize/2;
    qsort(nums,numsSize,sizeof(int),compare);//先排序，数组中出现次数大于 ⌊ n/2 ⌋ 的元素必然出现在n/2下标处
    return nums[yiban];
}