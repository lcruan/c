#include <stdio.h>

struct Student
{
	char name[50];
	int id;
	float score;
};


int main(void)
{
	struct Student student = {
		"张三",
		10001,
		85.5
	};
	
	struct Student *p = &student; // 定义一个指针 指向student
	
	printf("姓名：%s\n", p->name);
	printf("姓名：%s\n", (*p).name);
	
	p->score = 90.0;
	(*p).id = 10005;
	printf("score：%.1f, id: %d\n", p->score, p->id);
	
	return 0;
}