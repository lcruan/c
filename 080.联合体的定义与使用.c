#include <stdio.h>

union Number
{
	int i;
	float f;
	double d;
};

// 方式二：在定义的同时声明变量
union
{
	int i;
	float f;
	double d;
} num2;

int main(void)
{
	// 方式一：使用联合体标签
	union Number num1 = {42};
	union Number num3 = {.f = 3.14};
	
	// 使用点运算符访问成员
	num1.i = 50;
	printf("整数值：%d\n", num1.i);
	
	// 使用指针访问成员
	union Number *p = &num1;
	p->d = 2.71828;
	printf("双精度值：%1f\n", p->d);
	printf("整数值：%d\n", num1.i); // -1783957616
	printf("联合体大小：%d字节\n", sizeof(union Number)); // 8
	
	// 联合体数组
	union Number nums[10];
	nums[0].i = 42;
	nums[1].f = 3.14;
	nums[2].d = 8.76543;
	printf("nums[0].i = %d\n", nums[0].i);
	printf("nums[1].f = %f\n", nums[1].f);
	printf("nums[2].d = %lf\n", nums[2].d);
	
	return 0;
}