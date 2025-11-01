// Write a Program to count of numbers are divisible by 2 and 5 between 1 to 100.


#include <stdio.h>

void main() {

	int count = 0;

	for (int i = 1; i<=100; i++) {
	
		if (i % 2 ==0 && i % 5 == 0) {
		
			count+=1;
		}
	}

	printf("Total Numbers of Divisible by 2 and 5 is : %d\n", count);
}
