#include <stdio.h>


struct Point
{
	double x;
	double y;
};

// 创建新的点
struct Point createPoint(double x, double y)
{
	struct Point newPoint;
	newPoint.x = x;
	newPoint.y = y;
	
	return newPoint;
}

// 两点的中点
struct Point midPoint(struct Point p1, struct Point p2)
{
	struct Point mid;
	mid.x = (p1.x + p2.x) / 2.0;
	mid.y = (p1.y + p2.y) / 2.0;
	
	return mid;
}

int main(void)
{
	struct Point p1 = createPoint(1.0, 2.0);
	struct Point p2 = createPoint(5.0, 6.0);
	
	struct Point mid = midPoint(p1, p2);
	printf("中点：(%.1f, %.1f)\n", mid.x, mid.y);
	
	return 0;
}