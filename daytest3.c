#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
 
bool issushu(int x)
{
    if(x==1) return false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
 
 
int main()
{
    int n=0;
    while(cin>>n)
    {
        set<int> ss;
        for(int i=0;i<100000;i++)
        {
            if(issushu(i))
                ss.insert(i);
        }
        int cha=1e6;
        int ret1=0;
        int ret2=0;
         
        for(auto e:ss)
        {
            if(ss.count(n-e)!=0)
            {
                int tmp=n-e;
                if(abs(tmp-e)<cha){
                    ret1=e;
                    ret2=tmp;
                    cha=tmp-e;
                }
            }
        }
        cout<<ret1<<endl;
        cout<<ret2<<endl;
    }
    return 0;
     
}