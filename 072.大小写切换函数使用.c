#include <stdio.h>
#include <ctype.h>

// 字符翻转
void toggle_case(char *str)
{
	for(int i = 0; i < str[i] != '\0'; i++)
	{
		if (isupper(str[i])) //当前字符是大写，调用tolower转成小写
			str[i] = tolower(str[i]);
		else if (islower(str[i]))
			str[i] = toupper(str[i]);
	}
}

int main(void)
{
	char text[] = "Hello World 123!";
	
	printf("原始文本：%s\n", text);
	toggle_case(text);
	printf("转换后的文本：%s\n", text);
	
	return 0;
}