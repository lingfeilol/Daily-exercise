/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //分治法，先构建根节点，在深度优先一直递归构建右子树，在构建左子树
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildBTree(inorder,postorder.size()-1,postorder,0,postorder.size()-1);
    }

    TreeNode* buildBTree(vector<int>& inorder,int end,vector<int>& postorder,int left,int right)
    {
        if(end<0 || left>right ) return 0;
        int inpos=left;
        while(inpos<=right&& inorder[inpos]!=postorder[end])//在中序数组里找到根节点下标
        {
            inpos++;
        }
        TreeNode* node=new TreeNode(postorder[end]);//根节点先连好
        if(inpos+1<=right) //有右子树 注意要先建右子树，毕竟是后序遍历，根节点在后面
            node->right=buildBTree(inorder,end--,postorder,inpos+1,right);//先把右子树建完
        if(inpos-1>=left)//有左子树
            node->left=buildBTree(inorder,end--,postorder,left,inpos-1);//再把左子树建完
        return node;
    }
};