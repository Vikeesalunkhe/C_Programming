//Write a Program to print count of even numbers between 2 to 200.


#include <stdio.h>

void main() {

	int count = 0;

	for (int i = 2; i<=200; i++) {
	
		if (i % 2 == 0) {
		
			count +=1;
		}

		
	}

	printf("Total Count of Even Number Between 2 to 200 is : %d\n", count);
}	
