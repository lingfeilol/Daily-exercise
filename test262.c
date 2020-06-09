class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)
            return head;
        auto Next=head->next->next;
        auto tail=head->next;
        tail->next=head;
        head->next=swapPairs(Next);
        return tail;
    }
};