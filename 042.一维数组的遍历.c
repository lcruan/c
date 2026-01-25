#include <stdio.h>

int main(void)
{
	int numbers[8] = {12, 45, 23, 67, 34, 89, 56, 78};
	int length = 8;
	
	printf("数组中的所有元素：\n");
	for(int i = 0; i < length; i++)
	{
		printf("numbers[%d] = %d\n", i, numbers[i]);
	}
	
	printf("计算元素总和：\n");
	int sum = 0;
	for(int i = 0; i < length; i++)
	{
		sum += numbers[i];
	}
	printf("数组元素的总和：%d\n", sum);
	
	printf("查找数组中的最大值：\n");
	int max = numbers[0];
	for(int i = 0; i < length; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
	}
	printf("数组中的最大值为：%d\n", max);
	return 0;
}