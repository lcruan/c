#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char buffer[100];
	
	// 1. 演示perror和strerror: 模拟打开不存在的文件
	fp = fopen("nonexistent.txt", "r");
	if (fp == NULL)
	{
		printf("【场景1】文件打开失败示例：\n");
		perror("perror输出"); // perror输出: No such file or directory
		// 直接返回错误描述的字符串
		printf("strerror输出：%s\n", strerror(errno)); // strerror输出：No such file or directory
	}
	printf("\n");
	
	// 2. 演示feof: 正常读取到文件末尾
	fp= fopen("demo.txt", "w+"); // 创建临时文件
	if (fp == NULL)
	{
		perror("创建文件失败");
		return 1;
	}
	fputs("Hello World\n", fp);
	fputs("have a nice day", fp);
	
	rewind(fp); // 写入结束后，指针回到文件开头
	printf("【场景2】正常读取文件：\n");
	while(1)
	{
		if(fgets(buffer, sizeof(buffer), fp) == NULL)
		{
			if (feof(fp)) // 如果到达文件末尾，逐个feof(fp)返回非0 
			{
				printf("\nfeof：已经到达文件末尾\n");
			}
			break;
		}
		
		printf("读取内容：%s", buffer);
	}
	
	fclose(fp);
	
	return 0;
}