#include <stdio.h>

int main(void)
{
	int outer_var = 100; // 外层变量
	
	printf("外层变量：%d\n", outer_var);
	
	{
		int inner_var = 200; // 内层变量
		printf("内层变量：%d\n", inner_var);
		printf("在内层访问变量：%d\n", outer_var);
		
		{
			int deep_var = 300;
			printf("深层变量：%d\n", deep_var);
			printf("在深层访问变量inner_var：%d\n", inner_var);
			printf("在深层访问变量outer_var：%d\n", outer_var);
		}
		// printf("在内层访问深层变量deep_var：%d\n", deep_var); // 报错
		
	}
	
	// printf("内层变量inner_var：%d\n", inner_var);
	printf("在外层访问变量outer_var：%d\n", outer_var);
	
	return 0;
}