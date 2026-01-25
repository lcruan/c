#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("初始值：a = %d\n", a);
	
	// 加法赋值 +=
	a += 5; // a = a + 5;
	printf("a += 5 后：a = %d\n", a);
	
	return 0;
}