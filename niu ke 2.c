

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead==NULL||pHead->next==NULL)
            return pHead;
       ListNode* list=(ListNode*)malloc(sizeof(ListNode*));
       list=NULL;
        //双指针
        ListNode* cur=pHead;
        ListNode* Next=pHead->next;
        while(Next)
        {     //取不相同的节点来尾插
            if(cur->val!=Next->val)
            {
                list->next=cur;//前一个数尾插
                list=list->next;//更新
                Next=Next->next;
                cur=cur->next;
            }
            else//删除掉相同的节点
            {
                while(Next->val==cur->val&&Next!=NULL)
                 Next=Next->next;
                //删除重复的
                while(cur!=Next)//把cur移到最后一个不同的节点处（追上Next）
                {
                    ListNode* del=cur;//定义一个节点来删除（释放）掉重复的
                    cur=cur->next;
                    free(del);
                }
            }
        }
        return list;
    }
}