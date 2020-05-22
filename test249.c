class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        if(time.size()==0|| time.size()==1) return 0;
        int count=0;
        vector<int> a(60,0);
        int tmp=0;
        for(auto e:time)
        {
            tmp=e%60;
            count+=a[(60-tmp)%60];
            a[tmp]++;
        }
        return count;
    }
};