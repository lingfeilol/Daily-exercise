int mypow(int a,int b)
{
    int ret=1;
    while(b>0)
    {
        if(b&1)
            ret=(ret*a)%1337;
        a=(a*a)%1337;
        b/=2;
    }
    return ret%1337;
}

int superPow(int a, int* b, int bSize){
    int end=bSize-1;
    int x=a%1337;   
    int ret=1;
    for(int i=end;i>=0;i--)
    {
        ret=(ret*mypow(x,b[i]))%1337;
        x=mypow(x,10)%1337;
    }
    return ret;
}