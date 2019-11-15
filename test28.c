int main()
{
	int n=0;
	scanf("%d", &n);
	if (0<n <= 100)
	{
		__int64 ret = 1;//最大整型类型
		__int64 i = n;
		for (i = n; i > 0; i--)
		{
			ret *= i;
		}
		//printf("%I64d\n", ret);
		while (ret > 0)
		{
			if (ret % 10 == 0)
			{
				ret = ret / 10;
			}
			else
			{
				printf("%d", ret % 10);
				break;
			}
		}
	}
	return 0;
}