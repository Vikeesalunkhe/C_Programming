//Write a Program to check the count of Divisors (Between 2 to 10) for a user given Number


#include <stdio.h>

void main() {

	int num;
	printf("Enter Num : ");
	scanf("%d", &num);

	printf("User Enterd Num is : %d\n", num);
	int count = 0;

	for (int i = 2; i<=10; i++) {
	
		if (num % i == 0) {
		
			count += 1;

		}
	}

	printf("Total Number Divisor between 2 to 10 is : %d\n", count);
}
