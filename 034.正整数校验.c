#include <stdio.h>

int main(void)
{
	int number;
	
	do
	{
		// 让用户输入一个正整数
		printf("请输入一个正整数：");
		scanf("%d", &number);
		// 判断输入的是否是正整数
		if (number <= 0)
		{
			printf("输入无效！请重新输入。\n");
		}
			
	} while(number <= 0);
	
	printf("您输入的有效数字是：%d\n", number);
	
	return 0;
}