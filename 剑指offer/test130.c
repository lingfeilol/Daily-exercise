char firstUniqChar(char* s){
    int tmp[256]={0};
    int j=0;
    for(int i=0;i<strlen(s);i++)
    {
        tmp[s[i]]++;
    }
    for(j=0;j<strlen(s);j++)
    {
        if(1==tmp[s[j]])
           return s[j];
    }
    return ' ';
}