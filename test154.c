int compare(void * n1,void*n2)
{
    return *(int *)n1-*(int *)n2;
}
int minIncrementForUnique(int* A, int ASize){
    qsort(A,ASize,sizeof(int),compare);
    int i=0;
    int count=0;
    for(i=1;i<ASize;i++)
    {
        if(A[i]<=A[i-1])    //小于等于的情况下，开始加1，直接加到比前一个数大1即可
        {
            count+=A[i-1]-A[i]+1;
            A[i]=A[i-1]+1;
        } 
    }
    return count;
}