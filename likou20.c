int getSum(int a, int b){
    while(b)
    {
        int c=(size_t)(a&b)<<1;//计算进位，为一说明有进位，为0则跳出循环
        a=a^b;//计算加法；
        b=c;//进位
    }
    return a;
}