/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;
struct ListNode* middleNode(struct ListNode* head){
    Node* cur=head;
    int k=0;
    int mid=0;
    while(cur)
    {
        k++;
        cur=cur->next;
    }
    mid=k/2;
    while(mid--)
    {
        head=head->next;
    }
    return head;


}