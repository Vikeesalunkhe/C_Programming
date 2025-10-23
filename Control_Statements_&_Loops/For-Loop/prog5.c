#include <stdio.h>


void main() {
	
	for (int i = 1; i<=10; i++) {
	
		if (i%2 == 0) {
		
			printf("%c", 64+i);
		}
		else {
		
			printf("%d", i);
		}
	}
}
