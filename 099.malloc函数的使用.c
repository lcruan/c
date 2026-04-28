#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *numbers = (int *)malloc(10 * sizeof(int));
	if(numbers == NULL)
	{
		printf("内存分配失败\n");
		return 1;
	}
	
	// 使用分配的内存
	for(int i = 0; i < 10; i++)
	{
		numbers[i] = i * 2;
	}
	
	// 打印数组内容
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	// 释放内存
	free(numbers);
	
	return 0;
}