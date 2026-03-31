#include <stdio.h>

int main(void)
{
	// 定义文件指针
	FILE *fp;
	int ch;
	
	fp = fopen("example.txt", "r");
	if (fp == NULL)
	{
		printf("无法打开文件\n");
		return 1;
	}
	
	printf("文件内容（逐字符读取）：");
	
	while((ch = fgetc(fp)) != EOF)
	{
		putchar(ch); // 把数据显示到屏幕, 一个字符一个字符的显示
	}
	
	fclose(fp);
	
	return 0;
}