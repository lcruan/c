#include <stdio.h>

int main(void)
{
	int height = 100;
	int money = 1000;
	int handsome = 100;
	
	// 逻辑或 只要有一个为真 后面就不执行了
	// 逻辑与 如果第一个为假 后面就不执行了
	int marry = (height > 170) || (money++) || (handsome > 80);
	printf("是否可以结婚：%d, money = %d\n", marry, money);
	return 0;
}