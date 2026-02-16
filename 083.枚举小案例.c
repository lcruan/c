#include <stdio.h>

enum Weekday
{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY	
};

void printDay(enum Weekday day)
{
	if (day == SATURDAY || day == SUNDAY)
		printf("这是周末！\n");
	else 
		printf("这是工作日。\n");
	
	switch(day)
	{
		case MONDAY: printf("星期一\n"); break;
		case TUESDAY: printf("星期二\n"); break;
		case WEDNESDAY: printf("星期三\n"); break;
		case THURSDAY: printf("星期四\n"); break;
		case FRIDAY: printf("星期五\n"); break;
		case SATURDAY: printf("星期六\n"); break;
		case SUNDAY: printf("星期日\n"); break;
		default: printf("无效的日期\n"); break;
	}
}

int main(void)
{
	
	enum Weekday today = WEDNESDAY;
	printDay(today);
	
	int workHours[7] = {8, 8, 8, 8, 8, 0, 0};
	printf("周三的工作时间：%d小时\n", workHours[WEDNESDAY]);
	return 0;
}