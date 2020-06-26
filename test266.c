/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeDuplicateNodes(ListNode* head) {
        set<int> st;
        auto cur=head;
        while(cur&&cur->next) //包含为空或只有一个节点的情况
        {
            st.insert(cur->val);
            if(st.find(cur->next->val)!=st.end()) //出现过
            {
                cur->next=cur->next->next;
            }
            else
                cur=cur->next;
        }
        return head;
    }
};