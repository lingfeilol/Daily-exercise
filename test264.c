class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int i=0,count=0;
        while(i<f.size())
        {
            if(f[i]==0&&(i==0 || f[i-1]==0)&&(i==f.size()-1|| f[i+1]==0))
            {
                count++;
                f[i]=1;
            }
            i++;
        }
        return count>=n;
    }
};