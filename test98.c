/*
解题思路：此题是用一个数的数组形式 + 一个整数， 返回和的数组形式。
模拟加法进行逐位相加， 从低位向高位相加，最后整体逆置，得到最终结果
1. 每一位的值 = 对应位值的和 + 前一位的进位
2. 每一位的值计算出来之后，需要检查是否需要进位
3. 最高位计算之后，需要考虑是否还需要向上进位
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 void reverse(int *arr,int begin,int end)
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
int* addToArrayForm(int* A, int ASize, int K, int* returnSize){
    int* addret=(int *)malloc(sizeof(int)*(10001));
    int reti=0;
    int Ai=ASize-1;
    int ret=0;
    int next=0;
    while(Ai>=0 || K>0)
    {
        int x1=0;
        if(Ai>=0)
        {
            x1=A[Ai];
            Ai--;
        }
        int x2=0;
        if(K>0)
        {
            x2=K%10;
            K=K/10;
        }
        ret=x1+x2+next;
        if(ret>9)
        {
            ret=ret%10;
            next=1;
        }
        else
        {
            next=0;
        }
        addret[reti++]=ret;
    }
    if(next==1)
    {
        addret[reti++]=1;
    }
    reverse(addret,0,reti-1);
    *returnSize=reti;
    return addret;
}