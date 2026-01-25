#include <stdio.h>

unsigned long long factorial(int n)
{
	// 基本情况：0! = 1, 1! = 1
	if (n == 0 || n == 1)
	{
		return 1;
	}
	// 递归情况：n! = n * (n - 1)!
	return n * factorial(n - 1);
}

int main(void)
{
	int num;
	printf("请输入一个非负整数：");
	scanf("%d", &num);
	
	unsigned long long result = factorial(num);
	printf("%d! = %llu\n", num, result);
	return 0;
}