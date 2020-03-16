int dominantIndex(int* nums, int numsSize){
    
    int max=0;
    int maxindex=0;
    int second=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
        {
            second=max;
            max=nums[i];
            maxindex=i;
        }
        else if(nums[i]>second)
        {
            second=nums[i];
        }
    }
    if(max >= second*2)
        return maxindex;
    return -1;
}