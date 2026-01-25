#include <stdio.h>


void print_matrix(int matrix[][4], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(void)
{
	int testMatrix[3][4] = {
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
	
	printf("原始矩阵：\n");
	for(int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d ", testMatrix[i][j]);
		printf("\n");
	}
	printf("\n");
	
	print_matrix(testMatrix, 3);
	return 0;
}