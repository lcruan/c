#include <stdio.h>

int main(void)
{
	int x = 10, y = 10;
	printf("初始值为：x = %d, y = %d\n", x, y);
	
	// 前置自增
	int result1 = ++x;
	// x = x + 1;
	// result1 = x;
	printf("++x后：x = %d，result1 = %d\n", x, result1);
	
	// 后置自增
	int result2 = y++;
	// result2 = y; // y 先赋值
	// y = y + 1; // y再加一
	printf("y++后：y = %d, result2 = %d\n", y, result2);
	return 0;
}