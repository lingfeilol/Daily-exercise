class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        if(len<2)
            return 0;
        int ret=0;
        int minval=prices[0];
        for(int i=1;i<len;i++)
        {
            ret=max(ret,prices[i]-minval);
            minval=min(minval,prices[i]);
        }
        return ret;
    }
};