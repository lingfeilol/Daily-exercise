int min(int a,int b,int c)
{
    if(a<b)
    {
        return a<c? a:c ;
    }
    else
        return b<c? b:c ;
}
int nthUglyNumber(int n){
    if(n==0) return 0;
    int *ret=(int*)malloc(sizeof(int)*n);
    ret[0]=1;
    int p1=0;
    int p2=0;
    int p3=0;
    for(int i=1;i<n;i++)
    {
        ret[i]=min(ret[p1]*2,ret[p2]*3,ret[p3]*5);   //只会是前面数的 2 3 5倍数
        if(ret[i]==ret[p1]*2)
            p1++;
        if(ret[i]==ret[p2]*3)
            p2++;
        if(ret[i]==ret[p3]*5)
            p3++;
    }
    return ret[n-1];
}