class Solution {
public:
    vector<vector<int>>ret;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tmp;
        sort(candidates.begin(), candidates.end());  //排序，更好的判断剪枝
        dfs(candidates,tmp,target,0,0);
        return ret;
    }
    void dfs(vector<int>& candidates,vector<int>& tmp, int target,int sum,int start)
    {
        if(sum==target)
        {
            ret.push_back(tmp);
            return ;
        }
        for(int i=start;i<candidates.size();i++)
        {
            if(sum+candidates[i]>target)
                continue;
            tmp.push_back(candidates[i]);
            dfs(candidates,tmp,target,sum+candidates[i],i);
            tmp.pop_back();
        }
    }
};