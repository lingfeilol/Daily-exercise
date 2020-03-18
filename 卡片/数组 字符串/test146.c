int minSubArrayLen(int s, int* nums, int numsSize){
    int ans=numsSize+1; //设这个窗口最大值
    int begin=0;  //左边界
    int i=0;     //右边界，准备遍历
    int sum=0;
    while(i<numsSize) //滑窗的右边框不能超出界限
    { 
        if(sum+nums[i]<s)  //若滑窗之间的和小于s，右边框右移，sum增大
        {
            sum+=nums[i];
            i++;
        }
        else         //若滑窗之间的和大于等于s，左边框右移缩小左边边界，sum减小
        {      
            ans=(i-begin)<ans? i-begin+1:ans;    //若当前符合条件的连续子数组比ans内记录的长度更小，则更新ans值
            sum-=nums[begin];      
            begin++;
        }
    }
    return ans==numsSize+1? 0:ans; //要是这个初始的最大值一直没有改变过，那就返回0
}