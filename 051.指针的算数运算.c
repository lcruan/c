#include <stdio.h>

int main(void)
{
	int arr[] = {10, 20, 30, 40, 50};
	int *ptr = arr; // 指针指向数组首地址
	
	// 1. 指针与整数加法：访问偏移元素
	printf("1. 指针加法：\n");
	printf("*(ptr + 3) = %d\n", *(ptr + 3)); // 40
	
	// 2. 指针自增：移动指针位置
	printf("\n2. 指针自增：\n");
	ptr++;
	printf("ptr++ -> *ptr = %d\n",*ptr); // 20
	
	// 3. 指针与整数的减法：回退指针位置
	printf("\n3. 指针减法：\n");
	ptr--;
	printf("ptr-- -> *ptr = %d\n", *ptr); // 10
	
	// 4. 指针相减：计算元素距离
	printf("\n4. 指针相减：\n");
	int *ptr_end = &arr[4]; // 指向最后一个元素
	printf("元素的距离：ptr_end - ptr = %d\n", ptr_end - ptr); // 4
	
	// 5. 指针比较：判断相对位置
	printf("\n5. 指针比较：\n");
	printf("ptr_end > ptr ?%s\n", ptr_end > ptr ? "是" : "否");
	
	
	return 0;
}