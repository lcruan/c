#include <stdio.h>

int main(void)
{
	int numbers[] = {10, 20, 30, 40, 50}; // 数组numbers是常量指针
	int *p = &numbers[0]; // p不是常量指针，是变量
	printf("数组名nubmers的值：\t%p\n", numbers);
	printf("首元素地址&numbers[0]:\t%p\n", &numbers[0]);
	
	printf("numbers指向的值：\t%d\n", *numbers);
	// numbers++; 不能这么写，因为指向的是常量指针，不能修改 numbers++与numbers = numbers + 1相等
	printf("numbers+1指向的值：\t%d\n", *(numbers+1));
	printf("numbers+2指向的值：\t%d\n", *(numbers+2));
	
//	printf("p指向的值：\t%d\n", *p);
//	printf("p+1指向的值：\t%d\n", *(p + 1));
//	printf("p+2指向的值：\t%d\n", *(p + 2));
	
	printf("p指向的值：\t%d\n", p[0]);
	printf("p+1指向的值：\t%d\n", p[1]);
	printf("p+2指向的值：\t%d\n", p[2]);
	
	return 0;
}