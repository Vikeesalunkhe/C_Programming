#include <stdio.h>

void main() {

	int num = 10;

	int *ptr = &num;   //store address of num variable
	
	
	printf("Pointer of Num variable is : %d\n", *ptr);
}
