#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	
	srand(time(NULL)); // 使用当前的时间作为种子
	int num = rand() % 5;
	printf("随机数：%d\n", num);
	
	return 0;
}