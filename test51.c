#include<stdio.h>
#include<windows.h>
int main()
{
	char arr[101] = { 0 };// '\0'ռһλ
	char * quan = "|/-\\";
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		arr[i] = '=';
		printf("[%c][%-100s][%d%%]\r", quan[i % 4], arr, i+1);
		Sleep(100);
	}
	printf("\n");
	return 0;
}