#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *numbers = (int *)calloc(5, sizeof(int));
	if(numbers == NULL)
	{
		printf("内存申请失败\n");
		return 1;
	}
	
	// 因为calloc已经将内存初始化为0
	// 直接打印数组内容
	printf("初始值为：");
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	// 使用内存
	for (int i = 0; i < 5; i++)
	{
		numbers[i] = (i + 1) * 10;
	}
	
	// 修改后
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	// 释放内存
	free(numbers);
	return 0;
}