class Solution {
public:
    string reverseWords(string s) {
        string ret;
        stringstream ss(s);
        string tmp;
        while(ss>>tmp)
        {
            ret.insert(ret.begin(),' ');
            ret.insert(0,tmp);
        }
        if(ret.empty())
            return ret;
        ret.erase(ret.end()-1);
        return ret;
    }
};