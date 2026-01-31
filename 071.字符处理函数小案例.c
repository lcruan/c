#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[] = "Hello C! 123 &*#测试";
	int i = 0;
	
	printf("字符分析结果：\n");
	while(str[i])
	{
		char c = str[i];
		printf("字符 %c：", c);
		
		// 依次检测字符类型并输出结果
		if (isalpha(c)) printf("字母 | "); // 检查是否为字母
		if (isupper(c)) printf("大写 | "); // 检查是否为大写字母
		if (islower(c)) printf("小写 | "); // 检查是否为小写字母
		if (isdigit(c)) printf("数字 | "); // 检查是否为数字
		if (isalnum(c)) printf("字母或数字 | "); // 检查是否为字母或数字
		if (isspace(c)) printf("空白 | "); // 检查是否为空白字符
		if (ispunct(c)) printf("标点 | "); // 检查是否为标点符号
		if (isprint(c)) printf("可打印 | "); // 检查是否为可打印字符
		if (!isprint(c)) printf("不可打印 | "); // 检查是否为不可打印
		
		printf("\n");
		i++;
	}
	return 0;
}