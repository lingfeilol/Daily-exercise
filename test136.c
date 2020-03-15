int evalRPN(char ** tokens, int tokensSize){
    if(tokensSize==1)   return atoi(tokens[0]);     //atoi字符串转数字
    int *stack=(int*)malloc(sizeof(int)*tokensSize*2);
    memset(stack,0,sizeof(stack));
    int top=0;
    int ret=0;
    int n1=0;
    int n2=0;
    for(int i=0;i<tokensSize;i++)
    {
        if(tokens[i][1] == '\0' && (tokens[i][0] == '+' || tokens[i][0] == '-' || tokens[i][0] == '*' || tokens[i][0] == '/'))
        {
            n2=stack[--top];
            n1=stack[--top];
            switch(tokens[i][0]){
                case'+':
                    ret=n1+n2;
                    stack[top++]=ret;
                    break;
                case'-':
                    ret=n1-n2;
                    stack[top++]=ret;
                    break;
                case'*':
                    ret=n1*n2;
                    stack[top++]=ret;
                    break;
                case'/':
                    ret=n1/n2;
                    stack[top++]=ret;
                    break;
                default:
                    break;
            } 
        }
        else
            stack[top++]=atoi(tokens[i]);  
    }
    return ret;
}