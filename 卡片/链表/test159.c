/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode Node;
bool isPalindrome(struct ListNode* head){
    if(head==NULL|| head->next==NULL) return true; 
    Node* newhead=NULL;

    Node* slow=head;
    Node* fast=head;
    while(fast&& fast->next)//找中间节点   
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast!=NULL)  //为奇数
        slow=slow->next;
    Node* Next;
    while(slow)   //反转后半部分
    {
        Next=slow->next;
        slow->next=newhead;
        newhead=slow;
        slow=Next;
    }
    while(newhead)
    {
        if(head->val!=newhead->val)
            return false;
        head=head->next;
        newhead=newhead->next;
    }
    return true;
}
