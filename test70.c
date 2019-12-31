#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int jian(int *arr)
{
	int tmp = 0;
	tmp = arr[0] + arr[1];
	return tmp;
}
void del(int *arr,int *n)
{
	int tmp1 = arr[0] + arr[1];
	int x = *n;
	for (int i = 0; i<x; i++)
	{
		arr[i] = arr[i + 1];
	}
	x--;
	for (int i = 0; i<x; i++)
	{
		arr[i] = arr[i + 1];
	}
	x--;
	arr[x] = tmp1;
	*n = x + 1;
}
int compare(const void* p1, const void* p2)
{
	return  (*(int*)p1) > (*(int*)p2);
}
int main()
{
	int n = 0;
	scanf("%d\n", &n);
	int a[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int ret = 0;
	do
	{
		qsort(a, n, sizeof(int), compare);
		ret += jian(a);
		del(a, &n);
	}while (n != 1);
	printf("%d\n", ret);
	return 0;
}
