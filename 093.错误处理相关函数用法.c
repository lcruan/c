#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	
	// 1. 演示perror和strerror: 模拟打开不存在的文件
	fp = fopen("nonexistent.txt", "r");
	if (fp == NULL)
	{
		printf("【场景1】文件打开失败示例：\n");
		perror("perror输出"); // perror输出: No such file or directory
	}
	
	fclose(fp);
	
	return 0;
}