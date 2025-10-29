#include <stdio.h>

void main() {

	int size;  //user enter size of array

	printf("Enter size of Array : ");
	scanf("%d", &size);

	int arr[size];    //initializ size of array
			  
	printf("Array size is : %ld\n", sizeof(arr));

	for (int index = 0; index<size; index++) {
	
		printf("Enter Value in Array for index No. %d : ", index);
		scanf("%d", &(arr[index]));
	}

	
	int sum = 0;


	for (int index = 0; index<size; index++) {
		
		sum+=arr[index];

	}

	printf("Total sum of Array Element is %d\n", sum);
}
