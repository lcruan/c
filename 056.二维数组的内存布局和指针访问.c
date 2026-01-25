#include <stdio.h>

int main(void)
{
	int matrix[3][4] = {
		{
			1, 2, 3, 4
		},
		{
			5, 6, 7, 8
		},
		{
			9, 10, 11, 12
		}
	};
	
	int rows = 3, cols = 4;
	
	// 理解二维数组的指针表示
	printf("matrix \t\t= \t%p\n", matrix); // 0465FDF8 数组名指向第一行
	printf("matrix[0] \t= \t%p\n", matrix[0]); // 0465FDF8 行指针  指向第0行的首地址
	printf("&matrix[0][0] \t= \t%p\n", &matrix[0][0]); // 0465FDF8 // 第一个元素的地址
	
	printf("各行的地址：\n");
	for(int i = 0; i < rows; i++)
	{
		printf("matrix[%d] = %p（第%d行的地址）\n", i, matrix[i], i);
		printf("matrix + %d = %p\n", i, matrix + i);
	}
	
	// 使用指针访问二维数组元素
	int row = 1, col = 2;
	printf("下标法：matrix[%d][%d] = %d\n", row, col, matrix[row][col]);
	printf("行指针偏移：*(matrix[%d] + %d) = %d\n", row, col, *(matrix[row] + col));
	printf("*((matrix + %d) + %d) = %d", row, col,  *(*(matrix + row) + col));
	
	return 0;
}