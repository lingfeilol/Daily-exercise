#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 5
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0'|| ch>'9')
			continue;
		putchar(ch);
	}
		
	return 0;
}
#if 0
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i = i + 1;
		if (i == 5)
			continue;
		printf("%d", i);
		
	}
	return 0;
}

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	}
	return 0;
}

int main()
{
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(double *));
	return 0;
}

int main()
{
	int a = 10;
	int *p = &a;
	*p = 20;
	printf("%d\n", a);
	printf("%p", &a);
	return 0;
}

static int a = 100;
int main()
{
	int a = 101;

	printf("%d\n",a);
	return 0;

}

void test()
{
	 int i = 0;
	i++;
	printf("%d", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
		printf("\n");
	}
	return 0;
	
}

int main()
{
	printf("%d\n", strlen("sbcdef"));
	printf("%d\n", strlen("c:\test\32\test.c"));
	return 0;
}

int main()
{
	printf("%c\n", '\'');
	printf("%c\n", "\"");
	return 0;
}

int main()
{
	//int arr1[] = "bit";
	int arr2[] = { 'b', 'i', 't' };
	int arr3[] = { 'b', 'i', 't', '\0' };
	//printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}
 int reverse_bit(int x){
	 int a = 0;
	int b = 0;
	for (int i = 0; i < 32; i++){

		a = x & 1;//取出最后一位数
		x = x >> 1;//把值右移一位
		b = b+(a << (31 - i));//把每次末尾取出来的值都放在变量里，其实整体相当于把二进制数转置了一下
	}
	return b;
}

int main(){
	int a = 0;
	scanf("%d", &a);
	printf("%u", reverse_bit(a));
	system("pause");
}


int main()
{
	
	int arr[size][size] = { 0 };
	//确定杨辉三角形的边沿数为1
	for (int i = 0; i <= size; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	//利用for循环从上一行的数字求得下一行的数
	for (int i = 2; i < size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
//打印杨辉三角
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;

}

int main()
{
	char man = 0;
	for (man = 'a'; man <= 'd'; man++)
	{
		if((man != 'a') + (man == 'c') + (man == 'd') + (man != 'd') == 3)
		{
			printf("杀手是%c\n", man);
		}
	}
	return 0;
}


int main()
{
	int a, b, c, d, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b= 1; b <= 5; b++)
		{
			for (c = 1;c <= 5;c++)
			{
				for (d = 1;d <= 5;d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (a*b*c*d*e == 120)
						{
							if (((b == 2) + (a == 3)) == 1 && ((b == 2) + (e == 4)) == 1 && ((c == 1) + (d == 2)) == 1 && ((c == 5) + (d == 3)) == 1 && ((e == 4) + (a == 1))==1)
							{
								printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
								system("pause");
								
							}
						}
					}
				}
			}
		}
	}
	return 1;
}

int main()
{
	double a=0;
	double b=0;
	double ave = 0;
	scanf("%lf%lf", &a, &b);
	if (a>b)
	{
		ave = (a-b)/ 2 + b;
	}
	if (a < b)
	{
		ave = (b - a) / 2 + a;
	}
	else
	{
		ave = a;
	}
		
	printf("平均值是:%.2f", ave);
	return 0;
}
#endif