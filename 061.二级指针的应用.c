#include <stdio.h>

void swapNum(int a,  int b)
{
	printf("交换前：a = %d, b = %d\n", a, b);

	int temp = a;
	a = b;
	b = temp;
	printf("交换后：a = %d, b = %d\n", a, b);
}

void swapPoint(int **ptr1, int **ptr2)
{
	printf("交换前：\n");
	printf("*ptr1 = %p, **ptr1 = %d\n", *ptr1, **ptr1);
	printf("*ptr2 = %p, **ptr2 = %d\n", *ptr2, **ptr2);
	
	int *temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
							
	printf("交换后：\n");
	printf("*ptr1 = %p, **ptr1 = %d\n", *ptr1, **ptr1);
	printf("*ptr2 = %p, **ptr2 = %d\n", *ptr2, **ptr2);
}

int main(void)
{
	
	swapNum(10, 20);
	
	int a = 10, b = 20;
	int *ptrA = &a;
	int *ptrB = &b;
	printf("交换前：\n");
	printf("ptrA指向a(%d), ptrB指向b(%d)\n", *ptrA, *ptrB);
	
	swapPoint(&ptrA, &ptrB);
	printf("交换后：\n");
	printf("ptrA指向原来的b(%d), ptrB指向原来的a(%d)\n", *ptrA, *ptrB);
	
	return 0;
}