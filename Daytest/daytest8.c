// write your code here cpp
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int dx[]={0,1,0,-1}, dy[]={1,0,-1,0};
int  ret=0;
typedef pair<int,int> PII;
queue<PII> q;

void dfs(vector<vector<char>>& board,int x,int y,int m,int n)
{
    ret++;
    board[x][y]='#';
    for(int i=0;i<4;i++)
    {
         int new_x=x+dx[i],new_y=y+dy[i];
         if(new_x>=0 && new_x<m && new_y>=0 && new_y<n && board[new_x][new_y]=='.')
         {
             dfs(board,new_x,new_y,m,n);
         }
    }
}
void bfs(vector<vector<char>>& board,int m,int n)
{
    while(!q.empty())
    {
        PII cur=q.front();
        q.pop();

        
        for(int i=0;i<4;i++)
        {
            int new_x=cur.first+dx[i],new_y=cur.second+dy[i];
            if(new_x>=0 && new_x<m && new_y>=0 && new_y<n && board[new_x][new_y]=='.')
            {
                ret++;
                q.push({new_x,new_y});
                board[new_x][new_y]='#';
            }
        }
    }
}
    

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        vector<vector<char>> board(m,vector<char>(n));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>board[i][j];
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='@')
                {
                    //dfs(board,i,j,m,n);
                    q.push({i,j});
                    ret++;
                    bfs(board,m,n);
                    cout<<ret<<endl;
                }
            }
        
        ret=0;
    }
    return 0;
}