int hammingDistance(int x, int y){
    int count=0;
    int ret=x^y;
    int size=32;
     while(size>0)
        {
            if(ret&1)
            {
                count++;
            }
            ret>>=1;
            size--;
        }  
    return count;

}