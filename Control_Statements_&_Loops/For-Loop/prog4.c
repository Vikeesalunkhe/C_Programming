#include <stdio.h>


void main() {
	
	int start;
	int end;

	printf("Check Even Add From : ");
	scanf("%d", &start);

	printf("to ");
	scanf("%d", &end);


	for (int i = start; i<=end; i++) {
		
		if (i % 2 == 0) {
		
			printf("%d is Even Value\n", i);
		}

		else {
		
			printf("%d is Odd Value\n", i);
		}
		
		
	}


}
