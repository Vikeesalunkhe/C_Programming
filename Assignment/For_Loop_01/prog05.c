// Write a Program to Print Even Number Between 22 to 98 in revers Order

#include <stdio.h>

void main() {
	
	printf("Even No. Between 22 to 98 in reverse Orde\n");

	for (int i = 98; i >= 22; i--) {
	
		if (i % 2 == 0) {
		
			printf("%d\n", i);
		}
	}

}
