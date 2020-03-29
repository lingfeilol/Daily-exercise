/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 
 /* 滑动窗口解法, 维护l, r, sum */
/* sum = target, 输出结果, sum-=l, l++ */
/* sum < target, r++, sum += r */
/* sum > target, sum -= l, l++ */
//*returnSize是返回的二维数组的行数（答案的个数）
//** returnColumnSizes 每个答案的里面的数字个数 存在一个数组里

int** findContinuousSequence(int target, int* returnSize, int** returnColumnSizes){
    int n=target/2; //因为至少含有两个数，所以答案的个数为一半
    int ** ret=(int **)malloc(sizeof(int*)* n);   
    *returnColumnSizes=(int *)malloc(sizeof(int)*n);
    int left=1,right=2,k=0;//初始化窗口
    int num=left+right;
    *returnSize=0;
    while(left<right)   //如果left大于right时，那就说明区间里全是大于target的了，不满足条件
    {
        if(num==target) //满足条件
        {
            ret[*returnSize]=(int *)malloc(sizeof(int)*(right-left+1));//先开空间
            for(k=left;k<=right;k++)//再赋值
            {
                ret[*returnSize][k-left]=k; //把每个数传进去
                (*returnColumnSizes)[*returnSize]=right-left+1;//这个答案的数字个数
            }
            (*returnSize)++;
            num-=left; //同一个数开头的，最多只能满足这一次情况，所以要划动一位
            left++;
        }
        else if(num<target)
        {
            right++;//先移动，在加值
            num+=right;
        }
        else
        {
            num-=left; //先减值，在移动
            left++;       
        }
    }
    return ret;
}