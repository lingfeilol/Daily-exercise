class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> tmp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                tmp.push_back(i);
            }
        }
        for(int i=1;i<tmp.size();i++)
        {
            if(tmp[i]-tmp[i-1]-1<k)
                return false;                
        }
        return true;
    }
};