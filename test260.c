/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
    TreeNode* prev=nullptr;//定义一个前驱节点 ，与cur链接关系
public:
    void _Convert(TreeNode* cur)
    {
        if(cur==NULL)   
            return ;
        _Convert(cur->left);
        //中序遍历，确立链接关系
        cur->left=prev;
        if(prev)
            prev->right=cur;
        prev=cur;
        
        _Convert(cur->right);
    }
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        
        _Convert(pRootOfTree);
        auto head=pRootOfTree;
        while(head && head->left)//可能是空树，要特判一下
            head=head->left;
        return head;
    }
};