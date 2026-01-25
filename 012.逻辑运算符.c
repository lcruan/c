#include <stdio.h>

int main(void)
{
	int height = 200;
	int money = 100000000;
	int handsome = 100;
	
	int marry = (height > 170) && (money > 10000) && (handsome > 80);
	printf("是否可以结婚：%d\n", marry);
	
	
	return 0;
}