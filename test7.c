#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//��������������󹫱���
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


//�����ַ���
// [start, end)ǰ�պ�
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

	// ��������
	int len = strlen(str);
	ReverseStr(str, str + len);

	// ��������
	char* start = str, *end = start;
	while (start < str + len)
	{
		if (*end == ' ' || *end == '\0')
		{
			// �ҵ�һ������
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



