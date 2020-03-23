int min(int a,int b)
{
    return a>b? a:b;
}

int maxArea(int* height, int heightSize){
    int begin=0;
    int end=heightSize-1;
    int max=0;
    int dibian=0;
    int h=0;//木桶最短效应，所以保留最小的高
    while(begin<end)
    {
        dibian=end-begin;//底边宽
        if(height[begin]<height[end])  //左边和右边作比较，留下大的那个，小的去移动  每次算一次，记录比较最大的
        {
            h=height[begin];  //每次计算此时可以装多少  
            begin++;            
        }
        else
        {
            h=height[end];
            end--;  
        }
        max=(h*dibian)>max? h*dibian:max;//每次比较，留下最大的
    }
    return max;
}
