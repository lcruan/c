#include <stdio.h>

int main(void)
{
	int choice;
	
	do
	{
		printf("\n---- 计算器菜单 ---\n");
		printf("1. 加法\n2. 减法\n3. 乘法\n4. 除法\n0. 退出\n");
		printf("请选择操作：");
		scanf("%d", &choice);
		if (choice >= 1 && choice <=4) 
			printf("执行操作...");
	} while(choice != 0);
	
	printf("程序已退出！\n");
	
	return 0;
}