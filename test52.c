int findLUSlength(char * a, char * b){
    if (0 == strcmp(a, b))//长度相同且内容相同
    {
        return -1;
    }
    if (strlen(a) >= strlen(b))//长度都不相同了，输出最长的字符串的长度
    {
        return strlen(a);
    }
    return strlen(b);
}