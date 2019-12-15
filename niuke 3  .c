/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/

//创建两个链表，一个存小数据，一个存大数据，最后在连接起来输出小链表头
class Partition {
public:
      ListNode* partition(ListNode* pHead, int x) {
        if(pHead == NULL || pHead->next == NULL)
        {
            return pHead;
        }
        ListNode* lesshead=(ListNode*)malloc(sizeof(ListNode));
        ListNode* head1=lesshead;
        ListNode* greathead=(ListNode*)malloc(sizeof(ListNode));
        ListNode* head2=greathead;
        ListNode* cur=pHead;
        while(cur!=NULL){
            if(cur->val<x)
            {
                head1->next=cur;
                head1=cur;
            }
            else
            {
                head2->next=cur;
                head2=cur;
            }
            cur=cur->next; 
        }
         head2->next=NULL;
         head1->next=greathead->next;
        return lesshead->next;
        // write code here
    }
};