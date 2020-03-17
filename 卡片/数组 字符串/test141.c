/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    if(matrixSize==0){
        *returnSize=0;
        return NULL;
    }
    *returnSize=matrixSize*(*matrixColSize);
    int* ret=(int*)malloc(sizeof(int)*(*returnSize));   
    int k=0;
    int row1=0;
    int col1=0;
    int row2=matrixSize-1;
    int col2=*matrixColSize-1;
    while(row1<=row2 && col1<=col2)
    {
        for(int c=col1;c<=col2;c++)  ret[k++]=matrix[row1][c];
        for(int r=row1+1;r<=row2;r++)  ret[k++]=matrix[r][col2];
        if(row1<row2 && col1<col2 )
        {
            for(int cc=col2-1;cc>col1;cc--)
            {
                ret[k++]=matrix[row2][cc];
            }
            for(int rr=row2;rr>row1;rr--)
            {
                ret[k++]=matrix[rr][col1];
            }
               
        }
        row1++;
        col1++;
        row2--;
        col2--;
    }

    
    return ret;
}