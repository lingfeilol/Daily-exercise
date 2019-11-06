//判断两个字符串是不是逆置的
//int is_rotate_str(char* str, char* rt_str)
//{
//	int len = strlen(str);
//	char* double_str = (char*)malloc(len * 2 + 1);
//	strcpy(double_str, str);
//	strcat(double_str, str);
//	/*if (strstr(double_str, rt_str) != NULL)
//	{
//		free(double_str);
//		return 1;
//	}
//	else
//	{
//		free(double_str);
//
//		return 0;
//	}*/
//
//	int ret = strstr(double_str, rt_str) == NULL ? 0 : 1;
//	free(double_str);
//	return ret;
//}
//
//int main()
//{
//	printf("%d\n", is_rotate_str("AABCD", "BCDAB"));
//
//	return 0;
//}
