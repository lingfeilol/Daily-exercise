class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;  
        if(matrix.size()==0)
            return ret;
        int dx[]={0,1,0,-1},dy[]={1,0,-1,0};//顺时针方向
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> visit(row,vector<int>(row*col,0));
        int x=0,y=0;//坐标，从00出发
        int s=0;//控制遍历方向
        for(int i=0;i<row*col;i++)//模拟，遇到边界或者访问过的就换方向
        {
            ret.push_back(matrix[x][y]);
            matrix[x][y]=1;//标记被访问过
            int xtmp=x+dx[s],ytmp=y+dy[s];//先正常按轨迹走，再判断是否合法
            if(xtmp<0|| xtmp>=row|| ytmp<0|| ytmp>=col|| matrix[xtmp][ytmp]==1)//不合法，就转方向
            {
                s=(s+1)%4;
                xtmp=x+dx[s],ytmp=y+dy[s];
            }
            x=xtmp,y=ytmp;    
        }
        return ret;
    }
};