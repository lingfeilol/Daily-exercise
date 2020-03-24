int max(int a,int b)
{
    return a>b? a:b;
}
int rob(int* nums, int numsSize){
    //状态转移方程  dp[i]=max(dp[i]+dp[i-2],dp[i-1])
    if(numsSize==0) return 0;
    if(numsSize==1) return nums[0];
    int ppre=0;
    int pre=nums[0];
    int retmax=0;
    for(int i=1;i<numsSize;i++)
    {
        retmax=max(ppre+nums[i],pre);
        ppre=pre;
        pre=retmax;
    }
    return retmax;
}