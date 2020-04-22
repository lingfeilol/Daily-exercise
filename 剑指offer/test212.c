/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
//层序遍历，只保留最后一个数
    vector<int> ret;
    queue<TreeNode*> q;
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return ret;
        q.push(root);
        int size=0;
        while(!q.empty())
        {
            vector<int> tmp;
            size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* cur=q.front();
                q.pop();
                tmp.push_back(cur->val);
                if(cur->left)
                    q.push(cur->left);
                if(cur->right)
                    q.push(cur->right);
            }
            ret.push_back(tmp[size-1]); //每层只保存最后一个数
        }
        return ret;
    }
};