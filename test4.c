#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//语法错误
	printf("%d\n", strlen(arr[1]))//语法错误
	printf("%d\n", strlen(&arr))//语法错误
	printf("%d\n", strlen(&arr + 1))//语法错误
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}
#if 0
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4
	//地址的字节大小都是4
	printf("%d\n", strlen(arr));//
	printf("%d\n", strlen(arr + 0));//
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	return 0;
}

int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4
	printf("%d\n",sizeof(*a));//4
	printf("%d\n",sizeof(a+1));//4
	printf("%d\n",sizeof(a[1]));//4
	printf("%d\n",sizeof(&a));//4
	printf("%d\n",sizeof(*&a));//16
	printf("%d\n",sizeof(&a+1));//4
	printf("%d\n",sizeof(&a[0]));//4
	printf("%d\n",sizeof(&a[0]+1)); //4
	return 0;
}

void show(int *arr,int len)
{
	int i = 0;
	for (; i < len; i++)
		printf("%d", arr[i]);
}
int BubbleSort(int *arr,int len)
{
	int i = 0;
	int temp;
	for (; i < len - 1; i++)
	{
		int j = 0;
		int flg = 0;
		for (; j < len - 1-i; j++)
		if (arr[j]>arr[j++])
		 temp = arr[j];
		 arr[j] = arr[j + 1];
		 arr[j + 1] = temp;
		 flg = 1;
		 if (!flg)
		 {
			 break;
		 }
		
	}

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 9, 8, 7, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	show(arr, len);
	BubbleSort(arr,len);
	show(arr, len);
	return 0;
}
