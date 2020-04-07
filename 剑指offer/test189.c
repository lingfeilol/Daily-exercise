/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize){

    struct TreeNode* head=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    if(preorderSize>0) //传进来的数组不为空时
    {
        head->val=preorder[0];
    }
    else  //为空直接return
        return NULL;
    //在中序遍历找到根节点的位置
    int mid=0;
    for(int i=0;i<inorderSize;i++)
    {
        if(inorder[i]==head->val)
            mid=i;
    }
    head->left=buildTree(preorder+1,mid,inorder,mid);  //将左边给左子树去下一层递归
    head->right=buildTree(preorder+mid+1,preorderSize-mid-1,inorder+mid+1,inorderSize-mid-1);//将右边给右子树去下一层递归

    return head;
}