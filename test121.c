

int myAtoi(char * str){
    int flag=0;
    long retnum=0;
    while(*str==' ')
        str++;
    flag=(*str=='-')? -1:1;  //开头先判断符号，第一个要么是负号，要么就是个正数
    if(*str=='-'|| *str=='+')//如果再有符号，不做处理
        str++;
    while(*str>='0'&& *str<='9')  //也只有数字字符才可以运算
    {
        retnum = retnum*10+(*(str++)-'0');
        if((int)retnum != retnum)  //超出范围了
        {
            return (flag==1)? INT_MAX : INT_MIN;
        }
    }
    return retnum * flag;

}

