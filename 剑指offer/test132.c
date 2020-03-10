int missingNumber(int* nums, int numsSize){
    int begin=0;
    int end=numsSize;//因为是[o,numssize]中的n个数字，所以必须要考虑完整
    while(begin<end)
    {
        int mid=begin+(end-begin)/2;
        if(nums[mid]==mid)  //中间的相同那就说明 前面的也都是相等的
            begin=mid+1;    //往后面比较
        else
            end=mid;    //说明到中间前，就已经出问题了，往前面找
    }
    return begin;

}