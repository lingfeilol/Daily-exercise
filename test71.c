#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *comp(char* str)
{
	char* cur = str;
	while (*cur)
	{
		if (*cur >= 'A' && *cur <= 'Z')
		{
			*cur = *cur + 32;
		}
		cur++;
	}
	return str;
}
int main()
{
	char str1[10] = { 0 };
	char str2[10] = { 0 };
	gets(str1);
	gets(str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		printf("1");
	}
	else
	{
		if (strcmp(str1, str2) == 0){
			printf("2");
		}
		else if(strcmp(comp(str1), comp(str2)) == 0)
		{
			printf("3");
		}	
		else
			printf("4");
	}
	return 0;
}