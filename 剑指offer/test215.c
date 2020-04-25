class Solution {
public:
    vector<vector<int>> ret;//结果集
    vector<vector<int>> permute(vector<int>& nums) {  
        vector<int> tmp;//选择列表
        backtrack(nums,tmp);
        return ret;  
    }
     void backtrack(vector<int>& nums,vector<int>& tmp)
    {
        if(tmp.size()==nums.size()) //满足条件，保存结果集
        {
            ret.push_back(tmp);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(find(tmp.begin(),tmp.end(),nums[i])==tmp.end())//判断是否出现过
            {
                tmp.push_back(nums[i]);//做选择
                backtrack(nums,tmp);//进入下一层决策树
                tmp.pop_back();//撤销选择
            }
        }
    }
};