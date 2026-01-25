#include <stdio.h>

int main(void)
{
	char ch;
	
	// printf("%c\n", ch);
	//	putchar(ch); // 只是显示，没有换行
	//	putchar('\n'); // 加上换行
	//	
	//	putchar('l');
	//	putchar('x');
	//	putchar('\n');
	
	ch = getchar();
	putchar(ch);
	putchar('\n');
	return 0;
}