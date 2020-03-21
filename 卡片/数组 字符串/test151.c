

int removeDuplicates(int* nums, int numsSize){
    if(numsSize==0) return 0;
    int k=1;
    int count=1;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]==nums[i-1])  //先把相同的开始计数
        {
            count++;
        }
        else
        {
            count=1;    //不相同，计数器重新计数
        }
        if(count<=2)  //保证只记录两个相同的
        {
            nums[k++]=nums[i];
        }    
    }
    return k;
}

