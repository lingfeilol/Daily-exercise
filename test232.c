class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        
        int left=0;
        int right=nums.size()-1;
        if(nums[right]>nums[left]) return nums[0]; //还是排序数组的情况
        while(left<=right)
        {
            int mid=left+right>>1;
            int tmp=nums[0];
            //两个特殊情况，可以直接得出结果
            if(nums[mid]>nums[mid+1])
                return nums[mid+1];
            if(nums[mid-1]>nums[mid])
                return nums[mid];
            if(nums[mid]>=tmp)
                left=mid+1;
            else if(nums[mid]<tmp)
                right=mid-1;
        }
        return -1;

    }
};