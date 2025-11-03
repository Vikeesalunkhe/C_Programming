// Write a Program to cteate N numbers of two interger Array,  check array have the same size.


#include <stdio.h>

void main() {

    int arr01_size;
    int arr02_size;
    int sum01 = 0;
    int sum02 = 0;

    printf("Enter size of Array 01 : ");
    scanf("%d", &arr01_size);
    int arr_01[arr01_size];
    
    for (int i = 0; i<arr01_size; i++) {

        printf("Enter array 01 element for index %d is : ", i);
        scanf("%d", &(arr_01[i]));
    }

    printf("Enter size of Array 02 : ");
    scanf("%d", &arr02_size);
    int arr_02[arr02_size];
    

    for (int i = 0; i<arr02_size; i++) {

        printf("Enter array 02 element for index %d is : ", i);
        scanf("%d", &(arr_02[i]));

    }

    if (sizeof(arr_01) == sizeof(arr_02)) {

        printf("Size of both array is same\n");
    } else {
        printf("Size of both array is not same\n");
    }


}