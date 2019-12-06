void duplicateZeros(int* arr, int arrSize){
    int i,j;
    for(i=0;i<arrSize;i++)
    {
        if(arr[i]==0)
        {
            for(j=arrSize-1;j>i+1;j--)//把0后面的一个数赋值给下一个数
                arr[j]=arr[j-1];
                arr[j]=0;
                i++;
        }
    }
    return ;
}