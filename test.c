#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>


#if 0
//��������ʹ����ȫ����λ��ż��ǰ�档
void fun(int arr[], int len) {
	int left = 0;
	int right = len - 1;
	int temp = 0;
	while (left < right) {

		while (arr[left] % 2 == 1) {  //����Ѱ�ң�ֱ���ҵ�ż��
			left++;
		}
		while (arr[right] % 2 == 0) {  //����Ѱ�ң�ֱ���ҵ�����
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
//&&���پ͵ó����Ȼ��ִ�к���ı��ʽ
//||����͵ó����Ȼ��ִ�к���ı��ʽ
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


//��������Ķ��ֲ���
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
	printf("���鳤Ϊ%d\n", len);
	while (1){
		printf("������Ҫ���ҵ�����");
		scanf("%d", &x);
		if (fun(arr, len, x))
		{
			printf("�ҵ���\n");
			break;
		}
		else
		{
			printf("û�ҵ�\n");
		}
	}

}


//��ֵ����
int swap(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
//��ַ����
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

//���Ͼ���
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
			printf("�ҵ�����[%d][%d]",i,j);
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
	printf("��������Ҫ�ҵ�ֵ��");
	scanf("%d", &z);
	find(arr, x, y, z);
	/*int ret = find(arr, x, y, 4);
	if (ret == 1)
	{
		printf("�ҵ���");
	}
	if (ret != 1)
	{
		printf("û�ҵ�");
	}*/
	return 0;
	
}


int main()
{
	int i��0x123456;
	
	//int i��0x123456 char *pc��(char*)&i ��*pc *(pc + 1)->>pc[1]
	char* pc��(&i);//��*pc *(pc + 1)
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

		a = x & 1;//ȡ�����һλ��
		x = x >> 1;//��ֵ����һλ
		b = b + (a << (31 - i));//��ÿ��ĩβȡ������ֵ�����ڱ������ʵ�����൱�ڰѶ�������ת����һ��
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

	printf("ƽ��ֵ��:%.2f", ave);
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
	if ((sz % 2) == 1)  //�������Ϊ����
	{
		for (i = 0; i < sz; i++)
		{
			num = num ^ *(p + i);    //�����������Ϊ����
		}
		printf("����:%d\n", num);
	}
	else          //�������Ϊż����һ����û�е��� ��������������
	{
		for (i = 0; i < sz; i++)
			num = num^ *(p + i);
		if (num == 0)            //�����������Ϊ��˵��û�е���
		{
			printf("û�е���\n");
		}
		else  //����������
		{
			while (!(num & 1))
			{
				count++;
				num = num >> 1;
			}
			for (i = 0; i < sz; i++)
			{
				n = p[i] >> count; //����������������м���0,
				//ÿ�������������ƶ���λ
				if (n & 1) //��ĩλΪ1�����������
				{
					num1 = num1 ^ *(p + i);
				}
				else  //��ĩλΪ0�����������
				{
					num2 = num2 ^ *(p + i);
				}
			}
			printf("�������� :\n%d\n%d\n ", num1, num2);
		}
	}
}
void display(int *p, int sz)
{
	int i = 0;
	printf("����Ϊ:\n");
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
	//��������
	int len = strlen(arr);
	swap(arr, arr + len - 1);
	//ÿ�����ʵ�����
	while (*arr != '\0')//��arr������\0˵����û�е����һ������
	{
		char *start = arr;//���ʵ���ʼλ��
		char *end = start;//���ʵĽ���λ��
		while ((*end != ' ') && (*end != '\0'))//���ӷ�����Ϊ&&
		{
			end++;//endָ��ո�λ�õĵ�ַ
		}
		swap(start, end - 1);
		//���ʵ���ʼλ��Ϊstart������λ��Ϊ�ո�ǰһ���ַ���end-1��
		if (*end != '\0')
			arr = end + 1;
		//������һ�����ʵ����ú���һ�����ʵĿ�ʼΪ�ո��һ���ַ���end+1��
		else
			arr = end;
	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);//����������̵�����,ֻ������������ȥ�����ô�����Ĵ�С
	printf("%s\n", arr);
	system("pause");
	return 0;
}
#endif