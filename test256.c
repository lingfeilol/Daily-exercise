class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int map[101]={0};
        for(auto e:nums)
        {
            map[e]++;
        }
        int sum=0;
        for(int i=0;i<=100;i++)//相当于从小到大，当前数i前面都是小于它的，加起来即可
        {
            int tmp=map[i];
            map[i]=sum;
            sum+=tmp;
        }
        vector<int> ret;
        for(auto e:nums)
        {
            ret.push_back(map[e]);
        }
        return ret;
    }
};