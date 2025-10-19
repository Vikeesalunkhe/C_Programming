#include <stdio.h>


void main() {
	
	int i = 0;
	int count = 0;


	for (i; i<=100; i++) {
		
		count+= i;
		printf("%d\n", count);
	}

	printf("%d\n Total count is : ", count);
}
