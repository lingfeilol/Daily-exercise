#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//求字符串长度 strlen函数的三种实现 求字符串的长度
//第一种：指针从第一个走起，走一步加一
//
//int my_strlen(const char* str)//const  不会被修改，不需要对字符串有任何修改操作
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
////第二种 ：递归函数形式
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
////第三种：首尾指针的相减 就是中间元素的个数
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



//strcpy函数的实现  字符串的拷贝

//char* my_strcpy(char* dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//	char* ret = dst;
//	while (*dst = *src)//当后者可以赋值给前者时为真，后者为‘\0’时为假，结束循环
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
//	printf("%s\n", my_strcpy(p2, p1));   //把p1拷贝到p2
//	return 0;
//}




////strcat函数：字符串的拼接(追加)
//char* my_strcat(char* dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//	char* ret = dst;
//	while (*dst)//while(*dst!='\0')  //确保被追加的字符串不为空
//		++dst;                       //把致指针移到被追加的字符串的最后一个字符
//	while (*dst = *src)//在进行字符串的拷贝即可
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
//	//printf("%s\n", strcat(p1, p2));//注意被追加的字符串要有足够的空间容纳追加的字符串
//
//	return 0;
//}


//strcmp函数：比较两个字符串的大小
//strcmp函数的实现
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
//	//比完了之后一直没结果 猜想应该是一样的，在加加就都为\0了，然后在判断
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


//运用联合体判断大小端问题
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
	// 两地址相同。联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小
	un.i = 0x11223344;
	un.c = 0x55;
	printf("%x\n", un.i);//结果为0x11223355 为小端
}
