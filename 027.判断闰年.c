#include <stdio.h>

int main(void)
{
	int year;
	
	printf("请输入年份：");
	scanf("%d", &year);
	
	// 1. 能被4整除，且不能被100整除
	// 2. 或者能被400整除的是闰年
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
	{
		printf("%d年是闰年\n", year);
	}
	else 
	{
		printf("%d年不是闰年\n", year);
	}
	
	return 0;
}