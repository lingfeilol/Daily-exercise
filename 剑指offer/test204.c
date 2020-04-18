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
    //使用中序遍历的思想
    TreeNode* ans=new TreeNode(0);
    TreeNode* prev=ans; //假的头节点
    void inorder(TreeNode*root)
    {
        if(!root)
            return ;
        inorder(root->left);

        root->left=NULL;//左节点置空
        prev->right=root; //上一个
        prev=root; //更新

        inorder(root->right);
    }
    TreeNode* convertBiNode(TreeNode* root) {
        inorder(root);
        return ans->right;
    }
};