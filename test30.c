#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char str[100] = { 0 };
	scanf("%s", &str);
	int len = strlen(str);
	int i = 0;
	int change = 0;
	for (i = 0; i<len; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			printf("%c", str[i]);
			change = 1;
			break;
		}
	}
	if (change == 0)
	{
		printf("n");
	}
	
	return 0;
}