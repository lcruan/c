#include <stdio.h>

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
	
	return 0;
}