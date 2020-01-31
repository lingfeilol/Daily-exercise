void reverser(char * str,int begin,int end)
{
    while(begin<end)
    {
        char tmp=str[begin];
        str[begin]=str[end];
        str[end]=tmp;
        begin++;
        end--;
    }
}
char * addBinary(char * a, char * b){
    int ai=strlen(a);
    int bi=strlen(b);
    char * ret=(char *)malloc(sizeof(char)*(ai+1));
    int next=0;//判断进位
    char tmp;
    while(ai < bi) //让两个字符串等长，若不等长，在短的字符串前补零，否则之后的操作会超出索引
    {
        a = '0' + a;
        ++ ai;
    }
    while(ai > bi)
    {
        b = '0' + b;
        ++ bi;
    }
    int k=0;
    for(int i=ai-1;i>=0;i--)
    {
        int x=a[i]-'0';
        int y=b[i]-'0';

        tmp=x^y^next;
        if(x+y+next>1)
        {
            next=1;
        }
        else
        {
            next=0;
        }
        ret[k++]=tmp+'0';
    }
    if(next==1)
    {
        ret[k++]='1';
    }
    reverser(ret,0,k-1);
    free(ret);
    return ret;

}