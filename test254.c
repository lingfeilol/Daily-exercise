class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> set(nums.begin(),nums.end());
        int ret=0;
        for(auto n:nums)
        {
            if(!set.count(n-1))//可以作为开头
            {
                int x=1;//自己也算一位
                while(set.count(n+1))
                {
                    x++;
                    n++;
                }
                ret=max(ret,x);
            }
        }
        return ret;
    }
};





//动态规划  排序时间复杂度O(nlogn) 空间复杂度O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());//排序
        nums.erase(unique(nums.begin(),nums.end()),nums.end());//去重
        vector<int> dp(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)//满足条件更新长度，不满足则从1开始继续找
                dp[i]=dp[i-1]+1;
        }
        int ret=1;
        for(auto d:dp)
        {
            if(d>ret)
                ret=d;
        }
        return ret;

    }
};