#include <stdio.h>

int add(int a, int b);
void greeting(void);
float average(float x, float y);

int main(void)
{
	int sum = add(5, 3);
	printf("5 + 3 = %d\n", sum);
	
	greeting();
	
	printf("平均值：%.2f\n", average(85.5, 92.3));
	
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

void greeting(void)
{
	printf("你好，世界！\n");
}

float average(float x, float y)
{
	return (x + y) / 2.0;
}