/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //归并分治的思想
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return nullptr;
        return merge(lists,0,lists.size()-1);
    }
    ListNode* merge(vector<ListNode*>& lists,int left,int right)//先划分区间
    {
        if(left>right)
            return nullptr;
        if(left==right)
            return lists[left];
        int mid=left+(right-left)/2;
        ListNode* l=merge(lists,left,mid);//递归划分
        ListNode* r=merge(lists,mid+1,right);
        return mergetwolists(l,r);//合并
    }
    ListNode* mergetwolists(ListNode* l1,ListNode* l2)//在合并两个链表
    {
        if(!l1 || !l2)
            return l1? l1:l2;
        ListNode* head=new ListNode();
        ListNode* cur=head;
        while(l1&&l2)
        {
            if(l1->val<=l2->val)
            {
                cur->next=l1;
                cur=l1;
                l1=l1->next;
            }
            else
            {
                cur->next=l2;
                cur=l2;
                l2=l2->next;
            }
        }
        if(l1)
            cur->next=l1;
        if(l2)
            cur->next=l2;
        return head->next;
    }
};