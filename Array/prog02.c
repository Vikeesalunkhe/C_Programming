#include <stdio.h>

void main() {

	int size;

	printf("Enter Size of Array : ");
	scanf("%d", &size);

	int arr[size];

	printf("Size of Array is : %ld\n", sizeof(arr));
	int element;

	for (int i = 0; i<size; i++) {
		
	
		printf("Enter %d Element for Array is : \n", i);
		scanf("%d", &element);
		arr[i] = element;
	}

	for (int j = 0; j<size; j++) {
	
		printf("Array data is %d", arr[j]);
	}
}
