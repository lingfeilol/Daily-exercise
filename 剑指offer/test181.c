/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSymmetricchild(struct TreeNode* left,struct TreeNode* right)
{
    if(left==NULL && right==NULL) return true;
    if(left==NULL || right==NULL) return false;
    return  left->val==right->val &&
            isSymmetricchild(left->left,right->right)&& 
            isSymmetricchild(left->right,right->left);
}
bool isSymmetric(struct TreeNode* root){
    if(root==NULL) return true;
    return isSymmetricchild(root->left,root->right);  //看左右孩子是否相等
}