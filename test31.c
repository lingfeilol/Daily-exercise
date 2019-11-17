int fun(int n)//判断是不是带2的数
{
	while (n>0)
	{
		if (n % 10 == 2)
		{
			return 1;
		}
		n = n / 10;
	}
	return 0;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = 0;
	int count = 0;
	int tmp = n;
	int i = n;
	for (i = n;i>0;i--)
	{
		if (fun(i))
		{
			count++;
		}
	}
	ret = tmp - count;
	printf("%d\n", ret);
	return 0;

}