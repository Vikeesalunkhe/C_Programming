#include <stdio.h>

void main() {

	int i = 0;

	while (i<=3) {


		int j = 0;
		while (j<=i) {
		
			printf("* ");
			j++;
			
		}

		i++;
		printf("\n");

	}
}
