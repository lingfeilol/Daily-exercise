// write your code here cpp
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)a#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        vector<vector<int>> board(n+1,vector<int>(m+1));
        for(int i=0;i<k;i++)
        {
            int x,y;
            cin>>x>>y;
            board[x][y]=1;
        }
        
        vector<vector<double>> dp(n+1,vector<double>(m+1));
        dp[1][1]=1.0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(board[i][j]==1)
                {
                    dp[i][j]=0;
                    continue;
                }
                if(!(i == 1 && j ==1)) //跳过起点
                {
                     dp[i][j] = dp[i-1][j]*(j == m? 1 : 0.5) + dp[i][j-1]*(i == n?1:0.5);
                    
                }
            }
        }
        printf("%.2lf\n", dp[n][m]);
    }
    
    return 0;
}
    {
        vector<string> vs(n);
        for(int i=0;i<n;i++)
        {
            cin>>vs[i];
        }
        sort(vs.begin(),vs.end());
        vector<bool> valid(n,true);
        for(int i=0;i<n-1;i++)
        {
            //两条文件相同
            //或者前缀相同且下一位为‘/’
            //即可不需要单独创建而是被下一条直接递归创建了
            if(vs[i]==vs[i+1])
                valid[i]=false;
            else if(vs[i].size()<vs[i+1].size()
                && vs[i]==vs[i+1].substr(0,vs[i].size()) 
                 && vs[i+1][vs[i].size()]=='/')
                valid[i]=false;
        }
        for(int i=0;i<n;i++)
        {
            if(valid[i])
                cout<<"mkdir -p "<<vs[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}