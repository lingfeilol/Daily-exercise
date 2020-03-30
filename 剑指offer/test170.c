/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode Node;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA==NULL || headB==NULL) return NULL;
    Node* A=headA;
    Node* B=headB;
    while(A!=B)
    {
        A=A->next;
        B=B->next;
        if(A!=B)
        {
            if(A==NULL)
                A=headB;
            if(B==NULL)
                B=headA;   
        }
    }
    return A;
}