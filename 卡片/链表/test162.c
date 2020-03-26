/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL) return nullptr;
        Node* cur=head;
        Node* Next;
        
        while(cur)
        {
            Next=cur->next;//保存每次的下一个节点
            if(cur->child) //如果有孩子节点 断主链来接子链
            {
                Node *_child=cur->child;
                cur->next=_child;
                _child->prev=cur;
                cur->child=nullptr; //连接后就把孩子链去掉了
            
                //接着找尾部 
                Node* tail=_child;
                 while(tail&&tail->next)
                {
                    tail=tail->next;
                }
                //连接到到主链
                tail->next=Next;
                if(Next!=nullptr)  //最后一个节点为空时，没有前驱节点的
                {
                    Next->prev=tail;
                }
            }
            cur=cur->next;//没有孩子节点的，及继续遍历    
        }
        return head;
        
    }
};