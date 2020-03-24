/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;
struct ListNode* oddEvenList(struct ListNode* head){
    if(head==NULL) return NULL; 
    Node* headtail=head;    //奇数链 头尾
    Node* ouhead=head->next;   //偶数链  头尾
    Node* outail=ouhead;
    while(outail && outail->next)
    {
        headtail->next=outail->next;
        headtail=headtail->next;

        outail->next=headtail->next;
        outail=outail->next;
    }
    headtail->next=ouhead;
    return head;
}