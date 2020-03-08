

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructArr(int* a, int aSize, int* returnSize){
    int left=1;
    int right=1;
    int* ret=(int*)malloc(sizeof(int)*aSize);
    for(int i=0;i<aSize;i++)
    {
        ret[i]=left; 
        left*=a[i];   // 从左到右的 0到i-1的乘积
    }
    for(int i=aSize-1;i>=0;i--)
    {
        ret[i]*=right;
        right*=a[i];  //从右到左   i打n-1的乘积
    }
    *returnSize=aSize;
    return ret;
}

