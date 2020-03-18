int min(int a,int b)
{
    return a>b? b:a;
}
int max(int a,int b)
{
    return a>b? a:b;
}
bool isRectangleOverlap(int* rec1, int rec1Size, int* rec2, int rec2Size){
    //1.反证法，判断是不是在周围   我最小边是否在你的最大边之外   最大边是否在你的最小边之内
    // return !(rec2[1]>rec1[3]) ||  //上面  比纵坐标
    //     (rec2[0]>rec1[2])  || //右边  比横坐标
    //     (rec2[3]<rec1[1]) || //下边  比纵
    //     (rec2[2]<rec1[0]);    //左边  比横

    //2.横纵坐标投影到x轴y轴 是否有交集
    return min(rec2[3],rec1[3])>max(rec2[1],rec1[1]) &&   //y轴
        min(rec2[2],rec1[2])>max(rec2[0],rec1[0]);   //x轴

}