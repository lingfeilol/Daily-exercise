int strInclude(char *s1, char* s2)
{
	for (int i = 0; i < strlen(s2); i++)
	{
		int j = 0;
		for ( j = 0; (j < strlen(s1)) && s1[j]!=s2[i]; j++)
		{
			;
		}
		if (j >= strlen(s1))
			return -1;
			
	}
	return 1;
}
int main()
{
	char *s1="ABCD";
	char *s2="BD";
	printf("%d",strInclude(s1, s2));
	return 0;
}