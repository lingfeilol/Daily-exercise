#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void huiwen(int n)
{
	int a, b, c;
	int sum, len, temp;
	for (int i = 10000; i <= 999999; i++)
	{
		sum = 0;
		temp = i;
		len = 0;
		while (temp != 0)
		{
			sum = sum * 10 + temp % 10;
			temp = temp / 10;
			len++;
		}//得到sum 是i的倒过来的数据，即先求出来i的回文数，再判断和是不是n 
		if (sum == i)//判断  要是回文数 接下来判断是五位数还是六位数，并判断和 
		{
			c = i / 100 % 10;
			b = i / 10 % 10;
			a = i % 10;
			if (len == 5)
			{
				if (n == (2 * a + 2 * b + c))
					printf("%d\n", i);
			}
			if (len == 6)
			{
				if (n == (2 * a + 2 * b + 2 * c))
					printf("%d\n", i);
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	huiwen(n);
	return 0;
}