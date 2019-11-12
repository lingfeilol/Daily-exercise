#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4  数组首元素的地址 地址的字节大小为4
	printf("%d\n", sizeof(*a));//4  
	printf("%d\n", sizeof(a + 1));//4 第二个元素的地址
	printf("%d\n", sizeof(a[1]));//4  第二个元素的地址
	printf("%d\n", sizeof(&a));//4 数组的地址
	printf("%d\n", sizeof(*&a));//16  解引用整个数组
	printf("%d\n", sizeof(&a + 1)); //4 下一个数组的地址
	printf("%d\n", sizeof(&a[0]));//4 首元素的的地址
	printf("%d\n", sizeof(&a[0] + 1));//4 第二个元素的地址
	return 0;
}
//一维数组


//字符数组
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6     整个数组的字节大小
	printf("%d\n", sizeof(arr + 0));//4  数组首元素的地址，
	printf("%d\n", sizeof(*arr));//1    解引用arr数组首元素的地址取得‘a’，为char类型占一个字节大小
	printf("%d\n", sizeof(arr[1]));//1   第二个元素 ‘b’
	printf("%d\n", sizeof(&arr));//4  数组的地址
	printf("%d\n", sizeof(&arr + 1));//4   下一个（层）数组的地址
	printf("%d\n", sizeof(&arr[0] + 1));//4  数组第二个元素的地址
	printf("%d\n", strlen(arr));// 随机数 n   //数组首元素的地址
	printf("%d\n", strlen(arr + 0));//首元素的地址        
	printf("%d\n", strlen(*arr));// 第一个元素            与strlen函数的参数不符
	printf("%d\n", strlen(arr[1]));//第二个元素
	printf("%d\n", strlen(&arr)); //整个数组的地址
	printf("%d\n", strlen(&arr + 1));//下一个数组的地址
	printf("%d\n", strlen(&arr[0] + 1));// n-1  //第二个元素的地址 
	return 0;
}

//字符串数组
int main(){
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//  7   整个数组的字节大小 6+1  字符串以/0结尾算一个字节
	printf("%d\n", sizeof(arr + 0));//4  首元素的地址
	printf("%d\n", sizeof(*arr));// 1 解引用首元素的地址
	printf("%d\n", sizeof(arr[1]));//1  第二个元素
	printf("%d\n", sizeof(&arr));//4  整个数组的地址
	printf("%d\n", sizeof(&arr + 1));//4  第二个数组的地址
	printf("%d\n", sizeof(&arr[0] + 1));//4 第二个元素的地址
	printf("%d\n", strlen(arr));// 6  strlen函数就是求字符串的长度的
	printf("%d\n", strlen(arr + 0));//6   首元素的地址
	printf("%d\n", strlen(*arr));// 第一个元素   与strlen函数的参数不符
	printf("%d\n", strlen(arr[1]));//第二个元素
	printf("%d\n", strlen(&arr)); //整个数组的地址
	printf("%d\n", strlen(&arr + 1));//下一个数组的地址
	printf("%d\n", strlen(&arr[0] + 1)); //第二个元素的地址 
	return 0;
}


int main(){
	char *p = "abcdef";
	printf("%d\n", sizeof(p));// 4   指针变量p存的地址 首元素的地址
	printf("%d\n", sizeof(p + 1));// 4  第二个元素的地址
	printf("%d\n", sizeof(*p));// 1    解引用为字符串abcdef的首元素a   类型为char 一个字节大小
	printf("%d\n", sizeof(p[0]));//1  p[0]等价于*(p+0) 还是首元素a
	printf("%d\n", sizeof(&p));// 4  p本来就是一个地址，再加一个取地址符号就相当于二级指针了，但是还是指向的地址
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4 
	printf("%d\n", strlen(p));//6 从第一个元素的地址开始，直到遇见\0停止
	printf("%d\n", strlen(p + 1));//5 从 第二个元素的地址开始，直到遇到\0停止
	printf("%d\n", strlen(*p));// 第一个字符，char类型与strlen函数参数不匹配
	printf("%d\n", strlen(p[0]));  //相当于*（p+0）第一个字符
	printf("%d\n", strlen(&p));//  二级指针
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));
	return 0;
}

int main()
{
	//二维数组        二维数组名代表数组指针，指向第一个一维数组的地址
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48  4*3*4=48   int 四个字节  数组里12个元素
	printf("%d\n", sizeof(a[0][0]));//4 数组首元素整型0
	printf("%d\n", sizeof(a[0]));//16    4*4=16 整个第一个一维数组a[0]的字节大小   int 四个字节  数组里4个元素  []操作符自带解引用
	printf("%d\n", sizeof(a[0] + 1));//4  地址  *(a+0)+1     a[0]代表第一个一维数组，数组名进行加减操作时会变为地址加减，加减的步长这个数组名的类型
	printf("%d\n", sizeof(*(a[0] + 1)));// 4 地址
	printf("%d\n", sizeof(a + 1));//4 二维数组名代表数组指针，指向第一个一维数组的地址    a+1代表第二个一维数组的地址
	printf("%d\n", sizeof(*(a + 1)));//16  解引用第二个一维数组
	printf("%d\n", sizeof(&a[0] + 1));//4  地址
	printf("%d\n", sizeof(*(&a[0] + 1))); //16 解引用第二个一维数组
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16  第四个一维数组的字节大小
	return 0;
}
