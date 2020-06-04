#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[100001];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int tmp=0;
    int ret=-1e5;
    for(int i=0;i<n;i++)
    {
        if(tmp<0)//只要是负数，不可能在在最大和的子数组中，所以置为0；
            tmp=0;
        tmp+=nums[i];//前缀和
        if(tmp>ret)
            ret=tmp;
    }
    cout<<ret<<endl;
   
}