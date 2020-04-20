int dfs(char** grid, int gridSize, int* gridColSize, int row, int col) 
{
    if (row < 0 || row == gridSize || col < 0 || col == *gridColSize || grid[row][col] == '0') {
        return 0;
    }
    grid[row][col]='0';//记录过的位置标记为'0',证明已经走过
    int x[4]={1,0,-1,0};
    int y[4]={0,1,0,-1};
    for(int i=0;i<4;i++)
    {
        dfs(grid,gridSize,gridColSize,row+x[i],col+y[i]);//从该点一直上下左右找下去，直到碰到边界或者碰到水
    }
    return 0;
}

int numIslands(char** grid, int gridSize, int* gridColSize){
    int count=0;
    for(int i=0;i<gridSize;i++)
    {
        for(int j=0;j<*gridColSize;j++)
        {
            if(grid[i][j]=='1')//找到一个陆地口准备搜索
            {
                count++;
                dfs(grid,gridSize,gridColSize,i,j);
            }
        }
    }
    return count;

}