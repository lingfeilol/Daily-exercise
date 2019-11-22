int removeElement(int* nums, int numsSize, int val){
    int* start=nums;
    while(*start)
    {
        if(*start!=val)
        {
            *a++=*start++;
        }
        else
        {
            start++;
        }
    }
    return a;

}