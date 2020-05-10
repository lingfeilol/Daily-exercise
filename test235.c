class Solution {
public:
    vector<string> ret;
    vector<string> buildArray(vector<int>& target, int n) {
        int len=target.size();
        int curr=1;//从一开始枚举
        for(auto e: target)
        {
            if(curr!=e)
            {
                for(int i=0;i<e-curr;i++)
                {
                    ret.push_back("Push");
                    ret.push_back("Pop");
                }
            }
            ret.push_back("Push");
            curr=e+1;//更新为下一个
        }
        return ret;
    }
};