/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ret;  //存结果
    vector<int > tmp;  //存路径

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        dfs(root,sum);
        return ret;
    }
    void dfs(TreeNode* root,int sum)
    {
        if(!root)
            return ;
        //前序遍历
        //做选择
        sum-=root->val;
        tmp.push_back(root->val);
        //判断
        if(sum==0&& !root->left && !root->right)
        {
            ret.push_back(tmp);  //满足条件，存入结果
        }
        //进入下一层决策树
        dfs(root->left,sum);
        dfs(root->right,sum);
        //回溯
        sum+=root->val;
        tmp.pop_back();
    }
};