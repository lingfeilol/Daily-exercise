class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int > tmp;
        tmp[0]=1;
        int ret=0,pre=0;
        for(int i=0;i<nums.size();i++)
        {
            pre+=nums[i];
            if(tmp.find(pre-k)!=tmp.end()) ret+=tmp[pre-k];
            tmp[pre]++;
        }
        return ret;
    }
};