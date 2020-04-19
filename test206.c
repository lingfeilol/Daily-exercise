
bool  ischar(char s)
{
    if(('a'<=s) && (s<='z'))
        return true;
    return false;
}
bool  isint(char s)
{
    if(('0'<=s)&& (s<='9'))
        return true;
    return false;
}
char * reformat(char * s){
    char* ch=(char *)calloc(strlen(s),sizeof(char));
    char* it=(char*)calloc(strlen(s),sizeof(char));
    char* ret=(char*)calloc(strlen(s),sizeof(char));
    int i,j,m,n,k=0;
    m=0;
    n=0;
    i=0;
    while(i<strlen(s))
    {
        if(ischar(s[i]))
            ch[m++]=s[i];
        if(isint(s[i]))
            it[n++]=s[i];
        i++;
    }
    if(abs(m-n)>1)
        return " ";
    if(m>n)
    {
        for(i=0;i<n;i++)
        {
            ret[k++]=ch[i];
            ret[k++]=it[i];
        }
        ret[k++]=ch[i];
    }
    else if(m<n)
    {
        for(i=0;i<m;i++)
        {
            ret[k++]=it[i];
            ret[k++]=ch[i];
        }
        ret[k++]=it[i];
    }
    else
    {
        for(i=0;i<m;i++)
        {
            ret[k++]=ch[i];
            ret[k++]=it[i];
        }
    }
    return ret;
}