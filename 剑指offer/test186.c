/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* levelOrder(struct TreeNode* root, int* returnSize){
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }
    struct TreeNode* queue[1100];//指针数组来存节点
    int front=0;
    int rear=0;
    int *ret=(int*)calloc(1100,sizeof(int));
    *returnSize=0;

    //根节点先入对列
    queue[rear++]=root;
    while(front!=rear)  //不为空
    {
        struct TreeNode *tmp=queue[front++];//记录刚入的节点
        ret[(*returnSize)++]=tmp->val;
        if(tmp->left!=NULL)
            queue[rear++]=tmp->left;
        if(tmp->right!=NULL)
            queue[rear++]=tmp->right;
    }
    return ret;
}