#include <stdio.h>

int main(void)
{
	// 字符数组表示字符串
	char str1[20] = { 'H', 'e', 'l', 'l', 'o', '\0'}; // \0可写可不写
	char str2[] = "Hello"; // 定义字符串常量，在内存开辟空间 长度根据字符串大小自动计算
	
	str2[0] = 'h'; // 修改字符数组某一个元素
	
	printf("str1：%s\n", str1);
	printf("str2: %s\n", str2);  
	
	// 字符指针表示字符串
	char *p = "Hello world"; // 字符串常量 存放在只读数据区
	p = "test";
	p = str1;
//	p[0] = 'L'; // 不能修改常量字符串
	printf("p: %s\n", p);
	                         
	return 0;
}