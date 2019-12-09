int findMaxConsecutiveOnes(int* nums, int numsSize){
    int i=0;
    int count=0;
    int max=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==1)
        {
            count++;
        }
        else
        {
            max=(max>count)? max:count;
            count=0;
        }
        printf("%d\n",count);
        
    }
    max=(max>count)? max:count;
    return max;

}