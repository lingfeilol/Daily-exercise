class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ret(n,0);
        ret[0]=1;
        for(int i=1;i<n;i++)
        {
            ret[i]=ret[i-1]*nums[i-1];
        }
        int postfix=1;
        for(int i=n-1;i>=0;i--)
        {
            ret[i]*=postfix;
            postfix*=nums[i];
        }
        return ret;
    }
};