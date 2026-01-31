#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "application";
	char str2[] = "apply";
	
	int result1 = strcmp(str1, str2);
	int result2 = strncmp(str1, str2, 4);
	
	printf("完整比较 %s 和 %s ：%d\n", str1, str2, result1);
	printf("比较前4个字符 %s 和 %s ：%d\n", str1, str2, result2);
	
	return 0;
}