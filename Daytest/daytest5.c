
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int col = 2 * n;
		vector<int> old(col, 0);
		vector<int> neww(col, 0);//只需要根据上面一行的信息，所以可以利用滚动数组来保存信息
		old[0] = 0, old[1] = 1;
		neww[0] = 0; neww[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			for (int j = 2; j < i * 2; j++)
			{
				neww[j] = old[j] + old[j - 1] + old[j - 2];
			}
			old = neww;
		}
		int flag = 0;
		for (int i = 0; i < col; i++)
		{
			if (neww[i] % 2 == 0 && neww[i] != 0)
			{
				cout << i << endl;
				flag = 1;
				break;
			}	
		}
		if (flag==0)
			cout << -1 << endl;
	}
	return 0;
}