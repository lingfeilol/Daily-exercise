class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int tmp=0,max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            tmp+=nums[i];
            max=tmp>max? tmp:max;
            if(tmp<0)
                tmp=0;  
        }
        return max;

    }
};