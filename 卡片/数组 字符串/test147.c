
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    *returnSize=rowIndex+1;
    int *ret=(int*)malloc(sizeof(int)*(*returnSize));
    memset(ret,0,sizeof(int)*(*returnSize));
    ret[0]=1;
    for(int i=1;i<=rowIndex;i++)
    {
        for(int j=i;j>=1;j--)   //从后往前 
        {
            ret[j]+=ret[j-1];
        }
    }
    return ret;

}
