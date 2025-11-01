////Write a Program to create an interger N numbers of Array, give user input as a index nu. and print the index no. value.


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
    }

    printf("Array Created Sucseccfully \n");

    int index = 0;

    for (int i = 1; i; i++) {

        printf("Enter user Index number : ");
        scanf("%d", &index);

        if (index >= size) {

            printf("Enterd value is grater than array size\n Re-Enter value");
        } else {
            break;
        }
    }

    for (int i = 0; i<index; i++){

        printf(" %d |", arr[i]);
    }
}