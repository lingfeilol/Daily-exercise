#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//�����ַ�����һ��ⷨ��
//void rotate_left(char* str, int k)
//{
//	assert(str);
//
//	while (k--)
//	{
//		char tmp = *str;
//		char* cur = str;
//		while (*(cur + 1) != '\0')
//		{
//			*cur = *(cur + 1);
//			++cur;
//		}
//		*cur = tmp;
//	}
//}
//
//int main()
//{
//	char a[] = "ABCDE";
//	printf("%s\n", a);
//
//	rotate_left(a, 3);
//
//	printf("%s\n", a);
//
//	return 0;
//}

//�����ַ��������׽ⷨ��//�����鵥�����ã���ȫ��������
//void reverse_str(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		++left;
//		--right;
//	}
//}
//
//void rotate_left(char* str, int k)
//{
//	assert(str);
//
//	// ABCDE
//	int len = strlen(str);
//	// k len-k
//	//[0,k-1][k,len-1]
//	reverse_str(str, str + k - 1);
//	reverse_str(str+k, str + len - 1);
//
//	reverse_str(str, str + len - 1);
//}
//
//int main()
//{
//	char a[] = "ABCDE";
//	printf("%s\n", a);
//
//	rotate_left(a, 3);
//
//	printf("%s\n", a);
//	return 0;
//}




