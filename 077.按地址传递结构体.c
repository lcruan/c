#include <stdio.h>

struct Rectangle{
	float length;
	float width;
};

// 按地址传递结构体
//对矩形的长度和宽度进行设置
void setDimensions(struct Rectangle *rect, float length, float width)
{
	// 指针不能通过.的方式访问，要通过->方式
	rect->length = length;
	rect->width = width;
}

// 计算面积,同时修改长度和宽度
float calArea(struct Rectangle *rect){
	float area = rect->length * rect->width;
	
	// 函数内部修改长度和宽度
	rect->length *= 2;
	rect->width *= 2;
	
	return area;
}

int main(void)
{
	struct Rectangle myRect;
	
	// 设置初始尺寸
	setDimensions(&myRect, 5.0, 3.0);
	printf("初始矩形尺寸：%.1f * %.1f\n", myRect.length, myRect.width);
	
	float area = calArea(&myRect);
	
    printf("初始面积：%.1f\n", area);
	printf("修改后的矩形尺寸：%.1f * %.1f\n", myRect.length, myRect.width);
	
	return 0;
}