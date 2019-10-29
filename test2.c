#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	char ch = '0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= '0' && ch <= '9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	int i = 0x11223344;
	char* p = (char*)&i;
	printf("%p\n", &i);
	printf("%p\n", *p);//0x00000044
	printf("%p\n", *(p+1));//0x00000033
	return 0;
}