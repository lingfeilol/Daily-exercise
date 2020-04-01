
//二分
int minArray(int* numbers, int numbersSize){
    int L=0;
    int R=numbersSize-1;
    int m=0;
    while(L<R)
    {
        m=L+(R-L)/2;
        if(numbers[m]>numbers[R])//中间的比尾巴大，说明那个旋转点在后面部分
            L=m+1;
        else if(numbers[m]<numbers[R])//比尾巴小，说明在前面
            R=m;
        else   //相等的情况下，缩小区间
            R--;
    }
    return numbers[L];
}
