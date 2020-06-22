#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    while(cin>>s>>t)
    {
        if(s.size() > t.size())
            swap(s,t);
        int slen=s.size(),tlen=t.size();
        int index=-1;
        int len=0;
        for(int i = 0;i < slen;i++)
        {
            for(int j = 0;j < tlen;j++)
            {
                if(s[i]==t[j])
                {
                    int tmp=i;
                    int k=0;
                    int m=i,n=j;
                    while(s[m]==t[n])
                    {
                        m++;
                        n++;
                        k++;
                    }
                    if(len < k)
                    {
                        len=k;
                        index=tmp;
                    }
                }
            }
        }
        string ret=s.substr(index,len);
        cout<<ret<<endl;
    }
    return 0;
}