#include <stdio.h>

void print_binary(unsigned char num) {
	for (int i = 7; i >= 0; i--) {
		printf("%d", (num >> i) && 1);
	}
}

int main(void)
{
	unsigned char a = 5;
	
	printf("原始值：%d, 二进制：", a);
	print_binary(a);
	printf("\n");
	
	unsigned char result = a << 1;
	printf("左移1位：%d, 二进制：", result);
	print_binary(result);
	printf("，相当于乘以2^1 = %d\n", 1 << 1);
	
	result = a << 2;
	printf("左移2位：%d, 二进制：", result);
	print_binary(result);
	printf("，相当于乘以2^2 = %d\n", 1 << 2);
	
	result = a << 3;
	printf("左移3位：%d, 二进制：", result);
	print_binary(result);
	printf("，相当于乘以2^3 = %d\n", 1 << 3);
	
	return 0;
}