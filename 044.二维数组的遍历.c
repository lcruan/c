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
	
	printf("按行遍历\n");
	
	int rows = 3, cols = 4;
	
	for(int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("matrix[%d][%d] = %d\t", i, j, matrix[i][j]);
		}
		printf("\n");
	}
	
	int sum = 0;
	for(int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += matrix[i][j];
		}
	}
	printf("所有元素的总和：%d\n", sum);
	
	return 0;
}