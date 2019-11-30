#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int fib(int x)
{
	int f1 = 0; int f2 = 1; int f3 = 0;
	if (x == 0) return f1;
	if (x == 1) return f2;
	if (x >= 2)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main()
{
	int N = 0;
	scanf("%d\n", &N);
	int chazhi1 = 0;
	int chazhi2 = 0;
	int chazhi = 0;
	int i = 0;
	for (i = 0; i < 1000000;i++)
	{
		if (fib(i)<N && fib(i + 1)>N)
		{
			chazhi1 = N - fib(i);
			chazhi2 = fib(i) - N;
		}
	}
	if (chazhi1>chazhi2)
	{
		chazhi = chazhi2;
	}
	else
	{
		chazhi = chazhi1;
	}
	printf("%d\n", chazhi);
}





void replaceSpace(char *str, int length) {
	char* ret=(char*)malloc(sizeof(char)*length*2);
	ret=str;
	while (*str)
	{
		if (*str == ' ')
		{
			*str = '%';
			*str++ = '2';
			*str++ = '0';
		}

		str++;
	}
	return ret;
}
