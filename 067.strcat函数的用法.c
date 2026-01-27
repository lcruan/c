#include <stdio.h>
#include <string.h>

int main(void)
{
	char greeting[50] = "Hello，";
	char name[] = "Alvin";
	
	printf("连接前：'%s'\n", greeting);
	
	strcat(greeting, name);
	
	printf("连接后：'%s'\n", greeting);
	printf("源字符串：'%s'\n", name);
	
	return 0;
}