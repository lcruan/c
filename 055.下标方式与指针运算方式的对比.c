#include <stdio.h>

int main(void)
{
	double scores[] = {85.5, 92.3, 78.9, 96.1, 88.7, 91.2};
	int size = sizeof(scores)/sizeof(scores[0]);
	double *p = scores;
	
	printf("方式1：传统下标访问\n");
	for(int i = 0; i < size; i++)
		printf("scores[%d] = %.1f\n", i, scores[i]);
	printf("\n");
	
	printf("方式2：使用数组名方式访问\n");
	for(int i = 0; i < size; i++)
	{
		printf("*(scores + %d) = %.1f\n", i, *(scores + i));
	}
	printf("\n");
	
	printf("方式3：使用指针变量方式访问\n");
	for(int i = 0; i < size; i++)
	{
//		printf("*(p + %d) = %.1f\n", i, *(p + i));
		printf("p[%d] = %.1f\n", i, p[i]);
	}
	printf("\n");
	
	printf("方式4：使用移动指针方式访问\n");
	double *q = scores;
	for(int i = 0; i < size; i++)
	{
		printf("第%d个元素：%.1f\n", i, *q);
		q++; // 移动指针位置
	}
	printf("\n");
	
	return 0;
}