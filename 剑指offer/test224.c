class Solution {
public:
    vector<vector<int>> ret;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> tmp;//选择列表
        vector<bool> used(nums.size(),false);
        sort(nums.begin(),nums.end());
        dfs(nums,tmp,used);
        return ret;
    }
    void dfs(vector<int>& nums,vector<int>& tmp,vector<bool>& used)
    {
        if(tmp.size()==nums.size())
        {
            ret.push_back(tmp);
            return ;
        }
        for(int i=0;i<nums.size();i++) //判断剪枝条件
        {
            if(!used[i])
            {
                if(i>0&& nums[i]==nums[i-1] && !used[i-1])
                {
                continue;
                }
                tmp.push_back(nums[i]);
                used[i]=true; //每个数只能使用一次， 在进行下一层递归时需要知道当前位置的元素已经被使用过
                dfs(nums,tmp,used);
                tmp.pop_back();
                used[i]=false;//只需要让下一层知道对应位置被使用过,同一层级的实际上使用的是其他位置的元素
            }
            
        }
    }
};