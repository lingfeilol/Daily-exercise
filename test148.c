int longestPalindrome(char * s){
    if(strlen(s)==1) return 1;
    int tmp[128]={0};
    int count=0;
    int i=0;
    for(i=0;i<strlen(s);i++)
    {
        tmp[s[i]]++;
    }
    for(i=0;i<128;i++)
    {
      //直接统计奇数的个数  最后结果就是其他的偶数再加一个中间位的奇数
      if(tmp[i]%2==1)
        count++;
    }
    return count==0? strlen(s):strlen(s)-count+1; 
}