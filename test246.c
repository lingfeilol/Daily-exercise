class Solution {
public:
    string removeDuplicates(string s) {
        //string  模拟栈思想
        string ret;
        for(int i=0;i<s.size();i++)
        {
            if(ret.empty()||ret.back()!=s[i])
            {
                ret.push_back(s[i]);
            }
            else
                ret.pop_back();
        }
        return ret;

    }
};