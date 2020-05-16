class Solution {
    vector<string> ret;
public:
    vector<string> simplifiedFractions(int n) {
        vector<double> hash;
        for(int i=1;i<=n-1;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(find(hash.begin(),hash.end(),(double)i/(double)j )==hash.end())//没有出现过
                {  
                    hash.push_back( (double)i /(double)j );
                    char buf[100]={0};
                    sprintf(buf,"%d/%d",i,j);
                     string tmp(buf);
                     ret.push_back(tmp);
                }
                
            }
        }
        return ret;
    }
};