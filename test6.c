#include<stdio.h>
int main()
{
	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };//��ά����ɿ���һά���������
	printf("%d\n", &arr[0][0]);
	printf("%d\n",arr);//��������arr[3]����ĸ�ĵ�ַ
	printf("%d\n", &arr);//������������arr[3][4]���׵�ַ
	printf("%d\n",arr+1);//����arr[3]���׵�ַ��1
	printf("%d\n",&arr[1]);//����ڶ��У��ڶ���һά���飩�ĵ�ַ     ����arr[3]�ĵڶ���Ԫ�ص�ַ
	printf("%d\n", &arr[1] + 1);//����arr[3]�ĵڶ���Ԫ�ص�ַ��1
	printf("%d\n",arr[1]+1);//����ڶ��У��ڶ��еڶ���Ԫ�أ��ĵ�ַ
	printf("%d\n",*(arr[1]+1));//�ڶ��еڶ���Ԫ�أ���ַ�������
	printf("%d\n",*(*(arr+1)+1));
	return 0;
}
#if 0
int main()
{
	char p1[]="hello bit";
	char *p2 = "hello bit";
	printf("%s\n", p1);//hello bit
	printf("%s\n", p2);//hello bit
	return 0;
}
#endif 
