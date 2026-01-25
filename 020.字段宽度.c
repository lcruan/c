#include <stdio.h>


int main(void)
{
	int num = 123;
	char name[] = "张三";
	
	printf("没有宽度控制：\n");
	printf("%d\n", num);
	printf("%s\n", name);
	
	printf("\n有宽度控制（宽度为6）：\n");
	printf("%6d\n", num);
	printf("%06d\n", num);
	printf("%06s\n", name); // 一个汉字 两个字符
	
	printf("%-d\n", num); // 左对齐 加上负号
	
	return 0;
}