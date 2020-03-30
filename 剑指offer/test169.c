/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
 //递归
int* reversePrint(struct ListNode* head, int* returnSize){
    if(head==NULL){
        *returnSize=0;
        return malloc(sizeof(int)*10000);  //最后跳出递归的时候在开空间
    } 
    int *ret=reversePrint(head->next,returnSize);//开的空间接收一下
    ret[(*returnSize)++]=head->val;//相当于从后往前赋值
    return ret;
}