#include <stdio.h>

int main(void)
{
	// 指针定义
	// 数据类型 *指针变量名
	int *pNum; // 指向整型数据的指针
	float *pScore; // 指向浮点型数据的指针
	char *pGrade; // 指向字符型数据的指针
	int *p1, *p2, *p3;
	
	// 显示指针变量的大小
	printf("指针变量大小：int* %d字节，float* %d字节，char* %d字节\n",
	sizeof(pNum), sizeof(pScore), sizeof(pGrade));
	
	// 指针的赋值
	int num = 42;
	float score = 85.5f;
	char grade = 'A';
	
	pNum = &num; // 让pNum指向num的地址
	pScore = &score; // 让pScore指向score的地址
	pGrade = &grade; // 让pGrade指向grade的地址
	
	printf("num的地址：\t%p\n", &num);
	printf("pNum的值：\t%p\n", pNum);
	printf("pNum指向的值：%d\n", *pNum);
	
	*pNum = 10;
	printf("【修改后】pNum指向的值：%d\n", *pNum);
	
//	int *pNum1;
//	pNum1 = pNum;
//	printf("pNum1指向的值：%d\n", *pNum1);
//	*pNum1 = 20;
//	printf("【修改后】pNum1指向的值：%d\n", *pNum1);
//	printf("【修改后】pNum指向的值：%d\n", *pNum);
	
	int *pNum1 = NULL;
	if (pNum1 == NULL)
	{
		pNum1 = pNum;
		printf("pNum1指向的值：%d\n", *pNum1);
	}
	
	pNum1 = NULL;
	printf("pNum1 = %p\n", pNum1); // 00000000
//	*pNum1 = 30; // NULL指针不能对它进行操作
	
	return 0;
}