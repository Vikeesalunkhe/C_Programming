#include <stdio.h>

void main() {

	int i = 3;

	while (i>=0) {


		int j = 3;
		while (j>=i) {
		
			printf("* ");
			j--;
			
		}

		i--;
		printf("\n");

	}
}
