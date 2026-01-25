#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	
	// 基本用法：找出两个数中的较大值
	int max = (a > b) ? a : b;
	printf("a = %d, b = %d\n", a, b);
	printf("较大值：%d\n", max);
	
	// 直接在printf中使用
	printf("a %s b\n", (a > b) ? "大于": "小于或等于");
	
	return 0;
}