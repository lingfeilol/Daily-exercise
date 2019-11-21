int* sortArrayByParity(int* A, int ASize, int* returnSize){
    int* B=(int* )malloc(sizeof(int )*ASize);
    *returnSize=ASize;
    int start=0; int end=ASize-1;//首尾指针
    int i=0;
    for(i=0;i<ASize;i++)
    {
         if(A[i]%2==0)//偶数放到前面
         {
             B[start]=A[i];
             start++;
         }
         else //奇数放到后面
         {
            B[end]=A[i]; 
            end--;
         }
         if(start>end)
         break;  
    }   
 return B;
}