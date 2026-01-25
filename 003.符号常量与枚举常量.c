#include <stdio.h>

// #define PI 3.14

enum gender {
	MALE = 10,
	FEMALE
};

int main(void)
{

	const double PI = 3.14;
	double radius = 5.0;
	double area = PI * radius * radius;
	printf("圆的面积为：%.2f\n", area); // %.2f 表示小数点以后两位数
	
	printf("MALE的值为: %d\n", MALE); // 10	
	printf("FEMALE的值为: %d\n", FEMALE); // 11	
	return 0;
}