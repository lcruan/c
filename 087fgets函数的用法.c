#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char line[256]; // 定义一个缓存区
	int line_num = 1;
	fp = fopen("example.txt", "r");
	if (fp == NULL)
	{
		printf("无法打开文件\n");
		return 1;
	}
	
	printf("文件内容（按行读取）：");
	
	while(fgets(line, sizeof(line), fp) != NULL)
	{
		// 移除末尾的换行符
		int len = strlen(line);
		if (len > 0 && line[len-1] == '\n')
		{
			line[len - 1] = '\0';
		}
		printf("第%d行：%s\n", line_num, line);
		line_num++;
	}
	fclose(fp);
	
	return 0;
}