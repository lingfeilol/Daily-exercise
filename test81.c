bool isPalindrome(int x){
    if(x%10==0 && x!=0)//最后一位为零的情况下，且本身不为零如 10 120 等都不是
        return false;
    int y=0;
    while(x>y)//当原始数字小于反转后的数字时，就意味着我们已经处理了一半位数的数字。其中也包含了为负数和为0的情况
    {
       y=y*10+x%10;
       x=x/10;
    }
    if(x==y || x==y/10)//个数为双数 为奇数两个情况
        return true;
    return false;

}