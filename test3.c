#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
//ָ������;����ˣ���ָ������õ�ʱ���ж���Ȩ�ޣ��ܲ��������ֽڣ��� ���磺 char* ��ָ������þ�
//ֻ�ܷ���һ���ֽڣ��� int* ��ָ��Ľ����þ��ܷ����ĸ��ֽڡ�
int main()
{
	int n = 0x11223344;
	char *pc = (char *)&n;
	int *pi = &n;
	*pc = 0;   //char* ��ָ������þ�ֻ�ܷ���һ���ֽ�,���丳ֵ0ֻ���޸ĵ��ֽڵ�8������λ
	printf("%p\n", n);//11223300
	*pi = 0;   //int* ��ָ��Ľ����þ��ܷ����ĸ��ֽڣ����丳ֵ�����޸��ĸ��ֽڵ�32������λ
	printf("%p\n", n);//00000000
	return 0;
}
#if 0
//��ʾʵ��
//ָ��Ӽ�����   ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩
int main()
{
	int n = 10;
	char *pc = (char*)&n;
	int *pi = &n;

	printf("%p\n", &n);//
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	printf("%p\n", pi);
	printf("%p\n", pi + 1);
	return  0;
}
#endif