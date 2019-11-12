#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qosrt函数的使用者得实现一个比较函数
int cmp1(const void *elem1, const void* elem2)
{
	return *(int *)elem1 >*(int*)elem2;//返回值为-1，从小到大
}
int cmp2(const void *elem1, const void* elem2)
{
	return *(int *)elem2 < *(int*)elem1;//返回值为1，从大到小
}
int cmp3(const void *elem1, const void* elem2)
{
	return strcmp((char *)elem1, (char*)elem2);//从小到大
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	size_t len = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, len, sizeof(int), cmp1);
	for (size_t i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	qsort(arr, len, sizeof(int), cmp2);
	for (size_t i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	char str[3][5] = { "aaaa", "popa", "cccc" };
	size_t len2 = sizeof(str) / sizeof(str[0]);
	qsort(str[0], len2, sizeof(str[0]), cmp3);
	for (size_t i = 0; i < len2; i++)
	{
		printf("%s ", str[i]);
	}
	return 0;
}