#include <stdio.h>

void main() {

	int num = 1;
	int even_count = 0, odd_count = 0;

	while (num<=100) {
	
		if (num%2 == 0) {
		
			printf("%d is an Even Number\n", num);
			even_count+=1;
		} else {
		
			printf("%d is an Odd Number\n", num);
			odd_count+=1;
		}

		num+=1;
	}

	printf("Total Even Number is %d\n and Total Odd Number is %d\n is range of 1 to 100", even_count, odd_count);
	

	
}
