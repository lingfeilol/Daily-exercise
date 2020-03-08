int sumNums(int n){
    int ret=n;
    n  && (ret+=sumNums(n-1)); //短路原理
    return ret;
}