/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 //二叉搜索树，中序遍历是升序，逆中序遍历是降序
 //找第k大的数，就降序找
 //找第k小的数，就升序找
int count=0;
int ans=0;

void inorder(struct TreeNode* root, int k)
{
    if(root==NULL)  
        return ;
    inorder(root->right,k);
    count++;  //因为k是局部变量，不能k--操作
    if(count==k)
        ans=root->val;
    inorder(root->left,k);
    return ;
}

int kthLargest(struct TreeNode* root, int k){
    count=0;
    ans=0;
    inorder(root,k);
    return ans;

}