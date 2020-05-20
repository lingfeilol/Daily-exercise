class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        int shi=0;
        int fen=0;
        int maxtime=-1;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(j!=i)
                {
                    for(int k=0;k<4;k++)
                    {
                        if(k!=i&& k!=j)
                        {
                            int l=6-i-j-k;//因为总共四个下标选择 0123，又互不相同，第四个就可以直接求出来
                            shi=A[i]*10+A[j];
                            fen=A[k]*10+A[l];
                            if(shi<24&& fen<60)
                            {
                                maxtime=max(maxtime,shi*60+fen);
                            }                        
                        }
                    }
                }
            }
        }
        if(maxtime>=0)
        {
            char ret[6];
            sprintf(ret,"%.2d:%.2d",maxtime/60,maxtime%60);
            return ret;
        }
        return "";
    }
};