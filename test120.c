/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //只要数组有序，就要想到   双指针
 //类似于二分查找
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int begin =0;
    int end=numbersSize-1;
    *returnSize=2;
    int *ret=(int *)malloc(sizeof(int)* (*returnSize));
    memset(ret,-1,sizeof(int)*2);
    while(begin<end)
    {
        int sum=numbers[begin]+numbers[end];
        if(sum==target)
        {   
            ret[0]=begin+1;
            ret[1]=end+1;
            break;
        }
        else if(sum<target)   //因为是有序的数组，小了就往后找个大的 
        {
            begin++;
        }
        else   //大了，从后往前换个小的
            end--;
    }
    return ret;

}