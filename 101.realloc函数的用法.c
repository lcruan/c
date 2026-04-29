#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 初始生成5个整数空间
	int *numbers = (int*)malloc(5 * sizeof(int));
	if (numbers == NULL)
	{
		printf("初始申请内存失败\n");
		return 1;
	}
	
	// 初始化内存
	for (int i = 0; i < 5; i++)
	{
		numbers[i] = i + 1;
	}
	
	// 拓展到10个整数空间
	int *new_numbers = (int*)realloc(numbers, 10 * sizeof(int));
	if (new_numbers == NULL)
	{
		printf("内存重新分配失败\n");
		free(numbers);
		return 2;
	}
	numbers = new_numbers;
	
	// 初始化新增的元素
	for(int i = 5; i < 10; i++)
	{
		numbers[i] = i + 1;
	}
	
	// 打印所有的元素
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	// 释放内存
	free(numbers);
	
	return 0;
}