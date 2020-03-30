//1.标准动态规划
// int Max(int a,int b)
// {
//         return a>b? a:b;
// }
// int maxSubArray(int* nums, int numsSize){
//     int *dp=(int*)malloc(sizeof(int)*numsSize);//保存此下标，之前的的最大子序列和
//     dp[0]=nums[0];
//     int max=nums[0];
//     for(int i=1;i<numsSize;i++)
//     {
//         dp[i]=Max(dp[i-1]+nums[i],nums[i]);
//         if(dp[i]>max)  //这道题仅仅只是保存最大值而已
//             max=dp[i];
//     }
//     return max;
// }
//2.由于是当前状态只与前面一个状态有关，故可以只用一个变量来代替上面的dp数组

//动态规划的是首先对数组进行遍历，当前最大连续子序列和为 sum，结果为 ans
// 如果 sum > 0，则说明 sum 对结果有增益效果，则 sum 保留并加上当前遍历数字
// 如果 sum <= 0，则说明 sum 对结果无增益效果，需要舍弃，则 sum 直接更新为当前遍历数字
// 每次比较 sum 和 ans的大小，将最大值置为ans，遍历结束返回结果

int maxSubArray(int* nums, int numsSize){
    int sum=0;
    int ans=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        if(sum<=0)
        {
            sum=nums[i];
        }
        else
        {
            sum+=nums[i];
        }
        ans=ans>sum? ans:sum;
    }
    return ans;
}

