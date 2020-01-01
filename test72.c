#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int CompactIntegers(int* arr, int len)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (arr[i] != 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int a[100000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int k = CompactIntegers(a, n);
	printf("%d\n", k);
	int* a1 = (int *)malloc(sizeof(int)*n);
     i = 0;
	int j = 0;
	/*a1[0] = 0;*/
	for (i = 0; i < n; i++)
	{
		
		if (a[i] != 0)
		{
			a1[j++] = a[i];
		}
	}
	for (i = 0; i < k; i++)
	{
		printf("%d ", a1[i]);
	}
	free(a1);
	return 0;
}