int maxSubArray(int* nums, int numsSize){
    int ret=nums[0];
    int tmpmax=nums[0];   //保存最大的结果
    for(int i=1;i<numsSize;i++)
    {
        if((tmpmax+nums[i])<nums[i])  //最大的结果加上自己后，还比自己小，那就淘汰前面的，从我开始继续找
        {
            tmpmax=nums[i];
        }
        else    //大于的，那就加上自己
            tmpmax+=nums[i];
        
        if(ret<tmpmax)// 也要更新一下答案了    
            ret=tmpmax;
    }
    return ret;

}