#include <stdio.h>

void main() {

	int arrSize;

	printf("Enter Size of Array : ");
	scanf("%d", &arrSize);

	printf("Size of Array is : %ld\n", sizeof(arrSize));
	
	int arr[arrSize];
	for (int i = 0; i<arrSize; i++) {
	
		printf("Enter Array Element for index is %d", i);
		scanf("%d", &(arr[i]));
	}
	
	int evenNo = 0;
	int oddNo = 0;

	for (int i = 0; i<arrSize; i++) {
		
		if (arr[i] % 2 == 0) {
			printf("Array Element %d is Even Noumber \n", arr[i]);
			evenNo++;
	
		} else {
		
			printf("Array Element %d is Odd Noumber \n", arr[i]);
			oddNo++;
		}
	}

	printf("Total Even No : %d\n, and Total Odd No. : %d\n", evenNo, oddNo);
}
