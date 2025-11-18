#include <stdio.h>


void array(int* arry_address, int size) {

    for (int i = 0; i<size; i++) {

        printf("Array Element is : %d\n", *(arry_address + i));
    }}

void main() {

    int size;    
    printf("Enter Array size : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter Array Element : ");
    for (int i = 0; i<size; i++) {

        scanf("%d", &arr[i]);
    }

    array(arr, size);
    

}