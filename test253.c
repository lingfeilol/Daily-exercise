class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        if(n==0 || m==0 || indices.empty()) return 0;
        vector<vector<int>> tmp(n,vector<int>(m));
        for(auto v:indices)
        {
            int row=v[0],col=v[1];
            for(int j=0;j<m;j++)
            {
                tmp[row][j]++;
            }
            for(int i=0;i<n;i++)
            {
                tmp[i][col]++;
            }
        }
        int ret=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(tmp[i][j]%2)
                    ret++;
            }
        }   
        return ret;
    }
};