char findTheDifference(char * s, char * t){
    int ret=0;
   while(*t)
   { 
    ret^=*t^*s;
    t++;
     s++;
   }
   return (char)ret ;
}