#include <stdio.h>

int main(void)
{
	FILE *fp;
	char *lines[] = {
		"这是第一行内容\n",
		"这是第二行内容\n",
		"这是第三行内容\n",
		"这是最后一行内容\n"
	};
	int num_lines = sizeof(lines)/sizeof(lines[0]);
	
	fp = fopen("./output_lines.txt", "w");
	if(fp == NULL)
	{
		printf("无法创建文件\n");
		return 1;
	}
	
	printf("正在写入字符串到文件...\n");
	for(int i = 0; i < num_lines; i++)
	{
		
		if(fputs(lines[i], fp) == EOF)
		{
			printf("写入第%d行时发生错误\n", i + 1);
			fclose(fp);
			return 1;
		}
		
	}
	fclose(fp);
	printf("字符串写入完成！\n");
	
	return 0;
}