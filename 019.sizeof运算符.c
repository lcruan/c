#include <stdio.h>

int main(void)
{
	// 1. sizeof(类型名)：获取指定数据类型的大小
	printf("int类型占用内存大小为：%d\n", sizeof(int));
	printf("float类型占用内存大小为：%d\n", sizeof(float));
	
	// 2. sizeof 变量名 或 sizeof(变量名)：获取变量的大小
	char c = 'A';
	printf("变量c占用内存大小为：%d\n", sizeof(c + 1)); // 4，因为char类型参与计算 变成int类型了
	return 0;
}