/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == NULL) return NULL;
        //if(k==0)  return NULL;
        ListNode* slow=pListHead;
        ListNode* fast=pListHead;
        int i=0;
        for(;i<k-1;i++){
              fast=fast->next;
            if(fast == NULL)  return NULL;//无符号k，可能k大于链表长度，直接返回NULL
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};;