#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
#include<string.h>

//最小公倍数
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	int i = 1;
//	while (A*i%B != 0)
//		i++;
//	printf("%d", A*i);
//	return 0;
//}



//逆置字符串
//i like you!  -->you! like i   
void reverse(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}

int main()
{
	char input[1000];
	gets(input);//scanf遇到空格就结束输入了
	reverse(input, input + strlen(input) - 1);
	char* start = input;
	while (*start)
	{
		char* end = start;
		while (*end != ' '&&*end != NULL)
			end++;
		reverse(start, end - 1);
		if (*end != NULL)
			start = end + 1;
		else
			start = end;//start是循环出口，必须要更新
	}
	puts(input);
	return 0;
}

#endif



