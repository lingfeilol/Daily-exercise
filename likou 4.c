int removeElement(int* nums, int numsSize, int val){
    size_t start=0,end=0;
    while(start<numsSize)
    {
        if(nums[start]!=val)
        {
            nums[end]=nums[start];
            start++;
            end++;
        }
        else
        {
            start++;
        }
    }
    return end;
}
    return count;
  
}