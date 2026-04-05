#include <stdio.h>

int main(void)
{
	FILE *fp; // 声明文件指针
	
	
	fp = fopen("demo.txt", "w"); // "w" 表示写入模式
	
	if(fp == NULL)
	{
		printf("无法创建文件！\n");
		return 1;
	}
	
	int num = 42;
	float pi = 3.14;
	char text[] = "Hello World!";
	
	fprintf(fp, "整数：%d\n", num);
	fprintf(fp, "浮点数：%.2f\n", pi);
	fprintf(fp, "字符串：%s\n", text);
	
	
	
	fclose(fp);
	printf("数据已写入demo.txt\n");
	
	return 0;
}