/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //用两个指针，一块一慢，快的每次走两步，慢的每次走一步，这样当快指针遍历结束时，慢指针指向的//也就是链表的中间位置。这时候把中间位置的结点的值作为二叉搜索树当前结点的值
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode* root;
        if(!head)
            return nullptr;
        if(!head->next)
        {
            root=new TreeNode(head->val);
            return root;
        }
        //因为要平衡，所以找中间节点来做根结点 ，快慢指针
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast&&fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        root=new TreeNode(slow->val);
        ListNode* prev=head;//保存根节点的前一个链节点
        while(prev->next!=slow)
        {
            prev=prev->next;
        }

        ListNode* righttree=slow->next;//保留构造右子树的链表的头
        prev->next=nullptr;//左子树右子树的链表断链

        root->left=sortedListToBST(head);//递归构造左子树
        root->right=sortedListToBST(righttree);//递归构造右子树
        return root;
    }
};