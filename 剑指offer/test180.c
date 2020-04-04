/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef struct TreeNode Node;
struct TreeNode* mirrorTree(struct TreeNode* root){
    if(root==NULL) return NULL;
    Node* left=root->left;
    Node* right=root->right;
    root->left=mirrorTree(right);
    root->right=mirrorTree(left);
    return root;
}