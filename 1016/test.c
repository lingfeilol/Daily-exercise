#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//���ַ������� strlen����������ʵ�� ���ַ����ĳ���
//��һ�֣�ָ��ӵ�һ��������һ����һ
//
//int my_strlen(const char* str)//const  ���ᱻ�޸ģ�����Ҫ���ַ������κ��޸Ĳ���
//{
//	assert(str);
//	int count = 0;
//	while (*str != 0)
//		//while(*str)
//	{
//		++count;
//		++str;
//	}
//	return count;
//}
//
////�ڶ��� ���ݹ麯����ʽ
//int  my_strlen(const char* str)
//{
//	assert(str);
//	if(*str == '\0')
//		return 0;
//	else
//	{
//		return 1 + strlen(str + 1);
//	}
//}
////�����֣���βָ������ �����м�Ԫ�صĸ���
//int  my_strlen(const char* str)
//{
//	assert(str);
//	const char* end = str;
//	while (*end != '\0')
//	{
//		++end;
//	}
//	return end - str;
//}
//
//int main()
//{
//	char* p= "hello";
//	printf("%d\n", strlen(p));
//	printf("%d\n", my_strlen(p));
//	return 0;
//
//}



//strcpy������ʵ��  �ַ����Ŀ���

//char* my_strcpy(char* dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//	char* ret = dst;
//	while (*dst = *src)//�����߿��Ը�ֵ��ǰ��ʱΪ�棬����Ϊ��\0��ʱΪ�٣�����ѭ��
//	{
//		dst++;
//		src++;
//	}
//	return ret;
//}
//int main()
//{
//	char* p1 = "hello";
//	char p2[20];
//	printf("%s\n", my_strcpy(p2, p1));   //��p1������p2
//	return 0;
//}




////strcat�������ַ�����ƴ��(׷��)
//char* my_strcat(char* dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//	char* ret = dst;
//	while (*dst)//while(*dst!='\0')  //ȷ����׷�ӵ��ַ�����Ϊ��
//		++dst;                       //����ָ���Ƶ���׷�ӵ��ַ��������һ���ַ�
//	while (*dst = *src)//�ڽ����ַ����Ŀ�������
//	{
//		dst++; src++;
//	}
//	return ret;
//}
//int main()
//{
//	char p1[100] = {"hello" };
//	char* p2 = "world";
//	printf("%s\n",my_strcat(p1,p2));
//	//printf("%s\n", strcat(p1, p2));//ע�ⱻ׷�ӵ��ַ���Ҫ���㹻�Ŀռ�����׷�ӵ��ַ���
//
//	return 0;
//}


//strcmp�������Ƚ������ַ����Ĵ�С
//strcmp������ʵ��
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	
//	while (*str1 != '\0'&& *str2 != '\0')
//	{
//		if (*str1 > *str2){
//			return 1;
//		}
//		else if (*str1 < *str2)
//		{
//			return -1;
//		}
//		else
//		{
//			str1++;
//			str2++;
//		}
//	}
//	//������֮��һֱû��� ����Ӧ����һ���ģ��ڼӼӾͶ�Ϊ\0�ˣ�Ȼ�����ж�
//	if (*str1 == '\0' && *str2 == '\0')
//	{
//		return 0;
//	}
//	else if (*str1 == '\0')
//	{
//		return -1;
//	}
//	else
//	{
//		return 1;
//	}
//
//	
//}
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abb";
//	printf("%d\n", strcmp(p1, p2));
//	printf("%d\n", my_strcmp(p1, p2));
//
//	return 0;
//}


//�����������жϴ�С������
union Un
{
	int i;
	char c;
};
union Un un;

int main()
{
	printf("%d\n", &(un.i));
	printf("%d\n", &(un.c));
	// ����ַ��ͬ�����ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С
	un.i = 0x11223344;
	un.c = 0x55;
	printf("%x\n", un.i);//���Ϊ0x11223355 ΪС��
}
