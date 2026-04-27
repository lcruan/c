#include <stdio.h>

// 带参数宏定义：计算平方 - 正确写法
#define SQUARE(x) ((x) * (x))

// 错误写法
//#define SQUARE(x) x * x

int main(void)
{
	
	int num = 5;
	int result = SQUARE(num + 1);
	printf("(%d + 1)^2 = %d\n", num, result);
	
	return 0;
}