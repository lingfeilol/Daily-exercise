#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strncpy 指定几个字节的字符拷贝
char* my_strncpy(char* dst, const char* src,size_t num)
{
	assert(dst);
	assert(src);
	assert(num > 0);
	char* str1 = dst;
	while(*dst++ = *src++)
	{
		num--;
	}
	while (num--)
	{
		*dst= '0';
	}
	return str1;
}

int main()
{
	char* p1 = "abc";
	char p2[10]; 
	my_strncpy(p2, p1,5);
	printf("%s\n", p2);

	return 0;
}
//strcat 指定拼接几个字符
char* my_strncat(char* dst, const char* src, size_t num)
{
	assert(dst);
	assert(src);
	assert(num > 0);
	char* str1 = dst;
	while (*dst)
	{
		dst++;
	}
	while (num--)
	{
		*dst++ = *src++;
	}
	return str1;

}
int main()
{
	char* p1 = "abc";
	char p2[10]="qwe"; 
	my_strncat(p2, p1,1);
	printf("%s\n", p2);

	return 0;
}
//指定几个字符比较大小
char* my_strncmp(const char* dst, const char* src, size_t num)
{
	assert(dst);
	assert(src);
	assert(num > 0);
	/*char* str1 = dst;
	char* str2 = src;*/
	int ret = 0; 
	while (num--)
	{
	   ret = *dst - *src;
		if (ret > 0)
		{
			return 1;
		}
		else if(ret < 0)
		{
			return  -1;
		}
		else
		{
			src++;
			dst++;
		}
	}
	if (ret==0)
		{
			return 0;
		}
		
		
}	
int main(){
	char* p1 = "hello";
	char* p2 = "hello1";
	printf("%d\n", my_strncmp(p1, p2,4));
	return 0;
}


	

