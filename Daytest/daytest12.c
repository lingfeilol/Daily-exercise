// write your code here cpp
#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
typedef pair<int,int> PII;
queue<PII> q;

int count[10][10]={0};//记录层数

void bfs(vector<vector<char>>& board)
{
    while(!q.empty())
    {
        
        auto tmp=q.front();
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int x=tmp.first+dx[i],y=tmp.second+dy[i];
            if(x==9&& y==8)
            {
                count[x][y]=count[tmp.first][tmp.second];
                break;
            }
            if(x>=0&& x<10&& y>=0&& y<10 && board[x][y]=='.')
            {
                board[x][y]='#';
                q.push({x,y});
                count[x][y]=count[tmp.first][tmp.second]+1;
            }
        }

    }
}
int main()
{
    vector<vector<char>> board(10,vector<char>(10));
    while(cin>>board[0][0])
    {
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(i==0&& j==0)
                    continue;
                cin>>board[i][j];
            }
        }
        q.push({0,1});
        board[0][1]='#';
        count[0][1]=1;
        bfs(board);
        cout<<count[9][8]<<endl;
    }
    
    return 0;
}