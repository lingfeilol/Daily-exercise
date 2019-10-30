#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
//指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。 比如： char* 的指针解引用就
//只能访问一个字节，而 int* 的指针的解引用就能访问四个字节。
int main()
{
	int n = 0x11223344;
	char *pc = (char *)&n;
	int *pi = &n;
	*pc = 0;   //char* 的指针解引用就只能访问一个字节,对其赋值0只能修改低字节的8个比特位
	printf("%p\n", n);//11223300
	*pi = 0;   //int* 的指针的解引用就能访问四个字节，对其赋值可以修改四个字节的32个比特位
	printf("%p\n", n);//00000000
	return 0;
}
#if 0
//演示实例
//指针加减整数   指针的类型决定了指针向前或者向后走一步有多大（距离）
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