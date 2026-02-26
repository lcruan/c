#include <stdio.h>

// 1. 为基本类型创建别名
typedef int Length;
typedef float Terperature;
typedef double Price;

// 2. 为数组类型创建别名
typedef int IntArray[10];

// 3. 为指针类型创建别名
typedef int * IntPtr;

// 4. 为结构体 联合体和枚举类型创建别名
typedef struct
{
	int x;
	int y;
} Point;

typedef union
{
	int i;
	float f;
} Number;

typedef enum
{
	MALE,
	FEMALE	
} Gender;

// 5. 为函数指针创建别名
typedef int (*Fun)(int, int);
int add(int a, int b){return a + b;}
int sum(int a, int b){return a - b;}
int mul(int a, int b){return a * b;}
int div(int a, int b){return a / b;}

int main(void)
{
	Length width = 10; // 等价于 int width = 10;
	Terperature celsius = 25.5; // 等价于 float celsius = 25.5;
	
	IntArray scores; // 等价于 int scores[10];
	IntArray classA;
	IntArray classB;
	
	IntPtr p1, p2; // 等价于 int *p1, *p2;
	
	Point point1 = { 10, 20};
	point1.x = 30;
	
	Number num;
	num.i = 42;
	
	Gender person = MALE;
	
	// 声明函数指针变量
	Fun operation;
	operation = add;
	printf("10 + 5 = %d\n", operation(10, 5));
	
	operation = mul;
	printf("10 * 5 = %d\n", operation(10, 5));
	
	return 0;
}