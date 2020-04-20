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
    void dfs(TreeNode* root,vector<string>& ret,string path)//
    {
        //前序遍历的思想
        path+=to_string(root->val);
        if(!root->left&& !root->right)
        {
            ret.push_back(path);
            return ;
        }
        if(root->left)
            dfs(root->left,ret,path+"->");
        if(root->right)
            dfs(root->right,ret,path+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ret;
        if(!root)   return ret;
        dfs(root,ret,"");
        return ret;
    }
};