#include <stdio.h>
#include<windows.h>

int Fun(int n)
{	
	if (n > 10)  
	{
		Fun(n / 10);
	}
		printf("%d\n", n % 10);
	
}


int main()
{
	int n = 0;
	printf("请输入n的值");
	scanf("%d", &n);
	Fun(n);
	return 0;

}

#if 0
int main()
{
	int n;
	printf("请输入n的值");
	scanf("%d", &n);
	int ret = 1;
	while ( n>1)
	{
		ret *= n;
		n--;

	}
	printf("%d\n", ret);
	return 0;
}

int Fun(int n)
{
	if (n == 1)
	{
		return 1;
	}
	
	else
	{
		return  n*Fun(n-1);
	}
}
int main()
{
	int n = 0;
	printf("请输入n的值");
	scanf("%d", &n);
	printf("%d\n", Fun(n));
	return 0;
}




int Fun(int n)
{	
	if (n %10==0)
	{
		return 0;
	}else {
		return  n%10+ Fun(n / 10);
	}
}


int main()
{
	int n = 0;

	printf("请输入n的值");
	scanf("%d", &n);
	printf("%d\n", Fun(n));
	return 0;

}


int Fun(int n ,int k)
{
	if (n == 1)
	{
		return 1;
	}
	if (k == 1)
	{
		return n;
	}
	return n*Fun(n, k-1);
}

int main()
{
	int n = 0;
	int k = 0;
	printf("请输入n和k的值");
	scanf("%d %d",&n, &k);
	printf("%d\n", Fun(n,k));
	system("pause");

	return 0;
}

int main()
{ 
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	int n = 0;
	printf("请输入n的值：");
	scanf("%d", &n);
	int i = 0;
	if (n == 1 || n == 2)
	{
		f3 = 1;
	}
	else
	for (i = 3; i <= n; i++)
	{  
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%d\n", f3);
	return 0;
}

int Fun(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return Fun(n - 1) + Fun(n - 2);
}
int main()
{
	int n = 0;
	int i = 0;
    printf("请输入n的值：");
	scanf("%d", &n);
		printf("%d", Fun(n));
		system("pause");
		return 0;
#endif	
