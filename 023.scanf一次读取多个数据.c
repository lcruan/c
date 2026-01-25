#include <stdio.h>

int main(void)
{
	int year, month, day;
	
	int count;
	
	count = scanf("%d %d %d", &year, &month, &day); // 同时接收多个数据 用空格隔开，不加空格也可以
	printf("成功接收了%d个数据\n", count);
	printf("今天是：%d-%d-%d\n", year, month, day);
	
	return 0;
}