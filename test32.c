#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (1 <= a <= n && 1 <= b <= n && 1 <= c <= n && 1 <= n <= 1000000)
	{
		int i = n;
		int count = 0;
		for (i = n; i>0; i--)
		{
			if (i%a != 0 && i%b != 0 && i%c != 0)
			{
				count++;
			}
		}
		printf("%d", count);
	}

	return 0;
}