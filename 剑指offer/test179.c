/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(root==NULL) return NULL;
    if((root->val-p->val)*(root->val-q->val)<=0)   //在两边，或者有一个为根
        return root;
    if(root->val>p->val)  //此时pq绝对都在一边，其中一个与根比较，看他们存在那一边
        lowestCommonAncestor(root->left,p,q);
    if(root->val<p->val)
        lowestCommonAncestor(root->right,p,q);
    return NULL;
}