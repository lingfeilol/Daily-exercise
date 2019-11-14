int main()
{
	int n;
	scanf("%d", &n);
	int arr[1000];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int a;
	scanf("%d", &a);
	int change = -1;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == a)
		{
			printf("%d\n", i+1);
			change = 1;
			break;
		}
	}
	if (change == -1)
	{
		printf("%d",change);
	}
	return 0;

}