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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return dfs(preorder,0,preorder.size()-1);
    }
    TreeNode* dfs(vector<int>& preorder,int begin,int end)
    {
        if(begin>end)
            return nullptr;
        TreeNode* root=new TreeNode(preorder[begin]);
        int pos=begin+1;
        for(;pos<=end;pos++)
        {
            if(preorder[pos]>root->val) //找到左子树的区间
                break;
        }
        root->left=dfs(preorder,begin+1,pos-1);
        root->right=dfs(preorder,pos,end);
        return root;
    }
};