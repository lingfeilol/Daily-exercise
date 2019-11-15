#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10000];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = -10000; int min = 10000; int sum = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i]<min)
		{
			min= arr[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	printf("%d\n", max);
	printf("%d\n", min);
	printf("%d\n", sum);
	return 0;
}