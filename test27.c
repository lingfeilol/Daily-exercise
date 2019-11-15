int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = 0;
	for (i = 0; i < n; i++)//输出最大值
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	for (i = 0; i < n; i++)//确定下标
	{
		if (max == arr[i])
		{
			break;
		}
	}
	printf("%d\n", max);
	printf("%d", i);
	return 0;
}