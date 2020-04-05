int Max(int n1,int n2)
{
    return n1>n2?n1:n2;
}
int maxProfit(int* prices, int pricesSize){
    int maxret=0;
    int min=prices[0];
    for(int i=1;i<pricesSize;i++)  //题目说按照时间先后顺序存储在数组中，所以一般从前往后遍历
    {
        if(prices[i]<=min) //当前的prices[i]比min还小，则更新min 意思是当天比买入便宜则买入值更新
            min=prices[i];
        else  //如果prices[i]大于min，则去更新一下利润res
            maxret=Max(maxret,prices[i]-min);
    }
    return maxret;
}