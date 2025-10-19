#include <stdio.h>

void main() {

	int i = 0;

	for (i; i<=10; i++) {
		
		if (i%2 == 0) {
			
			printf("%d : is Even Number\n", i);
		}
		else {
			
			printf("%d : is Odd Number\n", i);
		
		}
	}
}
