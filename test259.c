class Solution {
    int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        if(matrix.empty())
            return ret;
        int row=matrix.size(),col=matrix[0].size();
        int x=0,y=0;
        int k=0;
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        for(int i=0;i<row*col;i++)//模拟每一步，走过的标记一下。且判断下一步是否转向
        {
            ret.push_back(matrix[x][y]);
            visited[x][y]=true;
            int next_x=x+dx[k],next_y=y+dy[k];
            //判断这个下一步是否合法
            if(next_x<0 || next_x>=row || next_y<0||next_y>=col|| visited[next_x][next_y])
            {
                //必须转向
                k=(k+1)%4;
                next_x=x+dx[k];//重新赋值成转向后的值
                next_y=y+dy[k];
            }
            x=next_x;
            y=next_y;
        }
        return ret;
    }
};