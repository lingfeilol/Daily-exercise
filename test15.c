#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//斐波那契数列
int main(){
	int n = 0;
	scanf("%d\n", &n);
	if (1 <= n <= 1000000)
	{
		int f[100];
		f[1] = 1, f[2] = 1;
		for (int i = 3; i < n; i++)
		{
			f[i] = f[i - 1] + f[i - 2];
			
		}
		printf("%d\n", f[n] % 10007);
	}
	return 0;
}
//圆面积
//#include<stdio.h>
//#define pi (atan(1.0)*4)
//int main()
//{
//	int radius = 0;
//	double area = 0;
//	scanf("%d\n", &radius);
//	if (1 <= radius <= 10000)
//	{
//		area = (double)radius * (double)radius * pi;
//	}
//	printf("%.7lf\n", area);
//	return 0;
//}
//序列求和
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	long long ret = 0;
//	scanf("%d\n", &n);
//	if (0 < n <1000000000)
//	{
//		ret = n*(n + 1) / 2;
//		
//	}
//	printf("%I64d\n", ret);
//	
//	return 0;
//}
//两数之和
//#include<stdio.h>
//int main()
//{
//	int A, B;
//	scanf("%d %d\n", &A, &B);
//	printf("%d", A + B);
//	return 0;
//}