class Solution {
public:
    string tmp;
    int binaryGap(int N) {
        //先转换成二进制串
        int flag=0;
        while(N)
        {
            if(N%2)
            {
                tmp='1'+tmp;
                flag++;
            }
            else
                tmp='0'+tmp;;
            N=N/2;
        }
        if(flag<2) //没有两个1
            return 0;;
        int ret=0;
        //从左到右来找
        int sig=0;//也是记录第一个一的下标
        for(int i=0;i<tmp.size();i++)
        {
            if(tmp[i]=='1')  
            {
                ret= (ret>(i-sig))? ret:(i-sig);
                sig=i;//更新再次出现的一          
            }
        }
        return ret;    
    }
};