#include <stdio.h>

void main() {

	int arr[3] = {10, 20, 30};
	char charArr[2];
	float floatArr[3];
	long longArr[4];

	printf("size of array is : %ld\n", sizeof(arr));  //12

	printf("size of char array is : %ld\n", sizeof(charArr));  //12
	printf("size of float array is : %ld\n", sizeof(floatArr));  //12
	printf("size of long array is : %ld\n", sizeof(longArr));  


}
