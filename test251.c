class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min=INT_MAX;
        for(auto n:nums)
        {
            if(min>n)
                min=n;
        }
        int ret=0;
        for(auto n:nums)
        {
            ret+=(n-min);
        }
        return ret;
    }
};