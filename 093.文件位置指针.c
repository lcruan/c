#include <stdio.h>

int main(void)
{
	
	FILE *fp = fopen("demo.txt", "w+");
	if (fp == NULL)
	{
		printf("文件创建失败");
		return 1;
	}
	
	// 写入数据
	fprintf(fp, "HelloWorld") ;
	printf("写入内容：HelloWorld\n\n");
	
	// 1. ftell获取当前指针位置
	long pos = ftell(fp);
	printf("写入后指针位置：%ld（指向文件末尾\n）", pos);
	
	// 2. rewind重置指针到文件开头
	rewind(fp);
	printf("rewind后指针位置：%ld（指向文件开头\n）", ftell(fp));
	
	// 读取第一个字符
	char ch = fgetc(fp);
	printf("读取第一个字符：%c\n", ch); // H
	
	// 3. fseek移动指针到指定位置
	fseek(fp, 5L, SEEK_SET); // 从开头向后偏移5字节
	printf("fseek(fp, 5L, SEEK_SET)后指针位置：%ld\n", ftell(fp));
	
	// 读取当前位置字符
	ch = fgetc(fp);
	printf("读取第6个字符：%c\n", ch);
	
	// 4. fseek从当前位置反向偏移
	fseek(fp, -3L, SEEK_CUR); // 从当前位置向前偏移3个字节
	printf("fseek(fp, -3L, SEEK_CUR)后指针位置：%ld\n", ftell(fp));
	
	// 读取验证
	ch = fgetc(fp);
	printf("读取第6个字符：%c\n", ch);
	
	return 0;
}