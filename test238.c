class Solution {
public:
    int bitwiseComplement(int N) {
        int ret=N;
        int count=0;
        if(N==0)
            return 1;
        while(N)//计算有多少位
        {
            count++;
            N>>=1;
        }
        int ones=1;
        for(int i=0;i<count;i++)
        {
            ret^=ones;//每一位与一异或，便是相反数
            ones<<=1;
        }
        return ret;
    }
};