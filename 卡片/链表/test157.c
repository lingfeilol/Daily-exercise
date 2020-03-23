/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//本质是找到要删除结点的前一个节点，但如果是删除头结点，则不存在前一个节点，所以巧妙的用“哑结点”来解决
typedef struct ListNode Node;
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    Node* prev=(Node*)malloc(sizeof(Node));
    prev->next=head;   //处理删除头节点的情况 ，要先找前一个结点

    Node* slow=prev;
    Node* fast=prev;
    for(int i=0;i<n;i++)
    {
        if(fast->next)       //处理只有n>=长度的 比如[1] 1
            fast=fast->next;  
        else
            return head->next;
    }
    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return prev->next;

    // Node* slow=head;
    // Node* fast=head;
    // for(int i=0;i<n;i++)
    // {
    //     if(fast->next)       //处理只有n>=长度的 比如[1] 1
    //         fast=fast->next;  
    //     else
    //         return head->next;
    // }
    // while(fast->next!=NULL)
    // {
    //     slow=slow->next;
    //     fast=fast->next;
    // }
    // slow->next=slow->next->next;
    // return head;

}