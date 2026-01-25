#include <stdio.h>

int main(void)
{
	int scores[5] = {85, 92, 78, 96, 88};
	int index = 2;
	
	printf("第一个学生的成绩：%d\n", scores[0]);
	printf("第二个学生的成绩：%d\n", scores[1]);
	
	printf("scores[%d] = %d\n", index, scores[index]); // 变量取
	printf("scores[%d] = %d\n", index + 2, scores[index + 2]); // 表达式取
	
	scores[1] = 95;
	printf("[修改后]第二个学生的成绩：%d\n", scores[1]);
	
	return 0;
}