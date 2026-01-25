#include <stdio.h>

// 需求：搜索数组某一个值，返回出来
// 在数组中查找指定值，返回指向该值的指针
int *find_value(int arr[], int size, int target)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == target)
		{
			printf("找到目标值 %d, 位置：%d\n", target, i);
			return &arr[i]; // 返回指向找到元素的指针
		}
	}
	printf("未找到目标值 %d\n", target);
	return NULL; // 未找到，返回空指针
}



int main(void)
{
	int array[] = { 5, 15, 25, 35, 45};
	int size = sizeof(array) / sizeof(array[0]);
	int *p = find_value(array, size, 3);
	if (p != NULL) // 找到值
	{
		printf("找到的值：%d, 地址：%p\n", *p, p);
		// 找到值，改变值
		*p = 11; // 修改找到的值
		// 打印修改后的数组的内容
		for (int i = 0; i < size; i++)
			printf("%d ", array[i]);
		printf("\n");
	}
	else 
	{
		printf("返回了空指针，表示未找到\n");
	}
	return 0;
}