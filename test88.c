int thirdMax(int* nums, int numsSize){
    long long one=LLONG_MIN;
    long long two=LLONG_MIN;
    long long there=LLONG_MIN;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>one)
        {
            there=two;
            two=one;
            one=nums[i];
        }
         if(nums[i]<one && nums[i]>two)
        {
            there=two;
            two=nums[i];
        }
        if(nums[i]>there && nums[i]<two) {
            there=nums[i];
        }
    }

     return numsSize <= 2 ? one : (there != LLONG_MIN ? there : one);
}