int Max(int a,int b)
{
    return a>b? a:b;
}
int cuttingRope(int n){
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    
    for( int i=3;i<=n;i++)
    {
        dp[i]=1;   //初始化
        for(int j=1;j<i;j++)   //从哪剪
        {
            dp[i]=dp[i]>Max((i-j)*j,(i-j)*dp[j])? dp[i]:Max((i-j)*j,(i-j)*dp[j]);
            // 不剪， 就只剪一次看看  ，剪了之后在考虑剪不剪
        }
    }
    return dp[n];
}