#include <stdio.h>
#include <string.h>

void main() {
	
	char name[] = "vikee";


	if (name[0] == 'v') {
		printf("The name starts with v\n");
	}
	else if (name[0] == 'a') {
		printf("The name starts with a\n");
	}
	else {
		printf("The name does not start with v or a\n");
	}
	
}
