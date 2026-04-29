#include <stdio.h>
#include <stdlib.h>

// 创建二维动态数组（指针数组方式）
int **create_2d_array_v1(int rows, int cols)
{
	// 申请行指针数组
	int **arr = (int **)malloc(rows * sizeof(int *));
	if (arr == NULL)
		return NULL;
		
	// 为每行分配内存
	for(int i = 0; i < rows; i++)
	{
		arr[i] = (int *)malloc(cols * sizeof(int));
		if (arr[i] == NULL)
		{
			// 释放已分配的内存
			for (int j = 0; j < i; j++)
				free(arr[j]);
				
			free(arr);
			return NULL;
		}
	}
	return arr;
}

// 释放二维数组（指针数组方式）
void free_2d_array_v1(int **arr, int rows)
{
	if (arr != NULL)
	{
		for(int i = 0; i < rows; i++)
			free(arr[i]);
			
		free(arr);
	}
}

// 创建二维动态数组（连续存储方式）
int **create_2d_array_v2(int rows, int cols)
{
	// 申请行指针数组
	int **arr = (int **)malloc(rows * cols * sizeof(int));
	if (arr == NULL)
		return NULL;
		
	// 分配实际数据存储空间
	int *data = (int *)malloc(rows * cols * sizeof(int));
	if (data == NULL)
	{
		free(arr);
		return NULL;
	}
	
	// 设置行指针
	for (int i = 0; i < rows; i++)
	{
		// 索引*列数
		arr[i] = &data[i * cols];
	}
	return arr;
}

// 释放二维动态数组（连续内存方式）
void free_2d_array_v2(int **arr)
{
	if (arr != NULL)
	{
		free(arr[0]);
		free(arr);
	}
}

int main(void)
{
	int **array = create_2d_array_v2(3, 4);
	array[0][0] = 1;
	array[2][3] = 3;
	printf("array[0][0] = %d, array[2][3] = %d\n", array[0][0], array[2][3]);
//	free_2d_array_v1(array, 3);
	free_2d_array_v2(array);
	
	return 0;
}