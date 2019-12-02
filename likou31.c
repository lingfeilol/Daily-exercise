/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void* p1,const void* p2)
 {
     return *(int*)p1-*(int*)p2;
 }
int* sortedSquares(int* A, int ASize, int* returnSize){
    int * B=(int *)malloc(sizeof(int)*ASize);
    *returnSize=ASize;
    int i=0;
    for(i=0;i<ASize;i++)
    {
        B[i]=A[i]*A[i];
    }
    qsort(B,ASize,sizeof(int),compare);
    return B;

}