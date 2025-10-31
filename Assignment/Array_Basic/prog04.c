// Write a Program to create integer N number of Array, print Product of even element.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array Size id : %d\n", size);

    int arr[size];

    int product = 1;

    for (int i = 0; i<size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    printf("Array Created Sucseccfully\n");

    for (int i = 0; i<size; i++) {

        if (arr[i] % 2 == 0) {

            product *= arr[i];
        }
    }

    printf("Product of Even Element is : %d\n", product);
}
