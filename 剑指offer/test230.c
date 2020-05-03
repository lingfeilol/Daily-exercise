class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len(0),ret(0),start(0),end(0); //左右边界
        int size=s.size();
        while(end<size) //end更新--》窗口右边
        {
            int tmp=s[end];//先保存，在判断
            for(int i=start;i<end;i++)//start更新---》左边界左移
            {
                if(tmp==s[i])//出现重复
                {
                    start=i+1;//更新左边界-->更新为相同字符的下一个位置
                    len=end-start;//记录之前满足条件的字串长度
                    break;
                }
            }
            //没出现重复就继续往后走
            end++;
            len++;
            ret=ret>len?ret:len;
        }
        return ret;
        
    }
};