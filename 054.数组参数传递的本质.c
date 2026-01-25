#include <stdio.h>

// 接收数组作为参数的函数
void process1(int arr[], int size)
{
	printf("sizeof(arr) = %d\n", sizeof(arr));
	// arr实际上是指针
	
	for(int i = 0; i < size; i++)
		arr[i] *= 2; // 每个元素乘以2
}
// 接收指针作为参数的函数
void process2(int *arr, int size)
{
	for(int i = 0; i < size; i++)
		*(arr + i) += 10;
}

int main(void)
{
	int data[] = {1, 2, 3, 4, 5};
	int size = sizeof(data)/sizeof(data[0]);
	process1(data, size);
	printf("\n调用process1后的数组：");
	for (int i = 0; i < size; i++) printf("%d ", data[i]);
	printf("\n\n");
	
	process2(data, size);
	printf("\n调用process2后的数组：");
	for(int i = 0; i < size; i++)
		printf("%d ", data[i]);
	printf("\n\n");
	
	return 0;
}