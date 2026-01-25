#include <stdio.h>

int main(void)
{
	int age;
	printf("请输入您的年龄：");
	scanf("%d", &age);
	
	if (age > 18)
		printf("您是成年人\n");	
	else 
		printf("您是未成年人\n");
	return 0;
}