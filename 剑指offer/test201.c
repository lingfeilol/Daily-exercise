class Solution {
public:
    vector<double> twoSum(int n) {
        int dp[15][70];
        memset(dp,0,sizeof(dp));

        //边界状态
        int i,j,k;
        for(i=1;i<=6;i++)
        {
            dp[1][i]=1;  //只有一个筛子时，能出现的点数之和的出现次数
        }
        //递推
        for(i=2;i<=n;i++) //筛子个数
        {
            for(j=i;j<=6*i;j++) //对应不同筛子 能出现的点数情况
            {
                for(k=1;k<=6;k++)
                {
                    if(j-k<=0)
                    {
                       break;
                    }
                    dp[i][j]+=dp[i-1][j-k];
                }
            }
        }
        //求概率
        int all=pow(6,n);//总共出现的情况
        vector<double> ret;
        for(i=n;i<=6*n;i++)
        {
            ret.push_back(dp[n][i]*1.0/all);
        }
        return ret;
    }
};