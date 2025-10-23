#include <stdio.h>

void main() {
	
	float a1, a2, a3;

	printf("Enter 3 Angles");
	scanf("Angle 1 : %f, Angle 2 : %f, Angle 3 : %f", &a1, &a2, &a3);
	
	float sum = a1+a2+a3;

	if (sum == 180) {
	
		printf("Its Triangle");
	}

	else {
	
		printf("Its not Triangle");
	}
}
