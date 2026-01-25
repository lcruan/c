#include <stdio.h>

int main(void)
{
	double pi = 3.141592653;
	double large_num = 123456.789;
	char name[] = "山上村中井上桥边太郎";
	
	// 没有进行精度控制
	printf("pi = %f\n", pi);
	// 显示3位
	printf("pi = %.3f\n", pi); // 3.142 有四舍五入
	printf("pi = %06.3f\n", pi); // 03.142 长度为6，3位有效数字  
	printf("large_num = %e\n", large_num); // 1.234568e+005
	printf("large_num = %.4e\n", large_num); // 4位有效数字 1.2346e+005
	
	printf("name = %.10s\n", name); // 10个字符 = 5个汉字
	
	
	
	return 0;
}