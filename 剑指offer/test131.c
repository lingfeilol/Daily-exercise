int search(int* nums, int numsSize, int target){
    int begin=0;
    int end=numsSize-1;
    int count=0;
    while(begin<=end )
    {
       //int mid=(begin+end)/2;
       int mid=begin+(end-begin)/2;
        if(nums[mid]==target)
        {
            count++;
            for(int i=mid-1;i>=0;i--)   //因为是排序数组，所以再从中往前找
            {
                if(nums[i]==target)   //有了就加一，没有的话后面也不会再有了
                    count++;
                else
                    break;
            }
            for(int j=mid+1;j<numsSize;j++)  //从中往后
            {
                if(nums[j]==target)
                    count++;
                else
                    break;
            } 
            return count;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
        else 
            begin=mid+1;
     
    }
    return 0;
}