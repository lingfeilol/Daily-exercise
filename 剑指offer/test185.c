void swap(char*s, int a,int b)
 {
     char tmp=s[a];
    s[a]=s[b];
    s[b]=tmp;
 }
//判断有没有出现过，即去掉之前就出现过的情况
bool isfind(char* s,int pos,int cur)
{
    for(int i=pos;i<cur;i++)
    {
        if(s[i]==s[cur])
        {
            return true;
        }
    }
    return false;
}
 void dfs(char* s,int pos,char** ret,int *returnSize)
 {
     if(pos==strlen(s))//满足条件，即走到底了，保存到输出
     {
         ret[*returnSize]=(char*)calloc(strlen(s)+1,sizeof(char));
         strcpy(ret[*returnSize],s);
         (*returnSize)++;
         return ;
     }
     //做选择
     for(int i=pos;i<strlen(s);i++)
     {
         //先判断不合法的选择，即上一次的那个选择，这次不能再选  即排除重复项
         if(isfind(s,pos,i))
         {
            continue;
         }
         //否则开始正常逻辑
         
        swap(s,pos,i); //做选择
        dfs(s,pos+1,ret,returnSize); //进入下一层决策树      
        swap(s,pos,i);   //做完选择，回溯
     }
     return ;
 }
char** permutation(char* s, int* returnSize){
    int len=strlen(s);
    int maxsize=1;//要先确定有多少个结果  即 长度的全排列所有情况 例如： 3！=3*2*1=6 有六种情况 
    while(len)
    {
        maxsize*=len;
        len--;
    }
    *returnSize=0;
    int ** ret=(int**)calloc(maxsize,sizeof(int*));//先把空间开够
    dfs(s,0,ret,returnSize);
    return ret;
}