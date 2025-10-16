#include <stdio.h>

void main() {
	
	int jeeMarks = 200;

	if (jeeMarks >= 180) {
		
		printf("IIT\n");
	} else if (jeeMarks < 180 && jeeMarks > 150) {
		
		printf("BITsOilani\n");
	} else if (jeeMarks < 150 && jeeMarks > 100) {
		
		printf("COEP\n");
	} else {
		
		printf("Sinhgad/JSPM");
	}
	
}
