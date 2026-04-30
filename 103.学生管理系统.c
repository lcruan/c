#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 50
#define MAX_STUDENTS 100

// 学生结构体
typedef struct
{
	char student_id[MAX_STRING_LENGTH];     // 学生学号
	char student_name[MAX_STRING_LENGTH];   // 学生姓名
	int student_age;                        // 学生年龄
	char student_major[MAX_STRING_LENGTH];  // 学生专业
	float student_score;                    // 学生成绩
} Student;

// 学生列表(数组)结构
typedef struct
{
	Student student[MAX_STUDENTS];          // 学生数组
	int total_students;                     // 当前学生总数
	
} StudentList;

// 查找学生索引
int find_student_index(StudentList *student_list, char *student_id)
{
	for(int i = 0; i < student_list->total_students; i++)
	{
		if (strcmp(student_list->student[i].student_id, student_id) == 0)
			return i;
	}
	return -1;
}

// 判断学生是否存在
int is_student_exist(StudentList *student_list, char *student_id)
{
	return find_student_index(student_list, student_id) >= 0;
}

// 添加学生
void add_student(StudentList *student_list)
{
	// 判断列表是否已满
	if (student_list->total_students >= MAX_STUDENTS)
	{
		printf("学生列表已满，无法添加更多学生\n");
		return;
	}
	
	Student new_student = {0};
	char input_id[MAX_STRING_LENGTH];
	
	// 学号唯一验证
	while(1)
	{
		printf("请输入学生的学号：");
		scanf("%s", &input_id);
		
		// 验证学生是否存在
		if(is_student_exist(student_list, input_id))
		{
			printf("学号已存在，请重新输入\n");
		}
		else
		{
			strcpy(new_student.student_id, input_id);
			break;
		}
	}
	
	printf("请输入学生的姓名：\n");
	scanf("%s", new_student.student_name); // 数组可以不用加取地址
	
	printf("请输入学生的年龄：\n");
	scanf("%d", &new_student.student_age);
	
	printf("请输入学生的专业：\n");
	scanf("%s", new_student.student_major);
	
	printf("请输入学生的成绩\n");
	scanf("%f", &new_student.student_score);
	
	// 把新的数据 加到最后一个
	student_list->student[student_list->total_students] = new_student;
	student_list->total_students++;
	printf("学生信息添加成功\n");
}

// 删除学生
void delete_student(StudentList *student_list)
{
	char input_id[MAX_STRING_LENGTH];
	printf("请输入要删除的学号：");
	scanf("%s", input_id); // 数组不用加取地址
	int student_index = find_student_index(student_list, input_id);
	if (student_index >= 0) // 找到要删除的学生
	{
		for (int i = student_index; i < student_list->total_students - 1; i++)
		{
			student_list->student[i] = student_list->student[i + 1];
		}
		student_list->total_students--;
		printf("学号：%s的学生删除成功\n", input_id);
	}
	else // 未找到要删除的学生
	{
		printf("学号不存在，删除失败\n");
	}
}

// 显示所有学生
void display_all_student(StudentList *student_list)
{
	if (student_list->total_students == 0)
	{
		printf("当前无学生信息，请添加后再查询\n");
		return;
	}
	
	printf("学号\t姓名\t年龄\t专业\t成绩\n");
	
	for (int i = 0; i < student_list->total_students; i++)
	{
		Student *current_student = &student_list->student[i];  // current_student是结构体指针，访问成员用->
		printf("%s\t%s\t%d\t%s\t%.2f\n", current_student->student_id,
			current_student->student_name,
			current_student->student_age,
			current_student->student_major,
			current_student->student_score
		);
	}
}

// 修改学生
void update_student(StudentList *student_list)
{
	char input_id[MAX_STRING_LENGTH];
	printf("请输入要修改学生的学号：");
	scanf("%s", input_id);
	int student_index = find_student_index(student_list, input_id);
	if (student_index == -1)
	{
		printf("要修改的学号%s不存在，请重新输入\n", input_id);
		return;
	}
	
	Student *current_student = &student_list->student[student_index];
	printf("请输入要修改的学生的姓名：\n");
	scanf("%s", current_student->student_name); // 数组可以不用加取地址
	
	printf("请输入要修改的学生的年龄：\n");
	scanf("%d", &current_student->student_age);
	
	printf("请输入要修改的学生的专业：\n");
	scanf("%s", current_student->student_major);
	
	printf("请输入要修改的学生的成绩\n");
	scanf("%f", &current_student->student_score);
	
	printf("学生信息修改成功\n");
	
	
	
	
}

int main(void)
{
	char user_choice;
	StudentList student_list = {0};
	
	while(1)
	{
		printf("--------------欢迎来到学生管理系统--------------\n");
		printf("1:添加学生\n");
		printf("2:删除学生\n");
		printf("3:显示学生\n");
		printf("4:修改学生\n");
		printf("5:退出系统\n");
		printf("请输入您的选择：\n");
		
		scanf(" %c", &user_choice);
		
		if (user_choice == '1')
		{
			add_student(&student_list);
		}
		else if (user_choice == '2')
		{
			delete_student(&student_list);
		}
		else if (user_choice == '3')
		{
			display_all_student(&student_list);
		}
		else if (user_choice == '4')
		{
			update_student(&student_list);
		}
		else if (user_choice == '5')
		{
			printf("退出系统\n");
			return 1;
		}
		else
		{
			printf("请重新输入\n");
		}
	}
	return 0;
}