#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[] = "张三"; // 字符数组
	char *message = "欢迎学习嵌入式！"; // 字符指针
	
	printf("姓名长度：%zu\n", strlen(name)); // 4 一个中文2个字符
	printf("消息长度：%zu\n", strlen(message)); // 中文！占用2个字符，英文!占用1个字符
	printf("常量长度：%zu\n", strlen("Hello"));
	
	return 0;
}