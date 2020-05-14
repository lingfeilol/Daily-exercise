class Solution {
    stack<int> s;//用栈模拟，先入栈，在对比
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        int i=0,j=0;
        while(i<pushV.size())
        {
            s.push(pushV[i]);
            while(!s.empty()&&popV[j]==s.top())
            {
                s.pop();
                j++;
            }
            i++;
        }
        if(s.empty())
            return true;
        return false;
    }
};