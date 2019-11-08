int balancedStringSplit(char * s){
      int len =strlen(s);
      int i=0;
      int NR=0;
      int NL=0;
      int count=0;
   for(i=0;i<len;i++)
   {
       if(s[i]=='R')
       {
           NR++;
       }
       else
       {
           NL++;
       }
       if(NR==NL)
       {
           count++;
           NR=0;
           NL=0;
       }  
   }
    return count;
  
}