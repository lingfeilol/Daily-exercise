void serverse(char *a,int begin,int end)
{
    while(begin<=end)
    {
        char tmp=a[begin];
        a[begin]=a[end];
        a[end]=tmp;
        begin++;
        end--;

    }
}
char * reverseWords(char * s){
    //char *ret=(char*)malloc(sizeof(char)*strlen(s));
    int i=0;
    int k=0;
    while(i<strlen(s))
    {
        k=i;
        while(s[i]!=' '&&s[i])
        {
            i++;
        }
        serverse(s,k,i-1);
        i=i+1;
    }
    return s;
}