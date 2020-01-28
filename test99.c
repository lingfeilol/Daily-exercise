

char * reverseOnlyLetters(char * S){
    int len=strlen(S);
    char* tmp=(char*)malloc(sizeof(char)*len);
    int k=0;
    int end=len-1;
    //从后往前保存字母
    for(int i=end;i>=0;i--)
    {
        if((S[i]>='A'&&S[i]<='Z') || (S[i]>='a'&&S[i]<='z'))
        {
            tmp[k++]=S[i];
        }
    }
    k=0;
    //再从前往后一一覆盖字母
    for(int i=0;i<len;i++)
    {
        if((S[i]>='A'&&S[i]<='Z') || (S[i]>='a'&&S[i]<='z'))
        {
            S[i]=tmp[k++];
        }
    }
    return S; 

}

