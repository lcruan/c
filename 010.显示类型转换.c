#include <stdio.h>

int main(void)
{
	int a = 17, b = 5;
	
	int int_result = a / b; // 3.4
	printf("整数除法，结果为：%d\n", int_result); // 3 
	
	// 强制转换为浮点数 转换 a
	float float_result = (float)a / b; // 这是将a转换为浮点类型
	printf("浮点除法，结果为：%f\n", float_result);
	
	// 强制转换为浮点数 转换 b
	float float_result2 = a / (float)b;
	printf("浮点除法，结果为：%f\n", float_result2);
	
	// 两个操作数都转换
	double double_result = (double)a / (double)b;
	printf("双精度除法，结果为：%f\n", double_result);
	return 0;
}