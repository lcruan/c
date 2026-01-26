#include <stdio.h>
#include <string.h>

int main(void)
{
	char source[] = "Hello World";
	char dest[50];
	
	strcpy(dest, source);
	
	printf("源字符串：%s\n", source);
	printf("目标字符串：%s\n", dest);
	
	dest[0] = 'h';
	printf("【修改后】源字符串：%s\n", source);
	printf("【修改后】目标字符串：%s\n", dest);
	
	return 0;
}