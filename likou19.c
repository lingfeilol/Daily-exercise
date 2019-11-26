int isprime(int x)
{
    if(x==0) return 0;
	if(x==1) return 0;
    int i;
    int falg=1;
    for(i=2;i*i<x;i++)
    {
        if(x%i==0)
        {
            falg=-1;
        }
    }
    return falg;
}
int jisuanzhiwei(int x)
{
    int zhiwei=0;
     while(x)
        {
            if(x&1==1)
            {
                zhiwei++;
            }
            x=x>>1;
        }
    return zhiwei;
}
int countPrimeSetBits(int L, int R){
    int i =L;
    int count=0;
    for(i=L;i<R;i++)
    {
        if(isprime(jisuanzhiwei(i)))
           {
                count++;
            }
    }
    return count;

}