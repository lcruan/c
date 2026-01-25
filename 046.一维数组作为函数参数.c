#include <stdio.h>

// 打印数组每个元素的值
void print_array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	printf("\n");
}

int main(void)
{
	int numbers[] = {1, 2, 3, 4, 5};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	
	printf("数组大小：%d\n", size);
	printf("原始数组\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	print_array(numbers, size);
	
	return 0;
}