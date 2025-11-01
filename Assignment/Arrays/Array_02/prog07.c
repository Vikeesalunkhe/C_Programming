////Write a Program to create an interger N numbers of Array, stote the square of even element, and store the cube of odd element, ptiny array.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array is is : %d\n", size);

    int arr[size];

    for (int i = 0; i < size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));

        if (arr[i] % 2 == 0) {

            arr[i] *= arr[i]; 

        } else {

            int square = (arr[i] * arr[i]);

            arr[i] = square * arr[i]; 

        }
    }

    printf("Array Created Sucseccfully \n");

    for (int i = 0; i<size; i++) {

        printf("%d\n", arr[i]);
    }

}