#include <stdio.h>

int main(void)
{
	FILE *fp;
	int numbers[10];
	
	fp = fopen("numbers.bin", "rb");
	if (fp == NULL)
	{
		printf("无法打开二进制文件\n");
		return 1;
	}
	
	size_t read_count = fread(numbers, sizeof(int), 10, fp);
	printf("成功读取%d个整数：\n", (int)read_count);
	for(int i = 0; i < read_count; i++)
	{
		printf("numbers[%d] = %d\n", i, numbers[i]);
	}
	fclose(fp);
	
	
	return 0;
}