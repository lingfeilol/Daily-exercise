bool isOneBitCharacter(int* bits, int bitsSize){
//    1.//从头开始遍历，根据规则 为 0 就走一步，为一就走两步 ，如果最后能走到数组最后一个位置，就为真
//    int i=0;
//    while(i<bitsSize-1)
//    {
//        i+=bits[i]+1;
//    }
//     return i==bitsSize-1;


 //   2.因为都是两比特都是以1开头的，我们从后往前，找到第一个1，再去求前面与其连续的1的个数，为奇数的就是假，为偶数的就是真
    // if(bitsSize==1)  return true;
    // int count=0;//记录连续的1的个数
    // int i=bitsSize-2;  //因为此题在末尾由0结束的，所以从倒数第二个数开始判断
    // while(i>=0 && bits[i]==1) //相当于只考虑倒数第二位，为0，必然为真，为1，就去找连续的个数
    // {
    //     i--;
    //     count++;
    // }
    // return count%2==0;
}