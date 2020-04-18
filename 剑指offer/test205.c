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
    int flag=0; 
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        dfs(root,0,sum);
        if(flag==1)
            return true;
        return false;
    }
    void dfs(TreeNode* root,int n,int sum)
    {
        if(!root)
            return ;
        if(!root->left && !root->right)//到了叶子节点了
        {
            if(sum==n+root->val)
            {
                flag=1;
                return ;
            }
            
        }
        dfs(root->left,n+root->val,sum);
        dfs(root->right,n+root->val,sum);
    }
};