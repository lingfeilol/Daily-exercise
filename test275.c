class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty() || ((st.top()^32)!=s[i] || st.top()!=(s[i]^32)))
            {
                st.push(s[i]);
            }
            else if((st.top()^32)==s[i] || st.top()==(s[i]^32))
                st.pop();
        }
        string ret;
        while(!st.empty())
        {
            ret.insert(ret.begin(),st.top());
            st.pop();
        }
        return ret;
    }
    
};