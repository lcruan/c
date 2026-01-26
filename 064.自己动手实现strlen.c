#include <stdio.h>

size_t my_strlen(const char *str)
{
	size_t length = 0;
	
	// 从字符串开头 开始遍历
	// 不知道有多少个字符，用一般用while
	while(str[length] != '\0')
	{
		length++;  // 每遇到一个非结束字符，长度加1
	}
	
	return length;
}

int main(void)
{
	char name[] = "张三";
	char *message = "欢迎学习嵌入式！";
	
	printf("姓名长度：%zu\n", my_strlen(name));
	printf("消息长度：%zu\n", my_strlen(message));
	printf("常量长度：%zu\n", my_strlen("Hello"));
	
	return 0;
}