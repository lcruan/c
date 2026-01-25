#include <stdio.h>

int main(void)
{
	int age;
	
	// 提示用户输入年龄
	printf("请输入您的年龄：");
	scanf("%d", &age);
	// 如果年龄大于18岁
	if (age >= 18) 
	{
		// 则输出成年信息
		printf("您已经成年了！\n");
		printf("您可以参与投票\n");
	}
	
	printf("程序继续执行...\n");
	return 0;
}