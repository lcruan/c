#include <stdio.h>

int a = 10; // 全局变量

void fun1(void) 
{
	a = 40;
	printf("fun1函数里修改a的值为：%d\n", a);
}

void fun(void)
{
	a = 30;
	printf("fun函数里修改a的值为：%d\n", a);
}

int main(void)
{
	printf("main函数里读取a的值为：%d\n", a);
	a = 20;
	printf("main函数里修改a的值为：%d\n", a);
	
	{
		int a = 50;
		printf("局部变量a的值为：%d\n", a);
	}
	
	printf("回到main函数变量a的值为：%d\n", a); // 20
	
	fun();
	fun1();
	
	return 0;
}