#include <stdio.h>
#include <stdlib.h>
#include "math_ops.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x = 10, y = 5;
	printf("%d + %d = %d\n", x, y, add(x, y));
	printf("%d - %d = %d\n", x, y, subtract(x, y));
	
	return 0;
}