
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
/*int main()
{
    int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4  ������Ԫ�صĵ�ַ ��ַ���ֽڴ�СΪ4
	printf("%d\n", sizeof(*a));//4  
	printf("%d\n", sizeof(a + 1));//4 �ڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(a[1]));//4  �ڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a));//4 ����ĵ�ַ
	printf("%d\n", sizeof(*&a));//16  ��������������
	printf("%d\n", sizeof(&a + 1)); //4 ��һ������ĵ�ַ
	printf("%d\n", sizeof(&a[0]));//4 ��Ԫ�صĵĵ�ַ
	printf("%d\n", sizeof(&a[0] + 1));//4 �ڶ���Ԫ�صĵ�ַ
	return 0;
}*/
//һά����

/*
//�ַ�����
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6     ����������ֽڴ�С
	printf("%d\n", sizeof(arr + 0));//4  ������Ԫ�صĵ�ַ��
	printf("%d\n", sizeof(*arr));//1    ������arr������Ԫ�صĵ�ַȡ�á�a����Ϊchar����ռһ���ֽڴ�С
	printf("%d\n", sizeof(arr[1]));//1   �ڶ���Ԫ�� ��b��
	printf("%d\n", sizeof(&arr));//4  ����ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//4   ��һ�����㣩����ĵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1));//4  ����ڶ���Ԫ�صĵ�ַ
	printf("%d\n", strlen(arr));// ����� n   //������Ԫ�صĵ�ַ
	printf("%d\n", strlen(arr + 0));//��Ԫ�صĵ�ַ        
	printf("%d\n", strlen(*arr));// ��һ��Ԫ��            ��strlen�����Ĳ�������
	printf("%d\n", strlen(arr[1]));//�ڶ���Ԫ��
	printf("%d\n", strlen(&arr)); //��������ĵ�ַ
	printf("%d\n", strlen(&arr + 1));//��һ������ĵ�ַ
	printf("%d\n", strlen(&arr[0] + 1));// n-1  //�ڶ���Ԫ�صĵ�ַ 
	return 0;
}
*/
/*
//�ַ�������
int main(){
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//  7   ����������ֽڴ�С 6+1  �ַ�����/0��β��һ���ֽ�
	printf("%d\n", sizeof(arr + 0));//4  ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*arr));// 1 ��������Ԫ�صĵ�ַ
	printf("%d\n", sizeof(arr[1]));//1  �ڶ���Ԫ��
	printf("%d\n", sizeof(&arr));//4  ��������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//4  �ڶ�������ĵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1));//4 �ڶ���Ԫ�صĵ�ַ
	printf("%d\n", strlen(arr));// 6  strlen�����������ַ����ĳ��ȵ�
	printf("%d\n", strlen(arr + 0));//6   ��Ԫ�صĵ�ַ
	printf("%d\n", strlen(*arr));// ��һ��Ԫ��   ��strlen�����Ĳ�������
	printf("%d\n", strlen(arr[1]));//�ڶ���Ԫ��
	printf("%d\n", strlen(&arr)); //��������ĵ�ַ
	printf("%d\n", strlen(&arr + 1));//��һ������ĵ�ַ
	printf("%d\n", strlen(&arr[0] + 1)); //�ڶ���Ԫ�صĵ�ַ 
	return 0;
}


int main(){
	char *p = "abcdef";
	printf("%d\n", sizeof(p));// 4   ָ�����p��ĵ�ַ ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(p + 1));// 4  �ڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*p));// 1    ������Ϊ�ַ���abcdef����Ԫ��a   ����Ϊchar һ���ֽڴ�С
	printf("%d\n", sizeof(p[0]));//1  p[0]�ȼ���*(p+0) ������Ԫ��a
	printf("%d\n", sizeof(&p));// 4  p��������һ����ַ���ټ�һ��ȡ��ַ���ž��൱�ڶ���ָ���ˣ����ǻ���ָ��ĵ�ַ
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4 
	printf("%d\n", strlen(p));//6 �ӵ�һ��Ԫ�صĵ�ַ��ʼ��ֱ������\0ֹͣ
	printf("%d\n", strlen(p + 1));//5 �� �ڶ���Ԫ�صĵ�ַ��ʼ��ֱ������\0ֹͣ
	printf("%d\n", strlen(*p));// ��һ���ַ���char������strlen����������ƥ��
	printf("%d\n", strlen(p[0]));  //�൱��*��p+0����һ���ַ�
	printf("%d\n", strlen(&p));//  ����ָ��
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));
	return 0;
}
*/
int main()
{
	//��ά����        ��ά��������������ָ�룬ָ���һ��һά����ĵ�ַ
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48  4*3*4=48   int �ĸ��ֽ�  ������12��Ԫ��
	printf("%d\n", sizeof(a[0][0]));//4 ������Ԫ������0
	printf("%d\n", sizeof(a[0]));//16    4*4=16 ������һ��һά����a[0]���ֽڴ�С   int �ĸ��ֽ�  ������4��Ԫ��  []�������Դ�������
	printf("%d\n", sizeof(a[0] + 1));//4  ��ַ  *(a+0)+1     a[0]�����һ��һά���飬���������мӼ�����ʱ���Ϊ��ַ�Ӽ����Ӽ��Ĳ������������������
	printf("%d\n", sizeof(*(a[0] + 1)));// 4 ��ַ
	printf("%d\n", sizeof(a + 1));//4 ��ά��������������ָ�룬ָ���һ��һά����ĵ�ַ    a+1����ڶ���һά����ĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));//16  �����õڶ���һά����
	printf("%d\n", sizeof(&a[0] + 1));//4  ��ַ
	printf("%d\n", sizeof(*(&a[0] + 1))); //16 �����õڶ���һά����
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16  ���ĸ�һά������ֽڴ�С
	return 0;
}