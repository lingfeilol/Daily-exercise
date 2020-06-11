class LCA {
public:
    int getLCA(int a, int b) {
        // write code here
        if(a==1|| b==1)
            return a;
        int ret=0;
        vector<int> aa;
        vector<int> bb;
        while(a)
        {
            aa.push_back(a/2);
            a/=2;
        }
        while(b)
        {
            bb.push_back(b/2);
            b/=2;
        }
        for(int i=0;i<aa.size();i++)
        {
            for(int j=0;j<bb.size();j++)
            {
                if(aa[i]==bb[j])
                {
                    return aa[i];
                }
            }
        }
    }
};