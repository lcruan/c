#include <stdio.h>

int main(void)
{
	// 第一层：普通变量
	int value = 100;
	printf("变量value = %d, 地址：%p\n", value, &value);
	
	// 第二层：指向变量的指针
	int *ptr = &value;
	printf("\n指针ptr指向value，ptr的值：%p\n", ptr);
	printf("ptr本身的地址：%p\n", &ptr); //&符号不仅能取出普通变量的地址，也能取出指针变量的地址
	printf("通过ptr访问value：*ptr = %d\n", *ptr);
	
	// 第三层：指向指针的指针
	int **pptr = &ptr;
	printf("\n二级指针pptr指向ptr，pptr的值：%p\n", pptr);
	printf("pptr本身的地址：%p\n", &pptr);
	printf("通过pptr访问ptr：*pptr = %p\n", *pptr);
	printf("通过pptr访问value: **pptr = %d\n", **pptr);
	
	// 通过各种方式修改value
	*ptr = 200;
	printf("\n通过*ptr修改后：%d\n", value);
	
	**pptr = 300;
	printf("\n通过**ptr修改后：%d\n", value);
	
	
	
	return 0;
}