#include <stdio.h>

int main(void)
{
	int a = 15, b = 10;
	
	int result1 = a > b;
	int result2 = b > a;
	int result3 = a == 15;
	
	printf("result1的值为：%d\n", result1); // 1
	printf("result2的值为：%d\n", result2); // 0
	printf("result3的值为：%d\n", result3); // 1
	
	return 0;
}