class Solution {
public:
    vector<int> ret;
    vector<int> lexicalOrder(int n) {
        dfs(0,n,ret);
        return ret;
    }
    void dfs(int k,int n,vector<int>& ret)
    {
        if(k>n)
            return ;
        if(k!=0)
            ret.push_back(k);
        for(int i=0;i<=9;i++) //十叉树 ，深度优先遍历 每一层位数加一 个位十位百位
        {
            int tmp=10*k+i; //下一层
            if(tmp>0)
                dfs(tmp,n,ret);//往下一层走
        }   
    }
};