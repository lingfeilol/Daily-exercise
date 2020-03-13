int singleNumber(int* nums, int numsSize){
    int ret=0;
    for(int i=0;i<32;i++)   //判断所有数在每一位的比特位的值的和
    {
        int count=0;
        for(int j=0;j<numsSize;j++)
        {
            if(((unsigned int)nums[j]>>i) &1 ==1)   //统计32位比特位上每一位的1的个数
                count++;
        }
        if((count%3!=0)) //这一列比特位上的1的个数不是三的倍数，说明要找的那个元素的这一个比特位是1
            ret|= ((unsigned int)1<<i);  //这一位是1，在对应的位置上把他放进答案里
    }
    return ret;
}