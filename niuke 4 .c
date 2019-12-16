define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[4] = { 0 };
	int i = 0;
	for (i = 0; i<4; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int tmp = 0;
	int A, B, C = 0;
	for (A = -30; A <= 30; A++)
	{
		for (B = -30; B <= 30; B++)
		{
			for (C = -30; C <= 30; C++)
			{
				if (((A - B) == arr[0]) && ((B - C) == arr[1]) && ((A + B) == arr[2]) && ((B + C) == arr[3]))
				{
					tmp = 1;
					printf("%d %d %d", A, B, C);
					break;
				}
			}
		}
	}
	if (tmp == 0)
		printf("No");
	return 0;
}