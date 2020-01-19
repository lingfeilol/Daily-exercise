int removeDuplicates(int* nums, int numsSize){
    if(numsSize==0)
        return 0;
    int i=0;
    int k=1;//第一个必在
   for(i=1;i<numsSize;i++)       //将重复的元素跳过，只留最后一个重新覆盖
    {
        if(nums[i]!=nums[i-1])
            nums[k++]=nums[i];
    }
    return  k;
}