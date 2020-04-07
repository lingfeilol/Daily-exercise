//类似于跳台阶求跳法问题  跳一步眺两步  变换为 一种选择和两种选择 
//只不过 选择有条件约束  
//一种选择： 自己单独一个无法和相邻的组成两种翻译  即 58  8只能自己组，因为组合起来和没组合一样的结果  03 也是  相当于只能走一步
//两种情况： 可以和相邻的组 ，即  22  组合起来又是一种 相当于可以走两步

int translateNum(int num){
    //动态规划
    //1.先转换成字符串
    char* tmp=(char*)calloc(11,sizeof(char));  //因为数字最多为2^31大小，差不多十亿，就是十位数可以表示完
    sprintf(tmp,"%d",num);
    int len=strlen(tmp);
    //2.确定状态转换方程
    //先确定初始条件 base case  ，
    char* dp=(char*)calloc(11,sizeof(char));
    dp[0]=1;  //只有一位数的时候 ，就只有一种选择
    int tmpnum=0;
     tmpnum=(tmp[0]-'0')*10+(tmp[1]-'0');
    if(tmpnum>=10 && tmpnum<=25)
        dp[1]=2;            //两位数时，且满足两种选择时，有两种跳法
    else
        dp[1]=1;     //虽然有两位数，但是还是只能一步一步跳 ，只有一种跳法
    //在考虑之后的状态
    for(int i=2;i<len;i++)
    {
        tmpnum=(tmp[i-1]-'0')*10+(tmp[i]-'0');
        if(tmpnum>=10 && tmpnum<=25)
            dp[i]=dp[i-1]+dp[i-2];
        else
            dp[i]=dp[i-1];
    }
    return dp[len-1];

    //递归
    if(num>=0 && num<10 )  //只有一位数
        return 1;
    int tmp=num%100; //不是一位数，取后面两位判断
    if(tmp<10 || tmp >25)
        return translateNum(num/10);  //只能有一种翻译选择
    return translateNum(num/10)+translateNum(num/100);  //否则，可以自己单独翻译也可以和前面一位组合
}