//不间断 不重复即可

//最大值减去最小值 >4 永远也不能补上 就算是剩下的全为0也补不上
//判断是否重复  除开0的数是否重复
int compare(void *n1,void*n2)
{
    return *(int*)n1-*(int*)n2;
}
bool isStraight(int* nums, int numsSize){
    int i=0;
    qsort(nums,numsSize,sizeof(int),compare);
    int max=nums[numsSize-1];
    int min =0;
   while(nums[i])
   {
       min=nums[i];
       i++;
       break;
   }
    for( i=1;i<numsSize;i++)
    {
        if(nums[i]==nums[i-1]&& nums[i]!=0)
            return false;
    }
    if(max-min>4)
        return false;
    return true;
}