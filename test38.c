#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void*p1, const void*p2)//比较函数
{
	//return (*(int*)p1 - *(int*)p2);//整型数组
	//return  *(double*)p1 > *(double*)p2 ? 1 : -1;//浮点数数组
	return  *(char*)p1 > *(char*)p2;

}
int main()
{
	//int arr[] = { 1, 3, 2, 4, 6, 5, 9, 8, 7, 0 };
	//double arr2[] = { 1.0, 2.0, 1.5 };
	char arr3[] = { 'a', 'c', 'b' };
	int len = sizeof(arr3) / sizeof(arr3[0]);
	qsort(arr3, len, sizeof(char), compare);//快排
	int i = 0;
	for (i = 0; i <len; i++)
	{
		//printf("%d", arr[i]);//对应的输出格式要注意
		//printf("%0.1f",arr2[i])
		printf("%c ", arr3[i]);
	}
	return 0;
}