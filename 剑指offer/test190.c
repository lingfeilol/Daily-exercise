/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/
class Solution {
public:
    Node* treeToDoublyList(Node* root) {
        if(root==NULL) return NULL;
        Node *pre=NULL;  //伪头节点
        Node *cur=NULL;  //当前遍历节点 （头节点）
        inorder(root,pre,cur);  //中序遍历中 完成链表的链接
        cur->left=pre;   //最后把首尾链接起来
        pre->right=cur;
        return cur;
        
    }
    void inorder(Node *root, Node*& pre,Node *& cur)
    {
        if(root==NULL) return ;
        inorder(root->left,pre,cur);
        if(cur==NULL)  //因为要顺序输出，所以要中序遍历输出第一个节点时，开始构建链结构
        {
            pre=root;
            cur=root;   //头节点
        }
        else
        {
            pre->right=root;
            root->left=pre;
            pre=root;     //pre最后变为最后一个节点
        }
        inorder(root->right,pre,cur);
    }
};