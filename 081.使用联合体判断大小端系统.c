#include <stdio.h>

union EndianTest
{
	unsigned int value;
	unsigned char bytes[4];
};

int isLittleEndian()
{
	union EndianTest num;
	num.value = 0x01020304;
	
	// 如果是小端系统，bytes[0]将是最低有效字节0x04
	return (num.bytes[0] == 0x04);
}

void printBytes(unsigned char *bytes, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%02X ", bytes[i]);
	}
	printf("\n");
}
int main(void)
{
	printf("系统是%s端\n", isLittleEndian() ? "小" : "大");
	
	union EndianTest num;
	num.value = 0x01020304;
	
	printf("内存中的字节序列：");
	printBytes(num.bytes, 4);
	return 0;
}