#include <stdio.h>

//#define MONDAY 0
//#define TUESDAY 1

enum Weekday
{
	MONDAY = 1,
	TUESDAY,
	WEDNESDAY = 1,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY	
} today, tomorrow;

int main(void)
{
	int day = TUESDAY; // 0：星期一，1：星期二，2：星期三
	
	enum Weekday day1, day2;
	
	day1 = MONDAY;
	day2 = FRIDAY;
	printf("day1 = %d, day2 = %d\n", day1, day2);
	
	printf("枚举类型大小：%d字节\n", sizeof(enum Weekday));
	
	return 0;
}