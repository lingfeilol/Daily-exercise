/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumbers(int* nums, int numsSize, int* returnSize){
    int tmpsum=0;
    int i=0;
    for(i=0;i<numsSize;i++)
    {
        tmpsum^=nums[i];
    }
    int index=0;
    // while(tmpsum&1==0)
    // {
    //     index+=1;   //找到是最低位第几位不同    就是异或为一的那一位
    //     tmpsum>>1;  //继续找
    // }
    index=(-tmpsum)&tmpsum;
    //找到哪一位的下标后开始分组
    int* ret=(int *)malloc(sizeof(int)*2);
    memset(ret,0,sizeof(int)*2);
    *returnSize=2; 
    for(i=0;i<numsSize;i++)   //把那两个数分开为两组，分别异或出来
    {
        if((nums[i] & index)==0)  //这一位是1的为一组 并再次异或  位运算符低于关系运算符
            ret[0]^=nums[i];
        else  //这一位是0的为一组
            ret[1]^=nums[i];
    }
    return ret;

}