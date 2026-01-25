#include <stdio.h>

int arraySum(int arr[], int size)
{
	// 停止条件: 数组为空，和为0
	if (size == 0)
	{
		printf("停止条件：空数组，返回0\n");
		return 0;
	}
	
	// 递归情况：第一个元素加上其余元素的和
	printf("计算：%d + arraySum(剩余%d个元素)\n", arr[0], size -1);
	return arr[0] + arraySum(arr + 1, size -1); // arr + 1地址位置往后偏移1位
}

int main(void)
{
	int numbers[] = {1, 2, 3, 4, 5};
	int sum = arraySum(numbers, 5);
	printf("结果：%d\n", sum);
	return 0;
}