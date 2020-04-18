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
    vector<double> ret;
    queue<TreeNode*> queue;
    vector<double> averageOfLevels(TreeNode* root) {
        int size=0;
        double sum=0;
        queue.push(root);
        while(!queue.empty())
        {
            size=queue.size();
            sum=0;
            for(int i=0;i<size;i++)
            {
                TreeNode* cur=queue.front();
                queue.pop();
                sum+=cur->val;
                if(cur->left)
                    queue.push(cur->left);
                if(cur->right)
                    queue.push(cur->right);
            }
            ret.push_back(sum/size);
        }
        return ret;
    }
};