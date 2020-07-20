
#include<iostream>
#include<list>
using namespace std;

typedef pair<int,int> PII;
list<PII> ls;
int count=0;
int main()
{
    int n,k;
    cin>>n>>k;
    int opt=0;
    for(int i=0;i<n;i++)
    {
        cin>>opt;
        if(opt==1)
        {
            int x,y;
            cin>>x>>y;
            ls.push_front({x,y});
            count++;
            if(count > k) //超容量了.尾删
            {
                ls.pop_back();
            }
        }
        else
        {
            int x;
            cin>>x;
            auto it=ls.begin();
            int flag=0;
            for(;it!=ls.end();++it)
            {
                if((*it).first == x )
                {
                    flag=1;
                    cout<<(*it).second<<endl;
                    int tmpx=(*it).first , tmpy=(*it).second;
                    ls.erase(it);
                    count--;
                    ls.push_front({tmpx,tmpy});
                    count++;
                    break;
                }
            }
            if(flag==0)
                cout<<-1<<endl;
        }
    }
    return 0;
}