#include <stdio.h>

// 水仙花数
// 153 = 1^3 + 5^3 + 3^3
// 100~999之间的所有水仙花数
int main(void)
{
	for (int num = 100; num < 1000; num++)
	{
		int a = num / 100; // 百位数 153/100=1...53
		int b = (num % 100) / 10; // 十位数
		int c = num % 10; // 个位数
		
		if (a*a*a + b*b*b + c*c*c == num)
		{
			printf("%d\n", num);
		}
	}
	return 0;
}