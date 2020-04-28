/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> ret;
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return ret;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> tmp;
            for(int i=0;i<size;i++)
            {
                vector<Node*> child=(q.front())->children;//先把所有孩子节点存储起来
                Node* cur=q.front();
                q.pop();
                tmp.push_back(cur->val);
                for(auto e:child)
                {
                    if(e)//孩子节点不为空，入队列
                        q.push(e);
                }
            }
            ret.push_back(tmp);
        }
        return ret;
    }
};