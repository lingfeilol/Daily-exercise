//快速幂 二分法，降低时间开销
//偶数时 x^n=x^(n/2) * x^(n/2)  -----》x^n=(x^2)^(n/2) 直到n为0
//奇数时 x^n=x^(n/2) * x^(n/2) * x 多乘一次x 
double myPow(double x, int n){
    if(x == 0) return 0;
    long b = n;
    double res = 1.0;
    if(b < 0) {
        x = 1 / x;
        b = -b;
    }
    while(b > 0) {
        if((b & 1) == 1) res *= x;
        x *= x;
        b >>= 1;
    }
    return res;
}