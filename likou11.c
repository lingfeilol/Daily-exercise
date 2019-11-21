uint32_t reverseBits(uint32_t n) {
    int i=0;
    uint32_t m=0;
    for(i=0;i<32;i++)
    {
        if(n&1==1)
          m=m|1;
        if(i == 31) break;
        n>>=1;
        m<<=1;
    }
    return m;

}