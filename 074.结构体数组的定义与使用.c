#include <stdio.h>

struct Student
{
	char name[50];
	int id;
	float score;
};

int main(void)
{
	struct Student student1[5]; // 定义了一个包含5个Student结构体的数组
	
	struct Student student2[3] = { // 定义了数组，同时对数组的每一个元素进行初始化
		{
			"张三", 10001, 85.5
		},
		{
			"李四", 10002, 92.0
		},
		{
			"王五", 10003, 78.5
		}
	};
	
	// C99 不按照顺序
	struct Student student3[3] = {
		[0] = {.name = "张三", .id = 10001, .score = 85.5 },
		[1] = {.name = "李四", .id = 10002, .score = 92.0},
		[2] = {.name = "王五", .id = 10004, .score = 78.5}
	};
	
	// 访问第一个学生的姓名
	printf("第一个学生：%s\n", student2[0].name);
	// 修改第二个学生的成绩
	student2[1].score = 95.0;
	printf("第二个学生成绩：%.1f\n", student2[1].score);
	
	// 遍历数组，打印所有学生的信息
	for (int i = 0; i < 3; i++)
	{
		printf("学生%d：%s, 学号：%d, 成绩：%.1f\n",
			 i + 1, student2[i].name, student2[i].id, student2[i].score);
	}
	
	return 0;
}