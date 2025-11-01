//Write a Program to create an interger N numbers of Array, print the sum of Aquare of all elements.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array is is : %d\n", size);

    int arr[size];
    int squareSum=0;

    for (int i = 0; i < size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    printf("Array Created Sucseccfully \n");
    

    for (int i = size-1; i>=0; i--) {

        squareSum += (arr[i] * arr[i]);
    }

    printf("Sum of Square of All Elements : %d\n", squareSum);

}