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
    vector<vector<int>> ret;
    
    queue<TreeNode*> q;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return ret;
        int size=0;
        q.push(root);
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
            ret.push_back(tmp);
        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
};