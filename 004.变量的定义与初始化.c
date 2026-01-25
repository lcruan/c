#include <stdio.h>

// 定义一个全局变量，没有赋初始值
int global_int; // 全局变量会自动初始化为0
// 变量一定要先定义再使用
int main(void)
{
	// 定义一个变量
	int age;
	int x, y, z; // 同时定义多个变量
	int count = 30; // 定义并初始化变量
	float a = 1.0f, b = 2.0f, c = 3.0f; // 多个变量同时初始化
	
	// 为变量赋值
	age = 25;
	x = 10;
	x = 11;
	x = 12;
	y = 20;
	y = age;
	z = 30;
	z = x + y;
	
	// 输出变量的值
	printf("年龄：%d\n", age);
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	printf("学生数量：%d\n", count);
	printf("a = %f, b = %f, c = %f\n", a, b, c);
	printf("global_int = %d\n", global_int); // 0
	return 0;
}