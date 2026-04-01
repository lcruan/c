#include <stdio.h>

int main(void)
{
	FILE *fp;
	char message[] = "Hello, World!";
	
	fp = fopen("output.txt", "w");
	if (fp == NULL) {
		printf("无法创建文件\n");
		return 1;
	}
	
	// 逐个字符写入文件
	for(int i = 0; message[i] != '\0'; i++)
	{
		if(fputc(message[i], fp) == EOF) 
		{
			printf("写入字符时发生错误\n");
			fclose(fp);
			return 1;
		}
	}
	
	fputc('\n', fp);
	
	fclose(fp);
	printf("字符已成功写入文件\n");
	
	return 0;
}