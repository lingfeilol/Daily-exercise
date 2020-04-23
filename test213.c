class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ret(2,0);
        int tmp=0;
        for(auto e:nums)
        {
            tmp^=e;
        }
        int k=tmp&(-tmp); //保留最右边的1，其他位全为0
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]&k)  //分为两组 
                ret[0]^=nums[i];
            else
                ret[1]^=nums[i];
       }
        return ret;
    }
};