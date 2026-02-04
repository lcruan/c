#include <stdio.h>
#include <string.h>
struct Person{
	char name[50];
	int age;
	float height;
} person5; // 带标签也可以声明变量

struct {
	char name[50];
	int age;
	float height;
} person3, person4; // 不带标签名字，同时把变量声明好

int main(void)
{
	int a = 10;
	struct Person person1, person2;
	struct Person staff[10];
	struct Person *p;       // 定义了一个指向Person的指针
	
	// 完整初始化
	struct Person person7 = {
		"张三",
		25,
		175.5
	};
	// C99以后的标准
	struct Person person8 = {
		.name = "李四",
		.height = 189.1,
		.age = 30
	};
	
	// 逐个成员赋值
	struct Person person9;
	strcpy(person9.name, "王五"); // 字符串不能直接用等号赋值
	person9.age = 22; // int类型可以直接用等号赋值
	person9.height = 168.5;
	
	// 使用另一个结构体变量初始化
	struct Person person10 = person9;
	
	printf("学生姓名：%s\n", person10.name);
	printf("学生身高：%.1f\n", person10.height);
	printf("学生年龄：%d\n", person10.age);
	
	return 0;
}