char* strcat(char *s1, char* s2)
{
	char* str1 = s1;
	char* str2 = s2;
	while (*str1)
	{
		str1++;
	}
	while (*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return s1;
}
void swap(int *n1, int *n2)
{
	int *tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
int only(int x)
{
	int k = 0;
	do
	{
		if (x&1==1)
		{
			k++;
		}
	} while (x >>= 1);
	return k;
}
int main()
{
	/*char* s1 = "hjlhjk";
	char* s2 = "hjk";
	char* ret = strindex(s1, s2);
	if (*ret == NULL)
		printf("匹配失败！");
	else
		puts(ret);

	printf("匹配位置为：%d", StrIndex(s1, s2));*/
	//test1();
	//char s1[100];
	//char s2[100];
	//gets(s1);
	//gets(s2);
	//strcat(s1, s2);
	//puts(s1);
	/*int x, y;
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("%d %d", x, y);*/
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	int i = 0;
	int ret = 0;
	for (i = x; i <= y; i++)
	{
		ret += only(i);
	}
	printf("%d", ret);
	return 0;
}