#include <stdio.h>

int main(void)
{
	// 加法运算符
	int a1 = 10, b1 = 20;
	int result1 = a1 + b1;
	printf("result1的值为：%d\n", result1);
	
	char a2 = 127;
	char result2 = a2 + 1;
	printf("result2的值为：%d\n", result2); // -128 加法溢出问题
	
	// 减法运算符
	int a3 = 50, b3 = 20;
	int result3 = a3 - b3;
	printf("result3的值为：%d\n", result3);
	
	a3 = -a3;
	printf("a3的值为：%d\n", a3); // 减法负值
	
	char a4 = -128;
	char result4 = a4 - 1;
	printf("result4的值为：%d\n", result4); // 127 减法溢出
	
	
	
	// 乘法运算符
	int a5 = 10, b5 = 5;
	int result5 = a5 * b5;
	printf("result5的值为：%d\n", result5); 
	
	// 除法运算符
	int a6 = 7, b6 = 3;
	int result6 = a6 / b6;
	printf("result6的值为：%d\n", result6); // 2 数据截断，定义float可以解决
	
	
	float a7 = 7.0, b7 = 3.0;
	float result7 = a7 / b7;
	printf("result7的值为：%f\n", result7);
	
	// 取模运算符，取模操作符号与第一个一致
	int a8 = -7, b8 = -3;
	int result8 = a8 % b8;
	printf("result8的值为：%d\n", result8);
	return 0;
}