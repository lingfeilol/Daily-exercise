class Solution {
public:
    bool isHappy(int n) {
        int slow=n,fast=n;
        do
        {
            slow=twosum(slow);
            fast=twosum(fast);
            fast=twosum(fast);
        }
        while(slow!=fast);
        return slow==1;

    }
    int twosum(int n)
    {
        int tmp=0;
        while(n)
        {
            tmp+=pow((n%10),2);
            n=n/10;
        }
        return tmp;
    }
};