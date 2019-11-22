int findComplement(int num){
    int tmp=num;//对替身进行操作
    int bit=0;
    while(tmp)
    {
        bit =  (bit << 1) + 1;//把c转换成全一
        tmp >>= 1;//判断有几位有效二进制数
    }  
    return num^bit;//有几位就对几位全一异或
}