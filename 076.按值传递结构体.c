#include <stdio.h>

struct Rectangle
{
	float length;
	float width;	
};

// 按值传递结构体-拷贝的原来的值，修改后不影响原来的值
float calArea(struct Rectangle rect)
{
	// 计算矩形的面积
	float area = rect.length * rect.width;
	
	// 修改参数 查看有没有影响原来的长和宽
	rect.length = 0;
	rect.width = 0;
	
	return area;
}


int main(void)
{
	struct Rectangle myRect = {
		5.0, 3.0
	};
	printf("矩形尺寸：%.1f * %.1f\n", myRect.length, myRect.width); // 打印初始化的长度和宽度
	float area = calArea(myRect); // 值传递
	
	printf("面积：%.1f\n", area);
	printf("调用函数后矩形尺寸：%.1f * %.1f\n", myRect.length, myRect.width); // 查看函数内修改的宽度和长度有没有影响原来的值
	
	
	return 0;
}