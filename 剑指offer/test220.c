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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int start=0;
        return buildBTree(preorder,start,inorder,0,inorder.size()-1);
    }
    TreeNode* buildBTree(vector<int>& preorder,int &start,vector<int>& inorder,int left,int right)
    {
        if(start>inorder.size()|| left>right)
            return 0;
        int inpos=left;
        while(inpos<=right && preorder[start]!=inorder[inpos])
        {
            inpos++;//中序遍历里找到根节点的下标
        }
        TreeNode* node=new TreeNode(preorder[start]);
        if(inpos-1>=left)
            node->left=buildBTree(preorder,++start,inorder,left,inpos-1);
        if(inpos+1<=right)
            node->right=buildBTree(preorder,++start,inorder,inpos+1,right);
        return node;
    }
};