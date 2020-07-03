// write your code here cpp
#include<iostream>
using namespace std;
double count(int n)///都选不到自己的名字的可能
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return (n-1)*(count(n-1)+count(n-2));
}
double sum(int n)//总的可能性
{
    double ret=1;
    while(n>1)
    {
        ret*=n;
        n--;
    }
    return ret;
}
int main()
{
    int n;
    while(cin>>n)
    {
        printf("%.2f%%\n",100*count(n)/sum(n));
    }
}