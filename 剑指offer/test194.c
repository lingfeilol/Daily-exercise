class Solution {
public:
    vector<vector<int>> ret;
   
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return ret;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> cur;
            
            int len=q.size();//统计每一层的个数，根据个数保存
             for(int i=0;i<len;i++)
             {
                TreeNode* Tmp=q.front();
                cur.push_back(Tmp->val);
                q.pop();

                if(Tmp->left)
                    q.push(Tmp->left);
                if(Tmp->right)
                    q.push(Tmp->right);
             }
            ret.push_back(cur);
        }
        return ret;
    }
};