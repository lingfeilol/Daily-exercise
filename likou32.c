int fib(int N){
    int f0=0;
    int f1=1;
    int f2=0;
    if(N==0) return 0;
    if(N==1)  return 1;
    int i=0;
    for(i=1;i<N;i++)
    {
        f2=f0+f1;
        f0=f1;
        f1=f2;
    }
    return f2;
}