class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if(!root ) return ret;
        deque<TreeNode*> q;//双端队列
        bool falg=true; //为正顺序，为假逆序
        q.push_back(root);
        while(!q.empty())
        {
            int len=q.size();
            vector<int> cur;
            while(len)
            {
                if(falg) //顺序   头取  尾插
                {
                    TreeNode* tmp=q.front();
                    cur.push_back(tmp->val);
                    q.pop_front();
                    if(tmp->left)   q.push_back(tmp->left);
                    if(tmp->right)   q.push_back(tmp->right);
                }
                else  //倒序   尾取   头插  
                {
                    TreeNode* tmp=q.back();
                    cur.push_back(tmp->val);
                    q.pop_back();
                    if(tmp->right)   q.push_front(tmp->right);
                    if(tmp->left)   q.push_front(tmp->left);
                }
                len--;
            }
            falg=!falg;
            ret.push_back(cur);
        }
        return ret;
    }
};