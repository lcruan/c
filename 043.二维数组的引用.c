#include <stdio.h>

int main(void)
{
	
	int scores[3][4] = {
		{
			85, 92, 78, 96
		},
		{
			88, 76, 94, 82
		},
		{
			91, 89, 87, 93
		}
	};
	
	int x = 1, y = 2;
	
	printf("第1个学生的第1门课成绩：%d\n", scores[0][0]);
	printf("第2个学生的第3门课成绩：%d\n", scores[1][2]);
	
	printf("scores[%d][%d] = %d\n", x + 1, y + 1, scores[x + 1][y + 1]);
	
	scores[1][1] = 80;
	scores[0][3] = 98;
	
	printf("[修改后]第2个学生的第2门课成绩：%d\n", scores[1][1]);
	printf("[修改后]第1个学生的第4门课成绩：%d\n", scores[0][3]);
	
	
	return 0;
}