#include<stdio.h>
int main()
{
	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };//二维数组可看作一维数组的连续
	printf("%d\n", &arr[0][0]);
	printf("%d\n",arr);//代表数组arr[3]首字母的地址
	printf("%d\n", &arr);//代表整个数组arr[3][4]的首地址
	printf("%d\n",arr+1);//数组arr[3]的首地址加1
	printf("%d\n",&arr[1]);//数组第二行（第二行一维数组）的地址     数组arr[3]的第二个元素地址
	printf("%d\n", &arr[1] + 1);//数组arr[3]的第二个元素地址加1
	printf("%d\n",arr[1]+1);//数组第二行（第二行第二个元素）的地址
	printf("%d\n",*(arr[1]+1));//第二行第二个元素）地址里的内容
	printf("%d\n",*(*(arr+1)+1));
	return 0;
}
#if 0
int main()
{
	char p1[]="hello bit";
	char *p2 = "hello bit";
	printf("%s\n", p1);//hello bit
	printf("%s\n", p2);//hello bit
	return 0;
}
#endif 
