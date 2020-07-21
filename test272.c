class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=3) return 0;

        sort(nums.begin(),nums.end());
        int ret=INT_MAX;
        for(int i=0,j=3;i<=3 && j>=0;i++,j--)
        {
                ret=min(ret,(nums[nums.size()-1-j]-nums[i]));
        }
        return ret;
    }
};