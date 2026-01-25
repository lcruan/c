#include <stdio.h>

void print_binary(unsigned char num) {
	for (int i = 7; i >= 0; i--) {
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}

int main(void)
{
	unsigned char a = 5;
	
	unsigned char result = ~a;
	
	printf("a = %d, 二进制：", a);
	print_binary(a);
	
	printf("~a = %d, 二进制：", result);
	print_binary(result);
	
	return 0;
}