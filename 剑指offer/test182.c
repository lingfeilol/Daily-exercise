//动态规划
//除开边界条件，先确定状态转移方程   dp[i][j]=max(dp[i-1][j],dp[i][j-1])+grid[i][j];
//边界条件就是 第一行 和第一列时，只能 直着走
int Max(int a,int b)
{
    return a>b? a:b;
}
int maxValue(int** grid, int gridSize, int* gridColSize){ 
    if (grid == NULL || gridSize <= 0) {
        return 0;
    }
    int row=gridSize;
    int col=*gridColSize;
    int **dp=(int**)calloc(row*col,sizeof(int*));
    for(int i=0;i<gridSize;i++)
    {
        dp[i]=(int*)calloc(col,sizeof(int));
    }
    dp[0][0]=grid[0][0];
    for(int i=1;i<row;i++)
    {
        dp[i][0]=dp[i-1][0]+grid[i][0];
    }
    for(int i=1;i<col;i++)
    {
        dp[0][i]=dp[0][i-1]+grid[0][i];
    }
    int i=0;
    int j=0;
    for( i=1;i<row;i++)
    {
        for( j=1;j<col;j++)
        {
            dp[i][j]=grid[i][j]+Max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[row-1][col-1];
}