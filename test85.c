/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void* s1,const void* s2)
 {
     return  *(int*)s1 - *(int*)s2;
 }
int* sortedSquares(int* A, int ASize, int* returnSize){
    int* B=(int *)malloc(sizeof(int )*ASize);
    for(int i=0;i<ASize;i++)
    {
        B[i]=A[i]*A[i];
    }
    *returnSize=ASize;
    qsort(B,*returnSize,sizeof(int),compare);
    return B;
}