//与989题类似解法
//先从尾部开始，记录进位，判断，迭代，再反转输出

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void reverser(int* arr,int begin,int end)
 {
     while(begin<end)
     {
         int tmp=arr[begin];
         arr[begin]=arr[end];
         arr[end]=tmp;
         begin++;
         end--;
     }
 }
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int * tmp=(int *)malloc(sizeof(int)*(digitsSize+1));
    int end=digitsSize-1;
    int k=0;
    int next=0;
    int plusone=1;
    while(end>=0)
    {
        int x1=digits[end--]+plusone+next;
        if(x1>9)
        {
            x1%=10;
            next=1;
        }
        else
        {
            next=0;
        }
        plusone=0;
        tmp[k++]=x1;
    }
    if(next==1)
    {
        tmp[k++]=1;
    }
    reverser(tmp,0,k-1);
    *returnSize=k;
    return tmp;
}
