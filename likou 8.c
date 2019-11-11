void reverseString(char* s, int sSize){
    int start=0;
    int end=sSize-1;
    while(start<end)
    {
        char tmp=s[start];
        s[start]=s[end];
        s[end]=tmp;
        start++;
        end--;
    }

}