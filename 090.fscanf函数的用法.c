#include <stdio.h>

int main(void)
{
	
	FILE *fp;
	int id;
	float score;
	char name[50];
	
    // 1. 打开文件（假设文件data.txt已存在）
	fp = fopen("data.txt", "r");
	
	if (fp == NULL)
	{
		printf("无法打开文件!\n");
		return 1;
	}
	
	// 2. 使用fscanf读取数据
	fscanf(fp, "%d %f %s", &id, &score, name); // 字符串直接写数组名字就行，因为数组名字就是一个指针
	
	// 3. 打印读取结果
	printf("学号：%d, 成绩：%.1f, 姓名：%s\n", id, score, name);
	
	// 4. 关闭文件
	fclose(fp);
	
	
	
	return 0;
}