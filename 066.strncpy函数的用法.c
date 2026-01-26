#include <stdio.h>
#include <string.h>

int main(void)
{
	char source[] = "Hello World";
	char dest[10];
	
	strncpy(dest, source, sizeof(dest) - 1);
	dest[sizeof(dest) - 1] = '\0'; // 确保以\0结尾
	
	printf("源字符串：%s\n", source);
	printf("目标字符串：%s\n", dest);
	
	
	return 0;
}