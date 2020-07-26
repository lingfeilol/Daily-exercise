// write your code here cpp
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
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