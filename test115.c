#include<stdio.h>
//蓝桥 加法运算
//void GetTwoInts(int *p1, int *p2)
//{
//	scanf("%d%d", p1, p2);
//}
//int main()
//{
//	int a = 0, b = 0;
//	int *_pa = &a;
//	int *_pb = &b;
//	GetTwoInts(_pa, _pb);
//	int ret = *_pa + *_pb;
//	printf("%d\n", ret);
//	return 0;
//}

//排序
void Insertsort(int *arr,int n)
{
	int i = 0;
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int Insertnum = arr[end + 1];
		while (end>=0 && arr[end] > Insertnum)
		{
			arr[end + 1] = arr[end];
			end--;
		}
		arr[end+1] = Insertnum;
	}
}
int main()
{
	int arr[1000] = { 0 };
	int N = 0;
	scanf("%d", &N);
	int i = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	Insertsort(arr, N);
	for (i = 0; i < N; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}