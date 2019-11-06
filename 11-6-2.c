#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


int main()
{
	int total = 0;  // 总共喝汽水数
	int money = 20; // 手里的钱
	int empty = 0;  // 空瓶子的数量
	scanf("%d", &money);

	// 开始买汽水
	total = money; // 喝
	empty = money;
	while (empty > 1)
	{
		// 换汽水 + 喝
		total += empty / 2;
		// 计算剩下的空瓶子数量
		empty = empty / 2 + empty % 2;
	}

	printf("喝的汽水数量：%d\n", total);

	return 0;
}