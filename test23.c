#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	
	int i = 0;
	int arr[200] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int m = n;
	while (n--)
	{
		for (i = 0; i < n; i++)
		{
			if (arr[i]>arr[i + 1])
			{
				int tmp = 0;
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	for (i = 0; i < m; ++i)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}