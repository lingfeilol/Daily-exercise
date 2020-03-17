/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void resever(int *a,int begin,int end)
 {
     while(begin<=end)
     {
         int tmp=a[begin];
         a[begin]=a[end];
         a[end]=tmp;
         begin++;
         end--;
     }
 }
int* findDiagonalOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
     if(matrixSize==0){
        *returnSize=0;
        return 0;
    }
    int* ret=(int *)malloc(sizeof(int)* (matrixSize* (*matrixColSize)));
    int k=0;
    int row=0;
    int col=0;
    while(k < (matrixSize*(*matrixColSize)))
    {
        ret[k]=matrix[row][col];
        if((row+col)%2==0)  //为偶数 沿对角线向上 i-1 j+1 如果再
        {
            if(col==*matrixColSize-1)    //处于右顶边界处，往下走一格  切换遍历方向
                row++;
            else     //沿对角线向上 i-1 j+1
            {
                col++;
                if(row)   row--;   //切换遍历顺序，终点在第一行时，直接左移一列，否则   
            }
        }
        else      //为奇数 沿对角线向下   i+1 j-1
        {
            if(row==matrixSize-1)    //最左下边界处在 往其左边走一格
                col++;
            else
            {
                row++;
                if(col)   col--;    
            }
        }
        k++;
    }
    *returnSize=k;
    return ret;
}





