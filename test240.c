class Solution {
public:
    int waysToStep(int n) {
        int f0=1,f1=1,f2=2;
        int ans=0;
        if(n<3) return n;
        for(int i=3;i<=n;i++)
        {
            ans=(f2+f1)%1000000007+f0;
            f0=f1;
            f1=f2;
            f2=ans%1000000007;
        }
        return ans%1000000007;
    }
};