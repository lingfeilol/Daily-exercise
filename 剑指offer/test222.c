class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int tmp=0;

        for(auto e:nums)
        {
            tmp^=e;
        }
        int k=tmp&(-tmp); //得到最右边为1的那一位
        vector<int> ret(2,0);
        for(auto e:nums)
        {
            if(e&k)
                ret[0]^=e;
            else
                ret[1]^=e;
        }
        return ret;
    }
};