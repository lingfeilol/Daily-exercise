int kfun(int n1,int n2)
{
    return (n1-n2)>0? n1-n2:n2-n1;
}

int findPairs(int* nums, int numsSize, int k){
    int count=0;
    int i=0;
    int j=0;
    for(i=0;i<numsSize;i++)
        for(j=i+1;j<numsSize;j++)
            if(kfun(nums[i],nums[j])==k)
                count++;
    return count;
}