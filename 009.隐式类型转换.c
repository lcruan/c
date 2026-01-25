#include <stdio.h>

int main(void) 
{
	char c = 'A';
	short s = 100;
	int i = 200;
	float f = 3.14f;
	double d = 2.718;
	
	// 1. char 和 int 类型运算, char自动转换成 int
	int result1 = c + i; // A(65) + 200 = 265
	printf("result1 = %d\n", result1);
	
	// 2. short 和 int 运算  --> int
	int result2 = s + i; // 100 + 200 = 300
	printf("result2 = %d\n", result2);
	
	// 3. int 和 float 运算 --> float
	float result3 = i + f;
	printf("result3 = %f\n", result3); // 200 + 3.14 = 203.14
	
	// 4. float 和 double运算 --> double
	double result4 = f + d; // 3.14 + 2.718 = 5.858
	printf("result4 = %f\n", result4);
	
	return 0;
}