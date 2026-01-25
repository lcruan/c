#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	
	int *ptr1 = &arr[0]; // 指向首元素
	int *ptr2 = &arr[2]; // 指向第三个元素
	int *ptr3 = &arr[2]; // 与ptr2指向相同位置
	int *null_ptr = NULL; // 空指针
	
	printf("1. 相等比较：\n");
	printf("ptr2 == ptr3?%s\n", ptr2 == ptr3 ? "是" : "否");
	
	printf("\n2. 不等比较：\n");
	printf("ptr1 != ptr2?%s\n", ptr1 != ptr2 ? "是" : "否");
	
	printf("\n3. 大小比较：\n");
	printf("ptr1 < ptr2?%s\n", ptr1 < ptr2 ? "是" : "否");
	printf("ptr1 > ptr2?%s\n", ptr1 > ptr2 ? "是" : "否");
	
	printf("\n4. 空指针比较：\n");
	printf("null_ptr == NULL?%s\n", null_ptr == NULL ? "是" : "否");
	printf("ptr1 == null_ptr?%s\n", ptr1 == null_ptr ? "是" : "否");
	
	return 0;
}