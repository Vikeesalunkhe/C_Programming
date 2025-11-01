// Write a Program to Print Table of User input


#include <stdio.h>

void main() {

	int num;
	printf("Enter user input : ");
	scanf("%d", &num);

	for (int i = 1; i<=10; i++){
	
		printf("%d\n", num*i);
	}
}
