#include <stdio.h>

int main(void)
{
	int age;
	float height;
	char grade;
	
	printf("请输入您的年龄：");
	scanf("%d", &age);
	
	printf("请输入您的身高：");
	scanf("%f", &height);
	
	getchar();
	
	printf("请输入您的等级：");
	scanf("%c", &grade);
	
	printf("\n您的信息：\n");
	printf("年龄：%d岁\n", age);
	printf("身高：%.1f厘米\n", height);
	printf("等级：%c\n", grade);
	return 0;
}