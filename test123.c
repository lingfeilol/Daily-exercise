void reverse(char *s,int begin,int end)
{
    while(begin<=end)
    {
        char tmp=s[begin];
        s[begin]=s[end];
        s[end]=tmp;
        begin++;
        end--;
    }
}
int compress(char* chars, int charsSize){
    int frist=0;
    int k=0;
    for(int second=0;second<=charsSize;second++)
    {
        if(second==charsSize||chars[second]!=chars[frist])
        {
            chars[k++]=chars[frist];  //更新字符
            if(second-frist>1)   //更新个数，指针相减  //并且要把数字换成字符
            {
                int tmp=second-frist;
                int count=0;
                int h=k;
                int flag=0;
                while(tmp>0)
                {
                    chars[k++]=tmp%10+'0'; //反着存进去的
                    tmp=tmp/10;
                    count++;  //记录几位数
                    flag=1;
                }
                if(flag)
                    reverse(chars,h,h+count-1);  //反转回来
            }
            //更新左边了
            frist=second;
        }
    }
    return k;

}