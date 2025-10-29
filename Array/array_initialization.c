#include <stdio.h>


void main() {

	int arr[3] = {10, 20, 30};
	int arr01[] = {100, 200, 300, 400};
	int arr02[3] = {12, 23};
 
 
	printf("%d\n", arr[0]);      	//10 
	printf("%d\n", arr01[2]);	//300
	printf("%d\n", arr02[400]);   	//garbage 0r 0					
}
