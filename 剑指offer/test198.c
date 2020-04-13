class Solution {
public:
    bool tmp[101][101];
    int movingCount(int m, int n, int k) {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                tmp[i][j]=0;  //假设没走过的为0，走过的为1
            }
        }
        return dfs(0,0,m,n,k);
    }
    int dfs(int i,int j,int m,int n,int k)
    {
        if(i>=m|| j>=n|| i<0|| j<0|| (i/10+i%10+j/10+j%10)>k || tmp[i][j]==1) 
            return 0;
        tmp[i][j]=1;//记录走过
        return  dfs(i+1,j,m,n,k) + dfs(i,j+1,m,n,k)+1 ; //类似于求路径节点个数 向下向右走
    }
};