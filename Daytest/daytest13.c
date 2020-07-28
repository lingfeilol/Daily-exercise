#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef pair<int,int> PII;

//根据先考虑体重，再考虑升高排序
bool compare_w(pair<int,int>& a,pair<int,int>& b)
{
    if(a.first != b.first)
        return a.first<=b.first;
    else 
        return a.second > b.second;
}
int main()
{
    int n;
    while(cin>>n)
    {
        vector<PII> vp(n);
        for(int i=0;i<n;i++)
        {
            int id;
            cin>>id;
            int x,y;
            cin>>x>>y;
            vp[i]=make_pair(x,y);
        }
        sort(vp.begin(),vp.end(),compare_w);
        vector<int> dp(n+1);
        dp[0]=1;
        int maxret=0;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(vp[j].second <= vp[i].second && dp[j]+1>dp[i])
                    dp[i]=dp[j]+1;
            }
            maxret=max(maxret,dp[i]);
        }
        cout<<maxret<<endl;
    }
    return 0;
}