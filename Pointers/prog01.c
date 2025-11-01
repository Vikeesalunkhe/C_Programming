#include <stdio.h>

void main() {

	int num = 10;    //declaration
	int *ptr = &num;   //store address of num variable //pointer Referencing

	printf("%d\n", num);
	printf("%p\n", &num);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);

	printf("------------------------\n");

	int num02;       //defenatoion
	num02 = 20;      //Assignment
	int *ptr_num02;   //wild pointer
	ptr_num02 = &num02;

	printf("pointer value is : %d\n", *ptr_num02);
	printf("Addres of num02 : %p\n", ptr_num02);


}
