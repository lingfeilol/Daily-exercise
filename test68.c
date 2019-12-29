#include<stdio.h>
#include<string.h>
int main()
{
	char a[20] = {0};
	gets(a);
	int i = 0;
	do
	{	
		if (a[i] >= 'A'&& a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}
		else if (a[i] >= 'a'&& a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}	
	} while (a[i++]);
	puts(a);
	return 0;
}