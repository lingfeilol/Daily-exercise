char * longestCommonPrefix(char ** strs, int strsSize)
{
    if(strsSize == 0)
        return "";
    if(strsSize==1)
        return strs[0];
    int i,j;
    char* ans=strs[0];  //以第一个字符串做基准 和后面的比较
    for(i=1;i<strsSize;i++)   //每一行
    {
        j=0;
        for(;ans[j]!='\0'&& strs[i][j]!='\0';j++)   //每一行的每一个字符
        {
            if(ans[j]!=strs[i][j])
                break;   //一旦不匹配，就跳出      
        }
        ans[j]='\0';  //给求出来的前缀结尾 输出
        if(ans=='\0') //如果前面没有向后面匹配，就是没有最长公共前缀
            return "";
    }
    return ans;

}
