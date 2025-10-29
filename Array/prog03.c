#include <stdio.h>

void main () {

	int size;

	printf("Enter Size of Array : ");
	scanf("%d", &size);

	int arr[size];

	printf("Size of Array is : %ld\n", sizeof(arr));

	for (int i = 0; i<size; i++) {
	
		printf("Enter Element for Array : ");
		scanf("%d", &(arr[i]));
	}

	for (int i = 0; i<size; i++) {
	
		printf("Array data is : %d\n", arr[i]);
	}
}
