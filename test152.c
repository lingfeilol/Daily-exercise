/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void insert(int *a,int m,int k, int x)  //先写一个顺序表的插入，查一次尾部索引m也更新
 {
    for(int i=m;i>k;i--)
     {
         a[i]=a[i-1];
     }
    a[k]=x;
 }
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    int * target=(int*)malloc(sizeof(int )*numsSize);
    *returnSize=numsSize;
    int i=0;
    for(i=0;i<numsSize;i++)
    {
        insert(target,i,index[i],nums[i]);
    }
    return target;
}