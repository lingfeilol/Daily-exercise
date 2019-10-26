#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>


#if 0
//调整数组使奇数全部都位于偶数前面。
void fun(int arr[], int len) {
	int left = 0;
	int right = len - 1;
	int temp = 0;
	while (left < right) {

		while (arr[left] % 2 == 1) {  //向右寻找，直到找到偶数
			left++;
		}
		while (arr[right] % 2 == 0) {  //向左寻找，直到找到奇数
			right--;
		}
		if (left < right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	}
}
int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6};
	int len = sizeof(arr) / sizeof(arr[0]);
	fun(arr, len);
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
//&&遇假就得出结果然后不执行后面的表达式
//||遇真就得出结果然后不执行后面的表达式
int main()
{
	int i = 0;
	int j = 0;
	a = 0, b = 2, c = 3;
	i = a++ && ++b && c++;
	printf("a=%d\n  b=%d\n  c=%d\n", a, b, c);
	//j = a++ || ++b || c++;
	//printf("a=%d  b=%d  c=%d\n", a, b, c);
	return 0;
}


//有序数组的二分查找
int fun(int arr[], int len, int x)
{
	int left = 0;
	int right = len-1 ;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x > arr[mid])
		{
			left = mid+1 ;
		}
		else if (x < arr[mid])
		{ 
			right = mid-1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
	
}
int main()
{
	int x = 0;
	int arr[] = {  0,1, 2, 3, 4, 5, 6, 7, 8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("数组长为%d\n", len);
	while (1){
		printf("请输入要查找的数：");
		scanf("%d", &x);
		if (fun(arr, len, x))
		{
			printf("找到了\n");
			break;
		}
		else
		{
			printf("没找到\n");
		}
	}

}


//传值传参
int swap(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
//传址传参
int swap2(int *px, int *py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 100;
	int b = 200;
	swap(a, b);
	printf("a=%d\n,b=%d\n", a, b);//100 200
	swap2(&a, &b);
	printf("a=%d\n,b=%d\n", a, b);//200 100 
	
	return 0;
}

//杨氏矩阵
int find(int arr[3][3], int row, int col, int key)
{
	int i = 0;
	int j = col-1;
	while (i < row &&j >= 0)
	{

		if (arr[i][j]< key)
		{
			i = i + 1;
		}
		if (arr[i][j] > key)
		{
			j = j - 1;
		}
		if (arr[i][j] == key)
		{
			//return 1;
			printf("找到了在[%d][%d]",i,j);
			return ;
		}
	}
	
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int x = 3;
	int y = 3;
	int z = 0;
	printf("请输入你要找到值：");
	scanf("%d", &z);
	find(arr, x, y, z);
	/*int ret = find(arr, x, y, 4);
	if (ret == 1)
	{
		printf("找到了");
	}
	if (ret != 1)
	{
		printf("没找到");
	}*/
	return 0;
	
}


int main()
{
	int i＝0x123456;
	
	//int i＝0x123456 char *pc＝(char*)&i 求*pc *(pc + 1)->>pc[1]
	char* pc＝(&i);//求*pc *(pc + 1)
	return 0;
}


int main()
{
	int arr[10] = { 1, 2, 3, 4 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	printf("%p\n", *arr);
	printf("%p\n", arr[0]);
	printf("%d\n", arr[1]);
	return 0;
}
int main()
{
	int arr1[] = { "abc" };
	int arr2[3] = { 'a', 'b', 'c' };
	printf("%d %d", arr1, arr2);
	return 0;
}
int strlen(char *a)
{
	if (*a == '\0')
		return 0;
	else return 1+strlen(a +1);
}
int main()
{
	char *a = "abcdef";
	int len = strlen(a);
	printf("%d\n", len);
	return 0;
}

int main()
{
	int i = 1;
	do
	{
 		if (5 == i)
			continue;
		printf("%d\n", i);
		i++;
	} while (i < 10);
	
	return 0;
}

int main()
{
	int i = 0;
	int k = 0;
	
	for (i = 0, k = 0; k = 0; i++, k++)
	{
		k++;
		
		printf("%d ", k );
	}
	return 0;

}

1.
#include<stdio.h>
#include <stdlib.h>
int reverse_bit(int x){
	int a = 0;
	int b = 0;
	for (int i = 0; i < 32; i++){

		a = x & 1;//取出最后一位数
		x = x >> 1;//把值右移一位
		b = b + (a << (31 - i));//把每次末尾取出来的值都放在变量里，其实整体相当于把二进制数转置了一下
	}
	return b;
}

int main(){
	int a = 0;
	scanf("%d", &a);
	printf("%u", reverse_bit(a));
	system("pause");
}
2.
int main()
{
	double a = 0;
	double b = 0;
	double ave = 0;
	scanf("%lf%lf", &a, &b);
	if (a>b)
	{
		ave = (a - b) / 2 + b;
	}
	if (a < b)
	{
		ave = (b - a) / 2 + a;
	}
	else
	{
		ave = a;
	}

	printf("平均值是:%.2f", ave);
	return 0;
}
3.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void find_num(int *p, int sz)
{
	int num = 0;
	int num1 = 0;
	int num2 = 0;
	int i = 0;
	int count = 0;
	int n = 0;
	if ((sz % 2) == 1)  //数组个数为奇数
	{
		for (i = 0; i < sz; i++)
		{
			num = num ^ *(p + i);    //所有数异或结果为单数
		}
		printf("单数:%d\n", num);
	}
	else          //数组个数为偶数：一种是没有单数 还有是两个单数
	{
		for (i = 0; i < sz; i++)
			num = num^ *(p + i);
		if (num == 0)            //所有数异或结果为零说明没有单数
		{
			printf("没有单数\n");
		}
		else  //有两个单数
		{
			while (!(num & 1))
			{
				count++;
				num = num >> 1;
			}
			for (i = 0; i < sz; i++)
			{
				n = p[i] >> count; //所有数异或结果后面有几个0,
				//每个数依次往右移动几位
				if (n & 1) //把末位为1的数依次异或
				{
					num1 = num1 ^ *(p + i);
				}
				else  //把末位为0的数依次异或
				{
					num2 = num2 ^ *(p + i);
				}
			}
			printf("两个单数 :\n%d\n%d\n ", num1, num2);
		}
	}
}
void display(int *p, int sz)
{
	int i = 0;
	printf("数组为:\n");
	for (i = 0; i < sz; i++)
		printf("%d ", p[i]);
	printf("\n");
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 1, 8, 3, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	display(arr, sz)
		find_num(arr, sz);
	system("pause");
	return 0;
}
4.
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
void swap(char *left, char *right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse(char *arr)
{
	//整体逆置
	int len = strlen(arr);
	swap(arr, arr + len - 1);
	//每个单词的逆置
	while (*arr != '\0')//若arr不等于\0说明还没有到最后一个单词
	{
		char *start = arr;//单词的起始位置
		char *end = start;//单词的结束位置
		while ((*end != ' ') && (*end != '\0'))//连接符必须为&&
		{
			end++;//end指向空格位置的地址
		}
		swap(start, end - 1);
		//单词的起始位置为start，结束位置为空格前一个字符（end-1）
		if (*end != '\0')
			arr = end + 1;
		//当结束一个单词的逆置后，下一个单词的开始为空格后一个字符（end+1）
		else
			arr = end;
	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);//完成整个过程的逆序,只传递这个数组过去，不用传数组的大小
	printf("%s\n", arr);
	system("pause");
	return 0;
}
#endif