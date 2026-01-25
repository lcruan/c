#include <stdio.h>

int main(void)
{
	float data[3][4] = {
		{
			1.1f, 2.2f, 3.3f, 4.4f
		},
		{
			5.5f, 6.6f, 7.7f, 8.8f
		},
		{
			9.9f, 10.0f, 11.1f, 12.2f
		}
	};
	
	int rows = 3, cols = 4;
	printf("方式1：行指针遍历\n");
	for(int i = 0; i < rows; i++)
	{
		float *p = data[i]; // 定义了一个行指针，指向第i行
		printf("第%d行：", i + 1);
		for (int j = 0; j < cols; j++)
		{
			printf("%5.1f ", *(p + j));
		}
		printf("\n");
	}
	printf("\n");
	
	printf("方式2：线性指针遍历\n");
	float *p = data;
	for (int i = 0; i < rows * cols; i++)
	{
		printf("%5.1f ", *(p + i));
		if ((i + 1) % cols == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	
	printf("方式3：双重指针运算遍历\n");
	for(int i = 0; i < rows; i++)
	{
		printf("第%d行：", i + 1);
		for(int j = 0; j < cols; j++)
		{
			printf("%5.1f ", *(*(data + i) + j));
		}
		printf("\n");
	}
	printf("\n");
	
	printf("方式4： 移动指针遍历\n");
	float *movingPtr = (float *)data;
	float *endPtr = (float *)data + rows * cols;
	int count = 0;
	
	while(movingPtr < endPtr)
	{
		printf("%5.1f ", *movingPtr);
		movingPtr++;
		count++;
		if (count % cols == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	
	return 0;
}