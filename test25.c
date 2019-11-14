int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 100;
	for (; i <= 999; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (a*a*a + b*b*b + c*c*c == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}