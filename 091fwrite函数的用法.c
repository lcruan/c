#include <stdio.h>

int main(void)
{
	
	FILE *fp;
	int numbers[] = {10, 20, 30, 40, 50};
	int count = sizeof(numbers)/sizeof(numbers[0]);
	fp = fopen("numbers.bin", "wb");
	if (fp == NULL)
	{
		printf("无法创建二进制文件\n");
		return 1;
	}
	
	size_t written = fwrite(numbers, sizeof(int), count, fp);
	if (written == count)
		printf("成功写入%d个整数到二进制文件\n", (int)written);
	else
		printf("写入失败，只写入了%d个整数\n", (int)written);
	fclose(fp);
	
	return 0;
}