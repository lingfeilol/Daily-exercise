int add(int a, int b){
    while(b!=0)       //b做进位
    {
        int tmp=(a^b); //不进位的加法
        b=(unsigned int)(a&b)<<1;  //计算进位 ，直到进位为 0 时，输出结果，不然一直做异或加法
        a=tmp;         
    }
    return a;
}