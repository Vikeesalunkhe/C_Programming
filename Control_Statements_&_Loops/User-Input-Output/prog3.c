#include <stdio.h>

void main() {

	int val;
	printf("Enter Value : ");
	scanf("%d", &val);

	if (val > 0) {
	
		printf("%d is Positive Value", val);

	}
	else {
	
		printf("%d is Negative Value", val);
	}
}
