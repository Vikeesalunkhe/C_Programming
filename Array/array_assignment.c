#include <stdio.h>

void main() {

	int arr[3];  //arr : arr Name,  [3] : array size

	arr[0] = 10;  //assign 10 value to index 0
	arr[1] = 20;
	arr[2] = 30;

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);    //garbage or 0

}
