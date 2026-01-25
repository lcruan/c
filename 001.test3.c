#include <stdio.h>

int main() {
	// 测试无符号
	// signed既可以表示正数，也可以表示负数
	// unsigned 表示无符号
	// int a = -10; // signed int a = 10;
	// printf("hello world\n");
	
	// printf("a = %d\n", a);
	
	
	// 测试float 丢失精度
	float a = 0.1f;
	float b = 0.2f;
	float sum = a + b;
	// .10表示 小数点后面有10个有效数字，若不加默认6位有效数字
	printf("sum = %.10f\n", sum); // sum = 0.3000000119
	
	// 测试double和float 精度
	float f = 1.0f/3.0f;
	double d = 1.0/3.0;
	printf("float: %.10f\n", f); // float: 0.3333333433  多了一个4 证明精度是不够的
	printf("double: %.16f\n", d); // double: 0.3333333333333333
	
	char ch1 = 'A'; // 字符形式
	char ch2 = 65; // 数字形式
	printf("%c\n", ch1); // A
	printf("%c\n", ch2);
	printf("%d\n", ch1);
	
	return 0;
}