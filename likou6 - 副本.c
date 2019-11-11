char * toLowerCase(char * str){
    char* ret=str;
    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            *str+=32;
        }
        str++;
    }
    return ret;
}