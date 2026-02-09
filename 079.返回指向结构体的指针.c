#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
	char name[50];
	int age;
};

// 创建并返回指向新Person的指针 （动态分配内存）
struct Person *createPerson(const char *name, int age)
{
	struct Person *person= (struct Person *)malloc(sizeof(struct Person));
	if (person != NULL)
	{
		strcpy(person->name, name);
		person->age = age;
	}
	return person;
}

// 返回年龄比较大的那个人的指针
struct Person *getOlder(struct Person *p1, struct Person *p2)
{
	if (p1->age >= p2->age)
		return p1;
	else 
		return p2;
}

int main(void)
{
	struct Person *person1 = createPerson("张三", 25);
	struct Person *person2 = createPerson("李四", 30);
	
	if (person1 != NULL && person2 != NULL)
	{
		printf("person1：%s, %d岁\n", person1->name, person1->age);
		printf("person2：%s, %d岁\n", person2->name, person2->age);
		struct Person *older = getOlder(person1, person2);
		printf("年龄较大的是：%s\n", older->name);
		
		// 释放内存
		free(person1);
		free(person2);
	}

	return 0;
}