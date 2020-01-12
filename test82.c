int lengthOfLastWord(char * s){//从后往前遍历
    int end=strlen(s)-1;
    int k=0;
    while(end>=0 && s[end]==' ')//考虑这种情况"asd    " 先把后面的空格去掉
    {
        end--;
    }  
    if(end < 0) return 0;//考虑全是空格的情况 "      "  返回0
    int cur=end;
    while(cur>=0 && s[cur]!=' ')//接着找，直到有空格，停下 两指针相减即可
    {
        cur--;
    }   
    return end-cur;
}