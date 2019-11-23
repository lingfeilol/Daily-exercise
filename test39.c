#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct s1
{
	char c1;
	int i;
	char c2;
};//12
struct s2
{
	char c1;
	char c2;
	int i;
};//8
struct s3
{
	int i;
	char c1;
	char c2;
};//8
struct s4
{
	int i;
	char c1;
	double d;//8
};//16
struct s5
{
	int i;
	double d;//8
	char c1;
};//24
struct s6//结构体嵌套问题
{
	int i;
	char c1;
	struct s4 s;//总大小16
};//24
struct s7
{
	int i;
	struct s4 s;//16
	char c1;
};//32
int main()
{
	printf("%d\n", sizeof(struct s7));
}

union Un
{
	int i;
	char c;
};
union Un un;
int main()
{
	// 下面输出的结果一样的
	printf("%d\n", &(un.i));
	printf("%d\n", &(un.c));
	//下面输出的结果是什么？
	un.i = 0x11223344;
	un.c = 0x55;
因为共用一块内存 int占四个字节，char占一个字节   低地址内存处 55把44重新赋值了   用于大小端问题
	printf("%x\n", un.i);//0x11223355

}
union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union Un1));//8
	printf("%d\n", sizeof(union Un2));//16
}


