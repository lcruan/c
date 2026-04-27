#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int main(void)
{
	int x = 10, y = 5;
	
	printf("%d + %d = %d\n", x, y, add(x, y));
	printf("%d - %d = %d\n", x, y, subtract(x, y));
	
	return 0;
}