#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//两个正整数的最大公倍数
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int i = 1;
//	while ((x*i) % y != 0){
//		i++;
//	}
//	printf("%d", x*i);
//}


//逆置字符串
// [start, end)前闭后开
void ReverseStr(char* start, char* end)
{

	--end;
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;

		++start;
		--end;
	}
}

int main()
{
	char str[100];
	//scanf("%s", str);
	gets(str);

	// 整体逆置
	int len = strlen(str);
	ReverseStr(str, str + len);

	// 单词逆置
	char* start = str, *end = start;
	while (start < str + len)
	{
		if (*end == ' ' || *end == '\0')
		{
			// 找到一个单词
			ReverseStr(start, end);
			start = end + 1;
			end = start;
		}
		else
		{
			++end;
		}
	}

	printf("%s", str);
}



