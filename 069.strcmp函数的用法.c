#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "apple";
	char str2[] = "apple";
	char str3[] = "banana";
	
	int result1 = strcmp(str1, str2);
	int result2 = strcmp(str1, str3);
	int result3 = strcmp(str3, str1);
	
	printf("比较 %s 和 %s ：%d\n", str1, str2, result1);
	printf("比较 %s 和 %s ：%d\n", str1, str3, result2);
	printf("比较 %s 和 %s ：%d\n", str3, str1, result3);
	return 0;
}